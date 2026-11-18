#include "ghidra_types.h"

extern int func_002D1724(int param_1);
extern int func_002D2A74(int *param_1,uint param_2);
extern float DAT_00341cfc;
extern int DAT_00341d00;

// USA 00341C30 <- EU 00341C0C (Ghidra, non-matching)
// GLOBAL DAT_00341cfc float
// GLOBAL DAT_00341d00 int

undefined4 func_00341C30(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  
  sVar2 = *(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42);
  if (sVar2 != 0xab && sVar2 != 0xac) {
    fVar4 = **(float **)(param_1 + 0x60);
    if (fVar4 != DAT_00341cfc) {
      if (sVar2 == 0x61 || sVar2 == 0x62) goto LAB_00341c88;
      if (fVar4 <= DAT_00341cfc) {
        fVar4 = -fVar4;
      }
      piVar3 = *(int **)(param_1 + 0x28);
      cVar1 = (char)piVar3[9];
      if ((int)ALBW_AS_U32(fVar4) < DAT_00341d00) {
        if (cVar1 == '\0' || cVar1 == '\x02') {
          if (*(int *)(param_1 + 0x1e4) < 4) goto LAB_00341cec;
          func_002D2A74(piVar3,1);
        }
      }
      else if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
        if (*(int *)(param_1 + 0x1e4) < 4) goto LAB_00341cec;
        func_002D2A74(piVar3,0);
        func_002D1724(*(int *)(param_1 + 0x28));
      }
      *(undefined4 *)(param_1 + 0x1e4) = 0;
    }
LAB_00341cec:
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
    return 0;
  }
LAB_00341c88:
  return func_002D2A74(*(int **)(param_1 + 0x28),0);
}

