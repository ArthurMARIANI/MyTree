#include "sapin.h"


int count_stars(int line_length)
{
  int i;
  int line_count;

  line_count = 0;
  i = 0;
  while (i < line_length)
  {
    line_count++;
    i++;
  }
  return(line_count);
}

int     get_total_length(int size)
{
  int section;
  int line;
  int line_length;
  int i;
  int dec;
  int result;

  dec = 4;
  line = 1;
  line_length = 1;

  section = 1;
  while(section <= size)
  {
    i=0;

    while(i < section +3)
    {
      result = count_stars(line_length);
      line_length = line_length +2;
      i++;
    }

    line_length = line_length-dec;
    if(section%2 == 0)
    {
      dec = dec +2;
    }
    section++;
  }
  return(result);
}

void print_spaces(int spaces)
{
  int i;

  i = 0;
  while (i < spaces)
  {
    my_putstr(" ");
    i++;
  }
}


void print_line(int line_length)
{
  int i;

  i = 0;
  while (i < line_length)
  {
    my_putstr("*");
    i++;
  }
  my_putstr("\n");
}



void    print_sapin(int size)
{
  int section;
  int line;
  int line_length;
  int i;
  int dec;
  int spaces;

  if (size == 0)
  {
    my_putstr("\n");
  }
  else
  {
    dec = 4;
    line = 1;
    line_length = 1;

    section = 1;
    while(section <= size)
    {
      i=0;
      while(i < section +3)
      {
        spaces = (get_total_length(size)/2)-(line_length/2);
        print_spaces(spaces);
        print_line(line_length);
        line_length = line_length +2;
        i++;
      }

      line_length = line_length-dec;
      if(section%2 == 0)
      {
        dec = dec +2;
      }
      section++;
    }
    print_trunk(size);
  }
}

void  print_trunk(size)
{
  int i;
  int y;
  int spaces;

  i = 0;
  while(i < size)
  {
    y = 0;
    spaces = (get_total_length(size)/2)-(size/2);
    print_spaces(spaces);
    while(y < size)
    {
      my_putstr("|");
      y++;
    }
    my_putstr("\n");
    i++;
  }
}
