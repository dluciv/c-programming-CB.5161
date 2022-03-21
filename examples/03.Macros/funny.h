#define QUO(x) #x
#define QUOS(x) QUO(x)
#define RTWARNING(message) puts(message " at " __FILE__ ":" QUOS(__LINE__))
