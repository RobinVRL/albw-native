#include "ghidra_types.h"

extern int func_002A27C4(int param_1,int param_2);
extern int func_002A5DB4(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002a2c28;
extern int DAT_002a2c2c;
extern int DAT_002a2c30;
extern int DAT_002a2c34;
extern int DAT_002a2c38;
extern int DAT_002a2c3c;

// USA 002A2AE4 <- EU 002A2AC0 (Ghidra, non-matching)
// GLOBAL DAT_002a2c28 undefined4
// GLOBAL DAT_002a2c2c int
// GLOBAL DAT_002a2c30 int
// GLOBAL DAT_002a2c34 int
// GLOBAL DAT_002a2c38 int
// GLOBAL DAT_002a2c3c int

undefined4 func_002A2AE4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  
  uVar5 = func_0058AB74(param_1);
  if ((int)uVar5 == 5) {
    if (*(uint *)(param_1 + 0xb64) <= *(uint *)(param_1 + 0xb60)) {
      return func_00662128((undefined4 *)(param_1 + 0x9e0),1);
    }
    *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) + 1;
  }
  else {
    iVar2 = func_0058A8F0(param_1);
    uVar1 = DAT_002a2c28;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xb64) = 100;
      *(undefined4 *)(param_1 + 0xb68) = uVar1;
      *(undefined4 *)(param_1 + 0xb60) = 0;
      func_004FABDC(param_1,5,0xffffffff,0);
    }
  }
  func_002A5DB4(param_1,0);
  uVar5 = func_0058AB74(param_1);
  if ((int)uVar5 == 5) {
    return func_002A27C4(param_1,1);
  }
  fVar4 = func_0058AA40(param_1);
  if (DAT_002a2c2c < (int)ALBW_AS_U32(fVar4)) {
    func_002A27C4(param_1,1);
  }
  else {
    func_002A27C4(param_1,0);
  }
  fVar4 = func_0058AA40(param_1);
  if ((((int)ALBW_AS_U32(fVar4) < DAT_002a2c30) || (fVar4 = func_0058AA40(param_1), DAT_002a2c34 < (int)ALBW_AS_U32(fVar4)))
     && ((fVar4 = func_0058AA40(param_1), (int)ALBW_AS_U32(fVar4) < DAT_002a2c38 ||
         (fVar4 = func_0058AA40(param_1), DAT_002a2c3c < (int)ALBW_AS_U32(fVar4))))) {
    uVar3 = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x59c) | 8;
  }
  *(uint *)(param_1 + 0x59c) = uVar3;
  return 0;
}

