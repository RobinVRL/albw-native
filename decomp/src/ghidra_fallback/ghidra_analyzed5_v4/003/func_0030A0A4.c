#include "ghidra_types.h"

extern int func_0011E898(int param_1,char *param_2);
extern int func_0011EAA4(int param_1,int param_2);
extern int func_001E1064(int param_1,undefined4 param_2,uint param_3);
extern int func_00494104(int param_1,int param_2,undefined4 param_3);
extern int func_0058FB38(int param_1,undefined4 *param_2,int *param_3,uint param_4);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_0030a1a4;
extern int *DAT_0030a1b0;
extern char s__s_msbf_0030a1a8[];
extern char s_cf_0030a1a8[];

// USA 0030A0A4 <- EU 0030A080 (Ghidra, non-matching)
// GLOBAL DAT_0030a1a4 int *
// GLOBAL DAT_0030a1b0 int *
// GLOBAL s_cf_0030a1a8 string

void func_0030A0A4(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  #define local_20 (*(int * *)(albw_frame + 0x50))
  #define local_1c (*(char *)(albw_frame + 0x54))
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0xec) = 0;
  piVar1 = DAT_0030a1a4;
  *(undefined2 *)(param_1 + 0xee) = 0;
  local_20 = (int *)0x0;
  local_1c = '\x02';
  func_0058FB38(*piVar1,&local_20,param_2,param_4);
  piVar2 = local_20;
  (**(code **)(*local_20 + 8))(local_20);
  func_00689794(auStack_70,s__s_msbf_0030a1a8,piVar2[1],param_4);
  iVar3 = func_001E1064(*DAT_0030a1b0,auStack_70,(int)local_1c);
  iVar3 = *(int *)(iVar3 + 0x14);
  *(int *)(param_1 + 0xe8) = iVar3;
  iVar3 = func_00494104(param_1,iVar3,*(undefined4 *)(*(int *)(*piVar1 + 100) + 0x10));
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0xd9) = 1;
  }
  *(undefined1 *)(param_1 + 0x138) = 0xff;
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  if ((*(int *)(param_1 + 0xe8) != 0) && ((**(code **)(*param_2 + 8))(param_2), param_2[1] != 0)) {
    (**(code **)(*param_2 + 8))(param_2);
    uVar4 = func_0011E898(*(int *)(param_1 + 4),(char *)param_2[1]);
    *(short *)(param_1 + 0xec) = (short)uVar4;
    *(short *)(param_1 + 0xee) = (short)uVar4;
    if ((uVar4 & 0xffff) < *(uint *)(param_1 + 8)) {
      iVar3 = func_0011EAA4(*(int *)(param_1 + 4),uVar4 & 0xffff);
    }
    else {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0xf0) = iVar3;
  }
  *(undefined1 *)(param_1 + 0xdd) = 0;
  return;
}

