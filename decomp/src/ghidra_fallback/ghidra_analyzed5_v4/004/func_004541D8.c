#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern float DAT_0045423c;
extern undefined4 DAT_00454240;
extern int DAT_00454244;

// USA 004541D8 <- EU 004541B0 (Ghidra, non-matching)
// GLOBAL DAT_0045423c float
// GLOBAL DAT_00454240 undefined4
// GLOBAL DAT_00454244 int

void func_004541D8(int param_1)

{
  char cVar1;
  float fparam_0;
  int iVar2;
  bool bVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  cVar1 = *(char *)(param_1 + 0xd);
  bVar3 = cVar1 == '\x03';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (bVar3 && cVar1 == '\x03') {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xb2) = 3;
    fparam_0 = DAT_0045423c;
    *(undefined2 *)(param_1 + 0xb0) = 0;
    func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
    func_0012C718(param_1);
    iVar2 = *(int *)(param_1 + 0x9c);
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar3 && cVar1 == '\x03') {
      func_0012C718(iVar2);
    }
    local_c = DAT_00454240;
    local_10 = DAT_00454244;
    func_00533078(param_1,&local_10,0);
  }
  return;
}

