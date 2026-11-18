#include "ghidra_types.h"

extern int func_005427C4(int param_1,int param_2);
extern int func_0058A1F4(int param_1);
extern float DAT_002a9df4;
extern float DAT_002a9df8;
extern float DAT_002a9dfc;

// USA 002A9D70 <- EU 002A9D4C (Ghidra, non-matching)
// GLOBAL DAT_002a9df4 float
// GLOBAL DAT_002a9df8 float
// GLOBAL DAT_002a9dfc float

void func_002A9D70(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  cVar1 = *(char *)(param_2 + 0x21);
  uVar3 = func_0058A1F4(param_1);
  if (uVar3 == 0) {
    if (cVar1 == '\x02') {
      fVar4 = DAT_002a9df8;
      bVar2 = func_005427C4(param_1,0);
      if (!bVar2) {
        return;
      }
    }
    else if ((((cVar1 == '\0' || cVar1 == '\x05') || (cVar1 == '\x06' || cVar1 == '\a')) ||
             (cVar1 == '\b' || cVar1 == '\t')) ||
            ((cVar1 == '\n' || cVar1 == '\r' || (cVar1 == '\x0e' || cVar1 == '\x0f')))) {
      return;
    }
  }
  else if (cVar1 == '\b') {
    return;
  }
  return;
}

