#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002C900C(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006636BC(undefined4 *param_1,int param_2);
extern int DAT_002c92c0;
extern char s_SE_SwitchCandle_BURN_002c92c4[];
extern char s_SE_SwitchCandle_OFF_002c92dc[];

// USA 002C9180 <- EU 002C915C (Ghidra, non-matching)
// GLOBAL DAT_002c92c0 int
// GLOBAL s_SE_SwitchCandle_BURN_002c92c4 string
// GLOBAL s_SE_SwitchCandle_OFF_002c92dc string

undefined4 func_002C9180(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (((short)param_1[0xe] != 0) && (bVar1 = func_00588BF0((int)param_1,1), bVar1)) {
    *(undefined1 *)((int)param_1 + 0x479) = 1;
  }
  piVar7 = param_1 + 0x103;
  if ((*(short *)((int)param_1 + 0x36) != 0) &&
     ((*(short *)((int)param_1 + 0x32) != 1 || (*(char *)((int)param_1 + 0x47a) == '\0')))) {
    bVar1 = func_00588BF0((int)param_1,0);
    iVar4 = DAT_002c92c0;
    if (bVar1) {
      iVar2 = func_006636BC(piVar7,1);
      if (iVar2 != 0) {
        local_1c = s_SE_SwitchCandle_BURN_002c92c4;
        local_20 = iVar4;
        func_00150A84(param_1,&local_20,0);
        *(undefined1 *)((int)param_1 + 0x47a) = 1;
      }
    }
    else {
      iVar2 = func_006636BC(piVar7,0);
      if (iVar2 != 0) {
        local_1c = s_SE_SwitchCandle_OFF_002c92dc;
        local_20 = iVar4;
        func_00150A84(param_1,&local_20,0);
      }
    }
  }
  piVar3 = (int *)(param_1[0x10a] + (char)param_1[0x104] * 8);
  uVar5 = *(uint *)(param_1[0x10a] + (char)param_1[0x104] * 8 + 4);
  piVar6 = (int *)(param_1[0x108] + ((int)uVar5 >> 1));
  if ((uVar5 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *piVar6);
  }
  (*(code *)*piVar3)(piVar6);
  iVar4 = *piVar7;
  *piVar7 = iVar4 + 1;
  if (param_1[0x107] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x107],1,fparam_0);
  }
  return func_002C900C((int)param_1);
}

