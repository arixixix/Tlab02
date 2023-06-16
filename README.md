# Tlab02
Все команды и результаты операций содержатся в файле log.txt

Part I

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
3. Создайте файл `hello_world.cpp` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку `using namespace std;`


```sh
% touch hello_world.cpp
% vim hello_world.cpp
```

hello_world.cpp

```sh
#include <iostream>
using namespace std;

int main() {
        cout << "Hello, World!" << endl;
        return 0;
}
```

4. Добавьте этот файл в локальную копию репозитория.
5. Закоммитьте изменения с осмысленным сообщением.

```sh
% git add hello_world.cpp 
% git commit -m "Add hello_world.cpp with bad code"

```

6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.

```sh
#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	getline(cin, name);
	cout << "Hello World from " << name << endl;
	return 0;
}
```

7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?

Как оказалось, что надо использовать git add

```sh
% git add hello_world.cpp 
% git commit -m "Upd: hello_world.cpp; better work with user's name"
```

8. Запуште изменения в удалёный репозиторий.

```sh
% git push 
```

9. Проверьте, что история коммитов доступна в удалёный репозитории.

Part II

Note: Работать продолжайте с теми же репоззиториями, что и в первой части задания.

1. В локальной копии репозитория создайте локальную ветку patch1.
2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.

```sh
% git checkout -b patch1
Переключились на новую ветку «patch1»
% git branch            
  main
* patch1
```

hello_world.cpp

```sh
#include <iostream>
#include <string>

int main() {
 	std::string name;
 	std::getline(std::cin, name);
 	std::cout << "Hello World from " << name << std::endl;
 	return 0;
}
```

3. commit, push локальную ветку в удалённый репозиторий.

```sh
% git add hello_world.cpp 
% git commit -m "Upd hello_world.cpp: without using namespace std"
% git push --set-upstream origin patch1
```

4. Проверьте, что ветка patch1 доступна в удалёный репозитории.
5. Создайте pull-request patch1 -> master.

<img width="948" alt="изображение" src="https://github.com/arixixix/Tlab02/assets/92848880/8c073ff3-7d86-43bf-b0f2-cd522ac085da">


6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.
7. commit, push.

hello_world.cpp

```sh
#include <string>

int main() {
 	std::string name; //переменная для имени
 	std::getline(std::cin, name); // читаем строку
 	std::cout << "Hello World from " << name << std::endl; //выводим результат 
 	return 0;
}
```

8. Проверьте, что новые изменения есть в созданном на шаге 5 pull-request
9. В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.
10. Локально выполните pull.
11. С помощью команды git log просмотрите историю в локальной версии ветки master.
12. Удалите локальную ветку patch1.

```sh
% git checkout main
% git pull
% git log
% git branch -d patch1           
Ветка patch1 удалена (была 8df475f).
% git branch 
* main
```

Part III

Note: Работать продолжайте с теми же репоззиториями, что и в первой части задания.

    1. Создайте новую локальную ветку patch2.
    2. Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.
    3. commit, push, создайте pull-request patch2 -> master.
    4. В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
    5. Убедитесь, что в pull-request появились конфликтны.
    6. Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
    7. Сделайте force push в ветку patch2
    8. Убедитель, что в pull-request пропали конфликтны.
    9. Вмержите pull-request patch2 -> master.
