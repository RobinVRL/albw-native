#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00324964(int param_1);
extern int func_0032651C(int param_1,undefined4 param_2);
extern int func_004EAB38(int param_1,int param_2);
extern int func_00520EF0(int param_1,int *param_2);
extern int func_00588268(int param_1);
extern undefined4 DAT_003269a8;
extern int DAT_003269ac;
extern int *DAT_003269b0;
extern float DAT_003269b4;

// USA 003268D0 <- EU 003268AC (Ghidra, non-matching)
// GLOBAL DAT_003269a8 undefined4
// GLOBAL DAT_003269ac int
// GLOBAL DAT_003269b0 int *
// GLOBAL DAT_003269b4 float

void func_003268D0(int param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  local_1c = DAT_003269a8;
  local_20 = DAT_003269ac;
  iVar2 = func_00520EF0(param_1,&local_20);
  piVar1 = DAT_003269b0;
  if (iVar2 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x478) == '\x14') {
    if (*(int *)(param_1 + 0x48) == 0x3f800000) {
      func_004EAB38(*DAT_003269b0,1);
    }
    else {
      if (*(int *)(param_1 + 0x48) != 0x40000000) goto LAB_00326994;
      func_004EAB38(*DAT_003269b0,0);
    }
  }
  if ((0x14 < *(byte *)(param_1 + 0x478)) &&
     ((*(float *)(param_1 + 0x48) == DAT_003269b4 || (iVar2 = func_00588268(*piVar1), iVar2 == 0))))
  {
    func_00165E28(*(int *)(param_1 + 0x4a0),*(undefined2 *)(param_1 + 0x534));
    func_00324964(param_1);
    *(undefined1 *)(param_1 + 0x477) = 3;
    func_0032651C(param_1,4);
  }
LAB_00326994:
  *(char *)(param_1 + 0x478) = *(char *)(param_1 + 0x478) + '\x01';
  return;
}

