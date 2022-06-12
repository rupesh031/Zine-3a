int led=10;
int var=0;
int time=100;
int inc=5;

void setup()
{
  DDRB |= (1<<DDB1);
}

void loop()
{  
  PORTB |=(1<<PB1);
  delay(var);
  PORTB &=(~(1<<PB1));
  delay(time-var);
  var+=inc;
  if(var==0||var==time)
    inc=-inc;
}
