# Cartesian Tree

[![CMake](https://github.com/Algorithms-and-Data-Structures-2021/semester-work-cartesian-tree/actions/workflows/cmake.yml/badge.svg)](https://github.com/Algorithms-and-Data-Structures-2021/semester-work-cartesian-tree/actions/workflows/cmake.yml)

🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺🐺

[Наша папка на гугл диске](https://drive.google.com/drive/folders/1A01XumxrWELLVbNP_Sq-Tcs-M1O4V5Ne)
 
_Краткое описание семестрового проекта. Следует отразить информацию по следующим пунктам:_

- _Какая структура данных реализуется?_
 <br/>***Структура данных - Cartesian Tree (Декартово дерево).***

- _Что она из себя представляет (сбалансированное дерево, линейный список и пр.)?_
 <br/>***Это структура данных, объединяющая в себе бинарное дерево поиска и бинарную кучу (отсюда и второе её название: treap (tree + heap) и дерамида (дерево + пирамида), также существует название курево (куча + дерево).***

- _Где и как она используется (приложения)?_
 <br/>***В приложение AlgoLab добавлена сегодняшняя сортировка декартовым деревом.***

- _Какие операции над ней можно выполнять (поиск, удаление, добавление, вставка и пр.)?_
 <br/>***Вставка, поиск, разбиение на 2 дерева, слияние 2-ух деревьев, удаление и возврат вершины.***

- _Какова теоретическая сложность операций (поиск за `O(log(n))`, вставка за `O(n^2)` и т.д.)?_
  <br/>***Вставка -  `O(log(n))`, Поиск -  `O(log(n))`, Удаление и возврат вершины -  `O(log(n))`, Слияние и Разбиение двух деревьев - `O(Mlog(N/M))`.***

- _Какая-то другая справочная информация о проекте._
***https://ru.wikipedia.org/wiki/Декартово_дерево***

## Команда "В цирке не выступаем"

_Заполните таблицу с указанием вклада каждого из участников в проект._

**Примечание**. Преподаватель может определить вклад любого из участников команды по истории коммитов.

| Фамилия Имя        | Вклад (%) | Прозвище              |
| :---               |   ---:    |  ---:                 |
| Гиниятов Марат     | 40        |  Бүре                 |
| Зиянгиров Руслан   | 30        |  Волк                 |
| Гатин Рамиль       | 30        |  Wolf                 |

**Девиз команды**
> _Каждый думает, что знает меня, но не каждый знает, что не знает, кто думает.........._

## Структура проекта

_Описание основных частей семестрового проекта._

**Пример**. Проект состоит из следующих частей:

- [`src`](src)/[`include`](include) - реализация структуры данных (исходный код и заголовочные файлы);
- [`benchmark`](benchmark) - контрольные тесты производительности структуры данных ;
- [`dataset`](dataset) - наборы данных для запуска контрольных тестов и их генерация;

## Требования (Prerequisites)

_В этом разделе задаются основые требования к программному и аппаратному обеспечению для успешной работы с проектом._

**Пример**. Рекомендуемые требования:

1. С++ компилятор c поддержкой стандарта C++17 (например, _GNU GCC 8.1.x_ и выше).
2. Система автоматизации сборки _CMake_ (версия _3.12.x_ и выше).
3. Интерпретатор _Python_ (версия _3.7.x_ и выше).
4. Рекомендуемый объем оперативной памяти - не менее 4 ГБ.
5. Свободное дисковое пространство объемом ~ 3 ГБ (набор данных для контрольных тестов).
6. Наличие виртуальная машина Java(JVM), наличие JDK версии 1.8.0. Для запуска генератора наборов данных для тестов.

## Сборка и запуск

_Инструкция по сборке проекта, генерации тестовых данных, запуска контрольных тестов и примеров работы._

_Постарайтесь написать инструкцию так, чтобы незнакомый с проектом человек смог самостоятельно всё запустить._

### Пример (Windows)

#### Сборка проекта

_Опишите процесс сборки проекта._

Склонируйте проект к себе на устройство через [Git for Windows](https://gitforwindows.org/) (либо используйте
возможности IDE):

```shell
git clone https://github.com/Algorithms-and-Data-Structures-2021/semester-work-cartesian-tree.git
```

Для ручной сборки проекта в терминале введите:

```shell
# переход в папку с проектом
cd C:\Users\username\asd-projects\semester-work-cartesian-tree

# создание папки для файлов сборки (чтобы не засорять папку с проектом) 
mkdir -p build && cd build 

# сборка проекта
cmake .. -DCMAKE_BUILD_TYPE=RelWithDebInfo && cmake --config RelWithDebInfo --build . 
```

### Генерация тестовых данных

_Тестовые данные хранятся в виде [.csv файлов](https://en.wikipedia.org/wiki/Comma-separated_values):_


Тестовые данные представлены в CSV формате (см.
[`dataset/data/dataset-example.csv`](dataset/data/dataset-example.csv)):

```csv
946454	106098	40486	63289	916488	831323	541594	559466	428651	777783
...
```

**Расположение файлов в папке data:**

```shell
dataset/data/
  split/
        /pack1
            01.csv
              ...
            12.csv
        /pack2
        ......
        /pack10
  search/
       /pack1
            01.csv
              ...
            12.csv
        /pack2
        ......
        /pack10
  ...
```

По названию директории `/dataset/data/split` можно понять, что здесь хранятся наборы данных для контрольных тестов по
**разделению дерева по вершине**. Папки **pack1 ....pack10-10** различных наборов данных, к которых находятся 12 .csv файлов, содержащие в себе случайны набор чисел **01.csv-100 элементов, 12.csv-5 000 000 элементов**. 

### Контрольные тесты (benchmarks)

При тестировании измерялось только **время** выполнения на 12 наборах данных   (100,500,1 000,5 000, 10 000, 25 000, 50 000,100 000, 500 000, 1 000 000, 2 500 000, 5 000 000 чисел).

**Для запуска контрольных тестов необходимо предварительно сгенерировать или скачать готовый набор тестовых данных.**

Наборы данных должны находиться в папке семестровой работы на [Google Drive](https://drive.google.com/drive/folders/1TSjdTTbDApgpEV-YHxOiE-YiCl7uDN7s?usp=sharing). (Вес файла-  3ГБ)

### Список контрольных тестов

| Название                  | Описание                                | Метрики         |
| :---                      | ---                                     | :---            |
| `SPLIT`                   | Разделение дерева по вершине            | _время_         |
| `MERGE`                   | Слияние двух деревьев                   | _время_         |
| `ERASE`                   | Удаление вершины из дерева              | _время_         |
| `INSERT`                  | Добавление вершины в дерево             | _время_         |
| `SEARCH`                  | Поиск вершины в дереве                  | _время_         |


### Работа с замером времени

Чтобы замерить время выполнения операции необходимо сделать несколько шагов:
* Найдите .cpp файл `demo_benchmark.cpp` в папке `benchmark`.
* Измените путь в поле path(путь должен вести к одному из .csv файлов (01.csv,02...12.сsv):
![Картинка](https://i.gyazo.com/7fd10ea36f375bdfdbfbc8205ebf1ac2.png)  

* В самом коде достаточго убрать комментирование с методов, чтобы замерить операцию 

* Важная ремарка! Для каждого набора данных нужно поменять область значений rand() в операциях:
  * для 100 элементов  -- rand() % 99 + 1)
  * для 500 элементов  -- rand() % 499 + 1)
  * для 1000 элементов  -- rand() % 999 + 1)
  * ............................................
  * для 5 000 000 элементов -- rand() % 4 999 999 + 1
* Результат замера будет выведен в консоли
![Картинка](https://i.gyazo.com/d91e85032c4a2ccc019a95fa2b04cc23.png)

* Рекомендую просмотреть видео, где показываются примеры замеров. [Ссылка](https://drive.google.com/file/d/1Az4Bh8KbwaUZWUPSnmVw2GybufD5nRzt/view?usp=sharing)


### Генерация наборов данных
Вы можете скачать полный сгенерированный набор данных с нашего [гугл диска](https://drive.google.com/drive/folders/1A01XumxrWELLVbNP_Sq-Tcs-M1O4V5Ne) , либо сгенерировать его самостоятельно с помощью `DatasetGenerator.java`. 
####Как сгенерировать  набор данных
* Открыть `DatasetGenerator.java` в папке dataset
* Поменять путь в поле `path` (P.S не стоит указывать тот путь, где может находится папка с названием `data`. P.S.S желательно поменять слеши(\\ или /) , которые соответствуют вашей ОС)
![Картинка](https://i.gyazo.com/63dfc6ecbf1c5aaa9d86cbbf2f380ea1.png)
* Запустить программу
* Радоваться результату
* [Видео-пример](https://drive.google.com/file/d/1xcYw8U_R_nMSXM6QIi22p3qM_aZTwpRy/view?usp=sharing)



## Источники

_Список использованных при реализации структуры данных источников._

1. *[https://habr.com/ru](https://habr.com/ru/post/101818/) (реализация декартового дерева на языке java)*

2. *[https://neerc.ifmo.ru](https://neerc.ifmo.ru/wiki/index.php?title=Декартово_дерево) (вики-статья)*

3. *[https://www.youtube.com](https://www.youtube.com/watch?v=68mMGJl5F8s&t=728s&ab_channel=%D0%9E%D0%BB%D0%B8%D0%BC%D0%BF%D0%B8%D0%B0%D0%B4%D0%BD%D0%BE%D0%B5%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%D0%B2%D0%A3%D0%BB%D0%93%D0%A2%D0%A3)(понятное объяснение принципа работы декартового дерева)*

4. *[http://opentrains.mipt.ru](http://opentrains.mipt.ru/zksh/files/zksh2015/lectures/zksh_cartesian.pdf)* 

_**Это не плагиат, это уважение чужого труда и помощь своим сокурсникам более подробно разобраться в теме.**_
