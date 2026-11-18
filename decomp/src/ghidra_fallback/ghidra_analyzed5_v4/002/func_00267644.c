#include "ghidra_types.h"

extern int func_00268E70(int param_1);
extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0058A8F0(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int DAT_0026771c;

// USA 00267644 <- EU 0026766C (Ghidra, non-matching)
// GLOBAL DAT_0026771c int

void func_00267644(int param_1)

{
  char cVar1;
  int iVar2;
  float fparam_0;
  
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  cVar1 = *(char *)(DAT_0026771c + param_1);
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    if (*(uint *)(param_1 + 0xb08) < *(uint *)(param_1 + 0xb0c)) {
      *(uint *)(param_1 + 0xb08) = *(uint *)(param_1 + 0xb08) + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xb14) = 1;
      if (cVar1 == '\0') {
        func_00268E70(param_1);
      }
      if (*(uint *)(param_1 + 0xafc) < *(uint *)(param_1 + 0xb00)) {
        *(uint *)(param_1 + 0xafc) = *(uint *)(param_1 + 0xafc) + 1;
      }
      else {
        func_0036B758(param_1 + 0x9ac);
        iVar2 = func_0036BE78(param_1 + 0x9ac);
        if (iVar2 != 0) {
          func_00660718((undefined4 *)(param_1 + 0x8c8),0);
        }
      }
    }
  }
  return;
}

