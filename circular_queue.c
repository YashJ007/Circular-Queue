// Yash Jaybhaye - SYITA146
//Circular Queue

int deQueue() {
int element; if (isEmpty()) {
printf("\n Queue is empty !! \n");
        return (-1);
    }
else
    {
        element = items[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
}
else
        {
            front = (front + 1) % SIZE;
}
printf("\n Deleted element -> %d \n", element); return (element);
} }
void display() {
int i;
if (isEmpty())
        printf(" \n Empty Queue\n");
    else
{
printf("\n Front -> %d ", front);
printf("\n Items -> ");
for (i = front; i != rear; i = (i + 1) % SIZE) {
            printf("%d ", items[i]);
        }
printf("%d ", items[i]); printf("\n Rear -> %d \n", rear);
} }
int main() {
deQueue();
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
enQueue(6);
display();
    deQueue();
    display();
    enQueue(7);
display();
enQueue(8);
return 0; }
