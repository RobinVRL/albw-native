#include "ghidra_types.h"

extern int func_001CD204(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_00288224(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004CBB0C(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_004E74E8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_004E87D4(undefined4 *param_1,undefined2 param_2);
extern int func_004F059C(int param_1);
extern int func_0055C01C(ushort *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0014ed44;
extern int DAT_0014ed48;
extern int *DAT_0014ed4c;

// USA 0014EC00 <- EU 0014EC00 (Ghidra, non-matching)
// GLOBAL DAT_0014ed44 int *
// GLOBAL DAT_0014ed48 int
// GLOBAL DAT_0014ed4c int *

undefined4 func_0014EC00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  local_14 = param_3;
  iStack_10 = param_4;
  if (*(char *)(*DAT_0014ed44 + 0x18) == '\a' || *(char *)(*DAT_0014ed44 + 0x18) == '%') {
    iVar2 = func_00588BE4(param_1);
    uVar1 = func_004F059C(iVar2);
  }
  else {
    uVar1 = func_0055C01C((ushort *)(DAT_0014ed48 + param_4 * 0x1a));
  }
  iVar2 = (int)*(short *)(param_1 + 0x54);
  switch(uVar1) {
  case 0:
    func_004E87D4(param_2,*(short *)(param_1 + 0x54));
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    return func_001D6FD0(param_2,uVar1 - 1 & 0xff,1,DAT_0014ed4c,iVar2);
  case 7:
    return func_004E74E8(param_2,&local_14,4,-1);
  case 8:
    return func_00288224(param_2,local_14,iVar2);
  case 9:
    return func_004CBB0C(param_2,0,0,0);
  case 10:
  case 0xb:
  case 0xc:
    return func_001CD204(param_2,uVar1 - 10 & 0xff,1,iVar2);
  }
  return 0;
}

