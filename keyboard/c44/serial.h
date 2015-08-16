#ifndef MY_SERIAL_H
#define MY_SERIAL_H

#define SERIAL_PIN_DDR DDRD
#define SERIAL_PIN_PORT PORTD
#define SERIAL_PIN_INPUT PIND
#define SERIAL_PIN_MASK _BV(PD0)
/* #define SERIAL_PIN_MASK _BV(PD2) */

#define SERIAL_SLAVE_BUFFER_LENGTH 4
#define SERIAL_MASTER_BUFFER_LENGTH 1

// Buffers for master - slave communication
extern volatile uint8_t serial_slave_buffer[SERIAL_SLAVE_BUFFER_LENGTH];
extern volatile uint8_t serial_master_buffer[SERIAL_MASTER_BUFFER_LENGTH];

void serial_master_init(void);
void serial_slave_init(void);
int serial_transaction(void);

#endif
