using System;

class Program
{
    static void Main(string[] args)
    {
        // a) Dizinin boyutunu ve elemanlar�n� kullan�c�dan isteyiniz.
        Console.Write("Dizi boyutunu giriniz: ");
        int size = Convert.ToInt32(Console.ReadLine());

        int[] arr = new int[size];
        Console.WriteLine("Dizi elemanlar�n� giriniz:");
        for (int i = 0; i < size; i++)
        {
            Console.Write("Eleman {0}: ", i + 1);
            arr[i] = Convert.ToInt32(Console.ReadLine());
        }

        // b) Dizide aranacak olan eleman� kullan�c�dan isteyiniz.
        Console.Write("Aranacak eleman� giriniz: ");
        int target = Convert.ToInt32(Console.ReadLine());

        // c) Aran�lan eleman�n dizide olup olmad���n�n kontrol�n� Linear Search kullanarak yap�n�z.
        bool found = LinearSearch(arr, target);

        if (found)
            Console.WriteLine("Aranan eleman dizide bulundu.");
        else
            Console.WriteLine("Aranan eleman dizide bulunamad�.");

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
