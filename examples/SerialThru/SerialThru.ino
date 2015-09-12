#define HOST_PORT Serial
#define NEXTION_PORT Serial1

#define BAUD 9600

void setup()
{
  HOST_PORT.begin(BAUD);
  NEXTION_PORT.begin(BAUD);
}

void loop()
{
  while(HOST_PORT.available())
    NEXTION_PORT.write(HOST_PORT.read());

  while(NEXTION_PORT.available())
    HOST_PORT.write(NEXTION_PORT.read());
}
