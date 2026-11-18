#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern int DAT_001993a4;
extern undefined4 DAT_001993b0;
extern int *DAT_001993b4;
extern int DAT_001993b8;
extern char s_Action_001993a8[];

// USA 0019929C <- EU 0019929C (Ghidra, non-matching)
// GLOBAL DAT_001993a4 int
// GLOBAL DAT_001993b0 undefined4
// GLOBAL DAT_001993b4 int *
// GLOBAL DAT_001993b8 int
// GLOBAL s_Action_001993a8 string

void func_0019929C(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(undefined2 * *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c ((undefined2 *)(albw_frame + 0x14))
  #define local_2e (*(undefined2 *)(albw_frame + 0x52))
  #define local_28 ((int *)(albw_frame + 0x58))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[3] = 0xffffffff;
  local_28[2] = 0;
  local_14 = s_Action_001993a8;
  local_28[4] = DAT_001993b0;
  func_005826A4(*DAT_001993b4,local_28,local_28 + 4,
                (int *)(DAT_001993a4 + (uint)*(byte *)(param_1 + 0x78) * 0xc));
  local_74 = local_6c;
  uStack_70 = 0x20;
  local_2e = 0;
  local_78 = DAT_001993b8;
  local_6c[0] = 0;
  iVar1 = func_00583794(local_28,&local_78);
  if (0 < iVar1) {
    piVar3 = *(int **)(param_1 + 0x74);
    (**(code **)(local_78 + 8))(&local_78);
    uVar2 = 0;
    do {
      if (local_74[uVar2] == 0) {
        if ((int)uVar2 < 0x40001) goto LAB_0019936c;
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x40001);
    uVar2 = 0;
LAB_0019936c:
    (**(code **)(local_78 + 8))(&local_78);
    (**(code **)(*piVar3 + 0x60))(piVar3,local_74,0,uVar2 & 0xffff);
  }
  return;
}

