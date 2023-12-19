#define SET_BIT(port,bit) (port |= (1<<bit))
#define CLR_BIT(port,bit) (port &= (~(1<<bit)))
#define TOGGLE_BIT(port,bit) (port ^= (1<<bit))

#define GET_BIT(port,bit) (((port) >> (bit)) & 0x01)

