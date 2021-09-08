// sin capacity
// void push(int data) {
//   if(arr == nullptr)
//     arr = new int[1];
//   else resize(arr, size + 1); // O(n)

//   array[size++] = data;
// }

// para no tener que redimensionar cada que llegue a su límite
// Stack:
// push: O(n)
// push: O(1) | O(n) * resize
// push: O(1) 


// sin capacity
void push(int data) {
  if(arr == nullptr)
    arr = new int[capacity];
  else if(size == capacity)
     resize(arr, capacity * 2); // O(n)

  array[size++] = data;
}

void pop() {
  if(arr = nullptr || size == 0)
    throw "Stack is empty";
  size--;

}


// Queue:
// enqueue: O(1) | O(n) * resize
// dequeue:: O(n) 

// enqueue: O(1) | O(n) * resize
// dequeue:: O(1) 


Queue(int _cap) {
  capacity = _cap;
  arr = new int[capacity];
  front;
  rear;
}

// incrementa y luego se asigna la data
void enqueue(int data) {
  if(is_full() resize());
  rear = next(rear);
  arr[rear] = data;
}

void dequeue() {
  if(is_empty()) throw("Queue is empty");
    front = next(front);
}// sin capacity
// void push(int data) {
//   if(arr == nullptr)
//     arr = new int[1];
//   else resize(arr, size + 1); // O(n)

//   array[size++] = data;
// }

// para no tener que redimensionar cada que llegue a su límite
// Stack:
// push: O(n)
// push: O(1) | O(n) * resize
// push: O(1) 


// sin capacity
void push(int data) {
  if(arr == nullptr)
    arr = new int[capacity];
  else if(size == capacity)
     resize(arr, capacity * 2); // O(n)

  array[size++] = data;
}

void pop() {
  if(arr = nullptr || size == 0)
    throw "Stack is empty";
  size--;

}


// Queue:
// enqueue: O(1) | O(n) * resize
// dequeue:: O(n) 

// enqueue: O(1) | O(n) * resize
// dequeue:: O(1) 


Queue(int _cap) {
  capacity = _cap;
  arr = new int[capacity];
  front;
  rear;
}

// incrementa y luego se asigna la data
void enqueue(int data) {
  if(is_full() resize());
  rear = next(rear);
  arr[rear] = data;
}

void dequeue() {
  if(is_empty()) throw("Queue is empty");
    front = next(front);
}

int size() {
}

// rear
bool is_full() {
  // return abs(rear - front) == 1 || abs(real - front) == capacity - 1;
  return next(rear) == front;
}

bool is_empty() {
  // TODO
}

int next(int rear) {
  // return (index == capacity - 1) ? 0 : index + 1;
  return (index + 1) % capacity;
}

int size() {
}

// rear
bool is_full() {
  // return abs(rear - front) == 1 || abs(real - front) == capacity - 1;
  return next(rear) == front;
}

bool is_empty() {
  // TODO
}

int next(int rear) {
  // return (index == capacity - 1) ? 0 : index + 1;
  return (index + 1) % capacity;
}