  #include <stdio.h>
int main() {
  int colorful_balls[15] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3};
    int colorful_count = sizeof(colorful_balls) / sizeof(colorful_balls[0]);
    printf("Количество разноцветных шариков: %d\n", colorful_count);
  return 0;
}
