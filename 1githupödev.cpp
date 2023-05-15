using System;

class Program
{
    static void Main(string[] args)
    {
        int[] arr = { 4, 8, 3, 84, 47, 76, 9, 24, 68 };
        Array.Sort(arr); // Diziyi s�ral�yoruz, ��nk� Binary Search s�ral� bir dizi �zerinde �al���r.

        Console.Write("Aranacak eleman� giriniz: ");
        int target = Convert.ToInt32(Console.ReadLine());

        bool found = BinarySearch(arr, target);

        if (found)
            Console.WriteLine("Aranan eleman dizide bulundu.");
        else
            Console.WriteLine("Aranan eleman dizide bulunamad�.");

        Console.ReadLine();
    }

    static bool BinarySearch(int[] arr, int target)
    {
        int left = 0;
        int right = arr.Length - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target)
                return true;

            if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }
}
