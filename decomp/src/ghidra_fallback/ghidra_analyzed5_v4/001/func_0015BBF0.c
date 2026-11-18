#include "ghidra_types.h"

extern int func_00160430(int param_1,undefined1 param_2);
extern int func_00161178(undefined4 *param_1);
extern float func_0058A404(int param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0015bd3c;
extern int DAT_0015bd40;

// USA 0015BBF0 <- EU 0015BBF4 (Ghidra, non-matching)
// GLOBAL DAT_0015bd3c int
// GLOBAL DAT_0015bd40 int

undefined4 func_0015BBF0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  
  if (*(char *)(param_1[0x144] + 4) == '\0') {
    puVar2 = param_1 + 0x22f;
    if (*(short *)(DAT_0015bd3c + (int)param_1) < 1) {
      if (*(short *)(param_1 + 0xe) == 0) {
        func_0065836C(puVar2,0x15);
      }
      else {
        if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 0) {
          *(undefined1 *)((int)param_1 + 0xe4d) = 1;
        }
        func_0065836C(puVar2,1);
      }
      if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 0) {
        return func_00160430((int)param_1,0x16);
      }
    }
    else if (*(char *)((int)param_1 + 0xf9d) == '\x03') {
      if ((*(char *)(param_1 + 0x38b) == '\0') &&
         ((puVar1 = func_00161178(param_1), puVar1 == (undefined4 *)0x0 ||
          (fVar3 = func_0058A404((int)puVar1), (int)ALBW_AS_U32(fVar3) <= DAT_0015bd40)))) {
        func_0065836C(puVar2,0x19);
      }
      else {
        func_0065836C(puVar2,4);
      }
      if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 0) goto LAB_0015bd14;
    }
    else {
      if ((*(char *)((int)param_1 + 0xf9d) != '\x01') &&
         ((uint)param_1[0x24c] <= (uint)param_1[0x24b])) {
        func_0065836C(puVar2,0x13);
LAB_0015bd14:
        return func_00160430((int)param_1,4);
      }
      func_0065836C(puVar2,0x12);
    }
  }
  return 0;
}

