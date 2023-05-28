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

        Console.WriteLine("Eleman kuyru�a eklendi: " + data);
    }

    public void Dequeue()
    {
        if (front == null)
        {
            Console.WriteLine("Kuyruk bo�!");
            return;
        }

        int data = front.Data;
        front = front.Next;

        if (front == null)
            rear = null;

        Console.WriteLine("��kar�lan eleman: " + data);
    }

    public void DisplayQueue()
    {
        if (front == null)
        {
            Console.WriteLine("Kuyruk bo�!");
            return;
        }

        Console.WriteLine("Kuyruk elemanlar�:");
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
            Console.WriteLine("********** Kuyruk ��lemleri **********");
            Console.WriteLine("1. Ekleme");
            Console.WriteLine("2. Silme");
            Console.WriteLine("3. Kuyru�u G�r�nt�le");
            Console.WriteLine("4. ��k��");
            Console.WriteLine("**************************************");
            Console.Write("Se�iminizi yap�n: ");
            choice = Convert.ToInt32(Console.ReadLine());

            switch (choice)
            {
                case 1:
                    Console.Write("Eklemek istedi�iniz eleman� girin: ");
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
                    Console.WriteLine("Programdan ��k�l�yor...");
                    break;
                default:
                    Console.WriteLine("Ge�ersiz se�enek! Tekrar deneyin.");
                    break;
            }

            Console.WriteLine();
        } while (choice != 4);
    }
}
