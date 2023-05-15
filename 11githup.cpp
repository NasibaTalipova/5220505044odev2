using System;

class Program
{
    static void Main(string[] args)
    {
        // a) Dizinin boyutunu ve elemanlarýný kullanýcýdan isteyiniz.
        Console.Write("Dizi boyutunu giriniz: ");
        int size = Convert.ToInt32(Console.ReadLine());

        int[] arr = new int[size];
        Console.WriteLine("Dizi elemanlarýný giriniz:");
        for (int i = 0; i < size; i++)
        {
            Console.Write("Eleman {0}: ", i + 1);
            arr[i] = Convert.ToInt32(Console.ReadLine());
        }

        // b) Dizide aranacak olan elemaný kullanýcýdan isteyiniz.
        Console.Write("Aranacak elemaný giriniz: ");
        int target = Convert.ToInt32(Console.ReadLine());

        // c) Aranýlan elemanýn dizide olup olmadýðýnýn kontrolünü Linear Search kullanarak yapýnýz.
        bool found = LinearSearch(arr, target);

        if (found)
            Console.WriteLine("Aranan eleman dizide bulundu.");
        else
            Console.WriteLine("Aranan eleman dizide bulunamadý.");

        Console.ReadLine();
    }

    static bool LinearSearch(int[] arr, int target)
    {
        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[i] == target)
                return true;
        }
        return false;
    }
}
