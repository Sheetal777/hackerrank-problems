//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int size = number_of_students;
  int sum = 0;
switch(gender){
    case 'b':
        for(int i=0;i<size;i+=2)
            sum+=marks[i];
    break;
    case 'g':
        for(int i=1;i<size;i+=2)
            sum+=marks[i];
        break;
}
return sum;
}