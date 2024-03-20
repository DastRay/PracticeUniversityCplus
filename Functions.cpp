#include "Functions.h"

int gcd(unsigned int a, unsigned int b)
{
   if (a % b == 0)
   {
      return b;
   }

   if (b % a == 0)
   {
      return a;
   }

   if (a > b)
   {
      return gcd(a % b, b);
   }

   return gcd(a, b % a);
}

bool isPrime(long long int num)
{
   if (num <= 1)
   {
      return false;
   }

   else if (num <= 3)
   {
      return true;
   }

   else if (num % 2 == 0 || num % 3 == 0)
   {
      return false;
   }

   long long int sqr = (long long int)sqrt(num);

   for (long long int i = 5; i <= sqr; i += 6)
   {
      if (num % i == 0 || num % (i + 2) == 0)
      {
         return false;
      }
   }

   return true;
}

void fillArr(int* nums, const int size)
{
   cout << "Введите элементы массива: ";
   for (int i = 0; i < size; i++)
   {
      cin >> nums[i];
   }
}

void printArr(const int* nums, const int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << nums[i] << " ";
   }

   cout << "\n";
}

int binarySearch(const int* nums, const int size, const int target)
{
   int left = 0;
   int right = size - 1;

   while (left <= right)
   {
      int mid = left + (right - left) / 2;

      if (nums[mid] == target)
      {
         return mid;
      }
      else if (nums[mid] < target)
      {
         left = mid + 1;
      }
      else
      {
         right = mid - 1;
      }
   }

   return -1;
}

int findSingleElement(const int* nums, const int size)
{
   int result = 0;

   for (int i = 0; i < size; i++) 
   {
      result ^= nums[i];
   }

   return result;
}

void bubbleSort(int* arr, const int size)
{
   for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }
}

void findUniqueElements_notOn(int* nums, const int size)
{
   bubbleSort(nums, size);
   cout << "Уникальные элементы: ";
   bool isUnique = true;
   for (int i = 0; i < size; i++)
   {
      if (i == 0 || nums[i] != nums[i - 1])
      {
         isUnique = true;

         for (int j = i + 1; j < size; j++)
         {
            if (nums[i] == nums[j])
            {
               isUnique = false;
               break;
            }
         }
         if (isUnique)
         {
            cout << nums[i] << " ";
         }
      }
   }
   cout << "\n";
}

void findUniqueElements(const int* arr, const int size)
{
   int Xor = 0;

   for (int i = 0; i < size; i++) 
   {
      Xor ^= arr[i];
   }

   int rightmostSetBit = Xor & ~(Xor - 1);

   int x = 0;
   int y = 0;
   for (int i = 0; i < size; i++) 
   {
      if (arr[i] & rightmostSetBit) 
      {
         x ^= arr[i];
      }
      else 
      {
         y ^= arr[i];
      }
   }

   cout << "Уникальные элементы: " << x << " " << y << endl;
}

int find(string s, string c)
{
   bool flag = false;
   for (int i = 0; i < size(s); i++)
   {
      if (s[i] == c[0])
      {
         for (int j = 0; j < size(c); j++)
         {
            if (s[i + j] == c[j])
            {
               flag = true;
            }
            else
            {
               flag = false;
               break;
            }
         }

         if (flag == true)
         {
            return i;
         }
      }
   }

   return -1;
}

int nearestSum(const int* nums, const int size, const int target)
{
   int sum = -1;

   for (int i = 0; i < size; i++)
   {
      for (int j = i + 1; j < size; j++)
      {
         int temp = nums[i] + nums[j];
         if (temp < target && sum < temp)
         {
            sum = temp;
         }
      }
   }

   return sum;
}

void swap(int* a, int* b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

int partitionIncrease(int* arr, int low, int high)
{
   int pivot = arr[high];
   int i = low - 1;

   for (int j = low; j <= high - 1; j++)
   {
      if (arr[j] < pivot)
      {
         i++;
         swap(&arr[i], &arr[j]);
      }
   }
   swap(&arr[i + 1], &arr[high]);

   return (i + 1);
}

void quickSortIncrease(int* arr, int low, int high)
{
   if (low < high)
   {
      int pi = partitionIncrease(arr, low, high);

      quickSortIncrease(arr, low, pi - 1);
      quickSortIncrease(arr, pi + 1, high);
   }
}

int partitionDecrease(int* arr, int low, int high)
{
   int pivot = arr[high];
   int i = low - 1;

   for (int j = low; j <= high - 1; j++)
   {
      if (arr[j] >= pivot)
      {
         i++;
         swap(&arr[i], &arr[j]);
      }
   }
   swap(&arr[i + 1], &arr[high]);

   return (i + 1);
}

void quickSortDecrease(int* arr, int low, int high)
{
   if (low < high)
   {
      int pi = partitionDecrease(arr, low, high);

      quickSortDecrease(arr, low, pi - 1);
      quickSortDecrease(arr, pi + 1, high);
   }
}

void merge(int* arr, int start, int mid, int end)
{
   int i, j, k;
   int size1 = mid - start + 1;
   int size2 = end - mid;

   int* L = new int[size1];
   int* R = new int[size2];

   for (i = 0; i < size1; i++)
   {
      L[i] = arr[start + i];
   }
   for (j = 0; j < size2; j++)
   {
      R[j] = arr[mid + 1 + j];
   }

   i = 0;
   j = 0;
   k = start;

   while (i < size1 && j < size2)
   {
      if (L[i] <= R[j]) 
      {
         arr[k] = L[i];
         i++;
      }
      else 
      {
         arr[k] = R[j];
         j++;
      }

      k++;
   }

   while (i < size1)
   {
      arr[k] = L[i];
      i++;
      k++;
   }

   while (j < size2)
   {
      arr[k] = R[j];
      j++;
      k++;
   }

   delete[] L;
   delete[] R;
}

void mergeSort(int* arr, int start, int end)
{
   if (start < end)
   {
      int mid = (start + end) / 2;
      mergeSort(arr, start, mid);
      mergeSort(arr, mid + 1, end);

      merge(arr, start, mid, end);
   }
}

void sortSquare(int* arr, const int size)
{
   int index = -1;
   for (int i = 0; i < size; i++)
   {
      if (arr[i] < 0)
      {
         index = i;
      }

      arr[i] *= arr[i];
   }

   cout << "index: " << index << endl;

   if (index >= 0)
   {
      merge(arr, 0, index, size - 1);
   }
}

int* findUnique(const int* arr, const int size, int* returnCount) 
{
   const int n = 300;
   int* uniqueCount = new int[n];

   for (int i = 0; i < n; i++)
   {
      uniqueCount[i] = 0;
   }

   for (int i = 0; i < size; i++)
   {
      uniqueCount[arr[i]]++;
   }

   *returnCount = 0;
   for (int i = 0; i < n; i++)
   {
      if (uniqueCount[i] == 1)
      {
         (*returnCount)++;
      }
   }

   int* uniqueArr = new int[*returnCount];

   int index = *returnCount - 1;
   int count = 0;
   for (int i = 0; i < n; i++) 
   {
      if (uniqueCount[i] == 1)
      {
         uniqueArr[index--] = i;
      }
   }

   delete[] uniqueCount;

   return uniqueArr;
}


int* sortGrades(int* grades, const int size)
{
   quickSortDecrease(grades, 0, size - 1);

   int uniqueCount = 0;
   int* uniqueGrades = findUnique(grades, size, &uniqueCount);

   int index = 0;
   int* result = new int[size];

   for (int i = 0; i < uniqueCount; i++)
   {
      result[index++] = uniqueGrades[i];
   }

   for (int i = 0; i < size; i++)
   {
      bool flag = true;
      for (int j = 0; j < uniqueCount; j++)
      {
         if (grades[i] == uniqueGrades[j])
         {
            flag = false;
         }
      }

      if (flag == true)
      {
         result[index++] = grades[i];
      }
   }

   return result;
}

int maxSubArraySum(const int* arr, const int size) 
{
   int maxSum = arr[0];
   int currentSum = arr[0];

   for (int i = 1; i < size; i++) 
   {
      currentSum = (currentSum + arr[i] > arr[i]) ? currentSum + arr[i] : arr[i];
      maxSum = (currentSum > maxSum) ? currentSum : maxSum;
   }

   return maxSum;
}

char* addStrings(const char* num1, const char* num2) 
{
   const unsigned long long int len1 = strlen(num1);
   const unsigned long long int len2 = strlen(num2);
   const unsigned long long int maxlen = len1 > len2 ? len1 : len2;

   char* result = new char[maxlen + 1];
   if (result == NULL) 
   {
      fprintf(stderr, "Ошибка выделения памяти\n");
      exit(EXIT_FAILURE);
   }

   result[maxlen] = '\0';

   unsigned long long int carry = 0;
   for (unsigned long long int i = 0; i < maxlen; i++)
   {
      unsigned int digit1 = (i < len1) ? num1[len1 - 1 - i] - '0' : 0;
      unsigned int digit2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;

      unsigned int sum = digit1 + digit2 + carry;
      result[maxlen - 1 - i] = (sum % 10) + '0';
      carry = sum / 10;
   }

   if (carry > 0) 
   {
      char* temp = new char[maxlen + 2];
      if (temp == NULL)
      {
         fprintf(stderr, "Ошибка выделения памяти\n");
         exit(EXIT_FAILURE);
      }

      temp[0] = '1';
      strcpy_s(temp + 1, maxlen + 1, result);

      delete[] result;

      result = temp;
   }

   return result;
}

char* charFib(const long long int num)
{
   if (num <= 0)
   {
      char* fib = new char[2];
      fib[0] = '0';
      fib[1] = '\0';

      return fib;
   }
   else if (num == 1)
   {
      char* fib = new char[2];
      fib[0] = '1';
      fib[1] = '\0';

      return fib;
   }

   char** fib = new char*[num + 1];
   fib[0] = new char[2];
   fib[1] = new char[2];
   strcpy_s(fib[0], 2 * sizeof(char), "0");
   strcpy_s(fib[1], 2 * sizeof(char), "1");

   for (long long int i = 2; i <= num; i++)
   {
      fib[i] = addStrings(fib[i - 1], fib[i - 2]);
      //cout << "fib[" << i << "] = " << fib[i] << endl;
   }

   const unsigned long long int lenRes = strlen(fib[num]);
   char* result = new char[lenRes + 1];
   strcpy_s(result, (lenRes + 1) * sizeof(char), fib[num]);

   for (int i = 0; i <= num; i++) 
   {
      delete[] fib[i];
   }
   delete[] fib;

   return result;
}

void fibonacciToFile(const long long int num, FILE* file)
{
   if (num <= 0)
   {
      addFibonacciToFile("0", file);
   }
   else if (num == 1)
   {
      addFibonacciToFile("1", file);
   }
   else
   {
      char** fib = new char* [num + 1];
      fib[0] = new char[2];
      fib[1] = new char[2];
      strcpy_s(fib[0], 2 * sizeof(char), "0");
      strcpy_s(fib[1], 2 * sizeof(char), "1");
      addFibonacciToFile(fib[0], file);
      addFibonacciToFile(fib[1], file);

      for (long long int i = 2; i <= num; i++)
      {
         fib[i] = addStrings(fib[i - 1], fib[i - 2]);
         addFibonacciToFile(fib[i], file);
      }

      for (int i = 0; i <= num; i++)
      {
         delete[] fib[i];
      }
      delete[] fib;
   }
}

void addFibonacciToFile(const char* str, FILE* file)
{
   fprintf(file, "%s", str);
   fprintf(file, "%c", '\n');
}

void sortt(int* arr, const int size) {
   bubbleSort(arr, size);

   int lenOtric = 0;
   while (lenOtric < size && arr[lenOtric] < 0) {
      lenOtric++;
   }

   int* otric = new int[lenOtric];
   int* pol = new int[size - lenOtric];

   int i = 0;
   int j = 0;
   while (i < lenOtric) {
      otric[i] = arr[i];
      i++;
   }

   i = lenOtric;
   j = size - lenOtric - 1;
   while (i < size) {
      pol[j] = arr[i];
      i++;
      j--;
   }

   int k;
   int n = 0;
   for (k = 0; k < lenOtric; k++) {
      arr[k] = otric[n++];
   }

   n = 0;
   for (; k < size; k++) {
      arr[k] = pol[n++];
   }

   delete[] otric;
   delete[] pol;
}

bool comp(string a, string b)
{
   if (a.length() == b.length())
   {
      return a > b;
   }

   return a.length() < a.length();
}

void sortW(vector <string>& word)
{
   sort(word.begin(), word.end(), comp);
}

void sortD(vector <string>& word)
{
   sort(word.begin() + 4, word.end());
}

void findPairs(const int* arr, const int size, const int target) 
{
   vector <int> res;

   cout << "Уникальные пары суммы: " << target << endl;

   int found = 0;

   for (int i = 0; i < size - 1; i++) 
   {
      for (int j = i + 1; j < size; j++) 
      {
         if (arr[i] + arr[j] == target) 
         {
            found++;
            res.push_back(arr[i]);
            res.push_back(arr[j]);
         }
      }
   }

   if (found == 0) 
   {
      cout << "Уникальные пары суммы " << target << "не найдены" << endl;
   }

   else
   {
      cout << "Уникальные пары: ";
      for (int i = 0; i < found; i += 2)
      {
         cout << "(" << res[i] << "," << res[i + 1] << ") ";
      }
   }
}

void deleteElement(string& str, const char el)
{
   str.erase(remove(str.begin(), str.end(), el), str.end());
}

void deleteNonLetters(string& str)
{
   str.erase(remove_if(str.begin(), str.end(), [](unsigned char c) { return !isalpha(c); }), str.end());
}

void myTolowerStr(string& str)
{
   transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
}

bool isAnagramm(const string& str1, const string& str2)
{
   string copyStr1 = str1;
   string copyStr2 = str2;

   deleteNonLetters(copyStr1);
   deleteNonLetters(copyStr2);

   myTolowerStr(copyStr1);
   myTolowerStr(copyStr2);

   if (copyStr1.length() != copyStr2.length())
   {
      return false;
   }

   unordered_map <char, int> count;

   for (const char c : copyStr1)
   {
      count[c]++;
   }

   for (const char c : copyStr2)
   {
      if (count.find(c) == count.end() || count[c] == 0)
      {
         return false;
      }

      count[c]--;
   }

   return true;
}

void countWordinStr(const string& str)
{
   string copyStr = str;
   unordered_map <string, int> wordCount;
   string word;

   myTolowerStr(copyStr);

   for (const char c : copyStr)
   {
      if (isalpha(c))
      {
         word += c;
      }

      else if (!word.empty())
      {
         wordCount[word]++;
         word.clear();
      }
   }

   if (!word.empty())
   {
      wordCount[word]++;
   }

   cout << "Количество вхождений каждого слова:" << endl;

   for (const auto& w : wordCount)
   {
      cout << w.first << ": " << w.second << endl;
   }
}