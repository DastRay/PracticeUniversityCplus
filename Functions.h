#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdbool>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <unordered_map>
using namespace std;

/**
 * @brief нахождение общего делителя двух чисел
 * @param a первое число
 * @param b второе число
 * @return НОД
*/
int gcd(unsigned int a, unsigned int b);

/**
 * @brief функция для проверки числа на простату
 * @param num проверяемое число
 * @return true если число простое / false иначе
*/
bool isPrime(long long int num);

/**
 * @brief сортировка массива методом пузырька
 * @param arr массив
 * @param size размер массива
*/
void bubbleSort(int* arr, const int size);

/**
 * @brief функция для заполнения массива
 * @param nums массив
 * @param size размер массива
*/
void fillArr(int* nums, const int size);

/**
 * @brief функция для печати массива
 * @param nums массив
 * @param size размер массива
*/
void printArr(const int* nums, const int size);

/**
 * @brief бинарный поиск элемента в массиве
 * @param nums массив
 * @param n размер массива
 * @param target искомый элемент
 * @return индекс найденого элемента
*/
int binarySearch(const int* nums, const int size, const int target);

/**
 * @brief нахождение уникальных элементов в массиве
 * @param arr массив
 * @param size размер массива
*/
void findUniqueElements_notOn(int* nums, const int size);

/**
 * @brief нахождение уникальных элементов в массиве
 * @param arr массив
 * @param size размер массива
*/
void findUniqueElements(const int* arr, const int size);

/**
* @brief алгоритм поиска подстроки в строке
* @param s строка в котрой ищем
* @param c  строка которую ищем
* @return индекс первого вхождения в строку
*/
int find(string s, string c);

/**
 * @brief нахождение ближайшей суммы двух чисел массива к заданной
 * @param nums массив
 * @param size размер
 * @param target заданная сумма
 * @return ближайшая сумма к target (меньше чем target)
*/
int nearestSum(const int* nums, const int size, const int target);

/**
 * @brief функция меняет местами два элемента
 * @param a первый элемент
 * @param b второй элемент
*/
void swap(int* a, int* b);

/**
 * @brief  разделение массива на две части относительно опорного элемента (для сортировки по возрастанию)
 * @param arr массив
 * @param low индекс начала текущего подмассива
 * @param high индекс конца текущего подмассива
 * @return  индекс, указывающий на местоположение опорного элемента
*/
int partitionIncrease(int* arr, int low, int high);

/** 
* @brief функция сортировки массива по возрастанию
* @param arr сортируемый массив
* @param low начальный элемент массива
* @param high конечный элемент массива
*/
void quickSortIncrease(int* arr, int low, int high);

/**
 * @brief  разделение массива на две части относительно опорного элемента (для сортировки по убыванию)
 * @param arr массив
 * @param low индекс начала текущего подмассива
 * @param high индекс конца текущего подмассива
 * @return  индекс, указывающий на местоположение опорного элемента
*/
int partitionDecrease(int* arr, int low, int high);

/**
* @brief функция сортировки массива по убыванию 
* @param arr сортируемый массив
* @param low начальный элемент массива
* @param high конечный элемент массива
*/
void quickSortDecrease(int* arr, int low, int high);

/**
 * @brief разбиение массива на две части и объединение сортировкой
 * @param arr массив
 * @param start начальный элемент массива
 * @param mid средний элемент массива
 * @param end конечный элемент массива
*/
void merge(int* arr, int start, int mid, int end);

/**
* @brief сортировка массива слиянием
* @param arr сортируемый массив
* @param start начальный элемент массива
* @param end конечный элемент массива
*/
void mergeSort(int* arr, int start, int end);

// сортировка массива с возведением в квадрат (на вход дан отсортированный по возрастанию массив 
// с положительными так и отрицательными числами)
void sortSquare(int* arr, const int size);

/**
 * @brief функция для поиска уникальных элементов в массиве
 * @param arr массив
 * @param size размер массива
 * @param returnCount количество найденных уникальных элементов
 * @return массив уникальных чисел
*/
int* findUnique(const int* arr, const int size, int* returnCount);

/** 
* @brief функиця для сортировки массива таким образом, чтобы сначала шли уникальные оценки в порядке убывания, 
а затем - дубликаты в том же порядке, в котором они встречаются в исходном массиве.
* @param grades массив оценок
* @param size размер массива
* @return отсортированный массив
*/
int* sortGrades(int* grades, const int size);

/** 
* @brief алгоритм поиска наибольшей непрерывной подпоследовательности с наибольшей суммой
* @param arr  массив чисел
* @param size  размер массива
* @return наибольшая сумма
*/
int maxSubArraySum(const int* arr, const int size);

/**
 * @brief функия для сложения строк как "чисел"
 * @param str1 первая строка
 * @param str2 вторая строка
 * @return сумма строк
*/
char* addStrings(const char* str1, const char* str2);

/**
 * @brief нахождение n-го числа Фибоначчи 
 * @param num номер искомого числа
 * @return число в строке
*/
char* charFib(const long long int num);

/**
 * @brief добавление чисел Фибоначчи от 0 до num в файл
 * @param num номер до которого будем добавлять
 * @param file файл куда добавляем
*/
void fibonacciToFile(const long long int num, FILE* file);

/**
 * @brief функция для добавления числа Фибоначчи в файл
 * @param str число Фибоначчи
 * @param file файл
*/
void addFibonacciToFile(const char* str, FILE* file);

/**
* @brief массив чисел, в котором могут содержаться как положительные, так и отрицательные числа.
Ваша задача - отсортировать этот массив таким образом, чтобы положительные числа были отсортированы по убыванию,
а отрицательные - по возрастанию.
* @param arr массив чисел
* @param size размер массива
*/
void sortt(int* arr, const int size);

/** 
* @brief  сравнивание строк
* @param a первая стррка 
* @param b вторая строка
* @return 
*/
bool comp(string a, string b);

/**
 * @brief Есть список слов. Ваша задача - создать функцию, которая будет сортировать список слов по их длине,
 но если слова имеют одинаковую длину, то их нужно отсортировать в обратном лексикографическом порядке.
 * @param word массив строк
*/
void sortW(vector <string>& word);

/**
 * @brief У вас есть массив строк, представляющих собой даты в формате "ГГГГ-ММ-ДД". 
 Ваша задача - отсортировать этот массив строк по датам, но при этом игнорировать год и 
 сортировать только по месяцам и дням.
 * @param word строка  
*/
void sortD(vector <string>& word);

/** 
* @brief  У вас есть список чисел, и вам нужно создать программу, которая найдет все уникальные пары чисел, 
сумма которых равна заданной цели.
* @param arr массив
* @param size размер массива
* @param target цель
*/
void findPairs(const int* arr, const int size, const int target);

/**
 * @brief функция для удаления элементов в строке
 * @param str строка в которой удаляем элементы
 * @param el удаляемый элемент
*/
void deleteElement(string& str, const char el);

/**
 * @brief удаление из строки всех символов отличных букв
 * @param str строка в которой удаляем
*/
void deleteNonLetters(string& str);

/**
 * @brief преобразование строки в нижний регистр
 * @param str строка для преобразования
*/
void myTolowerStr(string& str);

/** 
* @brief  На вход приходит две строки, надо  определить, является ли вторая строка анаграммой первой. 
(Анаграммы - это слова или фразы, образованные путем перестановки букв другого слова или фразы.) 
Таким образом, программа должна проверить, содержат ли обе строки одинаковые буквы в одинаковом количестве, 
игнорируя пробелы и регистр символов.
* @param str1 первая строка
* @param str2  вторая строка
* @return 
*/
bool isAnagramm(const string& str1, const string& str2);

/** 
* @brief На вход приходит строка содержащая произвольный текст. Напишите программу, 
которая будет подсчитывать количество вхождений каждого слова в этой строке, игнорируя 
регистр символов и знаки препинания.
* @param str строка в которой подситываем слова
*/
void countWordinStr(const string& str);