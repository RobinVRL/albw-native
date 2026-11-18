#include "ghidra_types.h"

extern int func_003CD794(int *param_1);
extern int func_003DA5EC(ushort *param_1);
extern int func_003DA8D8(int param_1,int param_2);
extern int func_003DA934(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,uint param_5);
extern int func_003DADBC(int param_1);
extern int func_003DAE18(undefined4 *param_1);
extern int *DAT_005392d0;
extern undefined4 DAT_005392d4;

// USA 00539210 <- EU 005391E8 (Ghidra, non-matching)
// GLOBAL DAT_005392d0 int *
// GLOBAL DAT_005392d4 undefined4

undefined4 func_00539210(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define aiStack_40 ((int *)(albw_frame + 0x10))
  #define local_10 (*(int *)(albw_frame + 0x40))
  #define local_c (*(int *)(albw_frame + 0x44))
  (**(code **)(*param_1 + 8))(param_1);
  iVar1 = func_003DA5EC((ushort *)param_1[1]);
  if (iVar1 < 6) {
    func_003DAE18(&local_44);
    func_003DA8D8((int)&local_44,*(int *)(*DAT_005392d0 + 0x1134));
    (**(code **)(*param_1 + 8))(param_1);
    local_c = param_1[1];
    local_10 = 0;
    func_003DA934((int)&local_44,&local_10,0,(int)&local_c,1);
    func_003DADBC((int)&local_44);
    local_44 = DAT_005392d4;
    if (local_10 == 0) {
      func_003DADBC((int)&local_44);
      func_003CD794(aiStack_40);
      return 0;
    }
    func_003DADBC((int)&local_44);
    func_003CD794(aiStack_40);
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

