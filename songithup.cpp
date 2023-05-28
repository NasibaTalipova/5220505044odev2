using System;

class Node
{
    public int Data;
    public Node Next;

    public Node(int data)
    {
        Data = data;
        Next = null;
    }
}

class QueueLinkedList
{
    private Node front;
    private Node rear;

    public QueueLinkedList()
    {
        front = null;
        rear = null;
    }

    public void Enqueue(int data)
    {
        Node newNode = new Node(data);

        if (rear == null)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear.Next = newNode;
            rear = newNode;
        }

        Console.WriteLine("Eleman kuyruða eklendi: " + data);
    }

    public void Dequeue()
    {
        if (front == null)
        {
            Console.WriteLine("Kuyruk boþ!");
            return;
        }

        int data = front.Data;
        front = front.Next;

        if (front == null)
            rear = null;

        Console.WriteLine("Çýkarýlan eleman: " + data);
    }

    public void DisplayQueue()
    {
        if (front == null)
        {
            Console.WriteLine("Kuyruk boþ!");
            return;
        }

        Console.WriteLine("Kuyruk elemanlarý:");
        Node current = front;
        while (current != null)
        {
            Console.WriteLine(current.Data);
            current = current.Next;
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        QueueLinkedList queue = new QueueLinkedList();
        int choice;

        do
        {
            Console.WriteLine("********** Kuyruk Ýþlemleri **********");
            Console.WriteLine("1. Ekleme");
            Console.WriteLine("2. Silme");
            Console.WriteLine("3. Kuyruðu Görüntüle");
            Console.WriteLine("4. Çýkýþ");
            Console.WriteLine("**************************************");
            Console.Write("Seçiminizi yapýn: ");
            choice = Convert.ToInt32(Console.ReadLine());

            switch (choice)
            {
                case 1:
                    Console.Write("Eklemek istediðiniz elemaný girin: ");
                    int data = Convert.ToInt32(Console.ReadLine());
                    queue.Enqueue(data);
                    break;
                case 2:
                    queue.Dequeue();
                    break;
                case 3:
                    queue.DisplayQueue();
                    break;
                case 4:
                    Console.WriteLine("Programdan çýkýlýyor...");
                    break;
                default:
                    Console.WriteLine("Geçersiz seçenek! Tekrar deneyin.");
                    break;
            }

            Console.WriteLine();
        } while (choice != 4);
    }
}
