#include "ghidra_types.h"

extern int func_003AE7F4(int *param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int *DAT_004ef79c;
extern int *DAT_004ef7a0;
extern undefined4 DAT_004ef7a4;
extern undefined4 DAT_004ef7a8;
extern undefined4 DAT_004ef7ac;
extern int *DAT_004ef7b0;
extern char s_Archive__s_szs_004ef7b4[];
extern char s_cf_004ef7b4[];

// USA 004EF64C <- EU 004EF624 (Ghidra, non-matching)
// GLOBAL DAT_004ef79c int *
// GLOBAL DAT_004ef7a0 int *
// GLOBAL DAT_004ef7a4 undefined4
// GLOBAL DAT_004ef7a8 undefined4
// GLOBAL DAT_004ef7ac undefined4
// GLOBAL DAT_004ef7b0 int *
// GLOBAL s_cf_004ef7b4 string

undefined4 func_004EF64C(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(uint *)(albw_frame + 0x8))
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(uint *)(albw_frame + 0x14))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(uint *)(albw_frame + 0x1c))
  #define local_30 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(uint *)(albw_frame + 0x24))
  #define uStack_28 (*(uint *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined1 *)(albw_frame + 0x34))
  #define local_1b (*(undefined1 *)(albw_frame + 0x35))
  #define local_1a (*(undefined1 *)(albw_frame + 0x36))
  #define local_19 (*(undefined1 *)(albw_frame + 0x37))
  #define local_18 (*(undefined1 *)(albw_frame + 0x38))
  #define local_14 (*(uint *)(albw_frame + 0x3c))
  if (2 < *(uint *)(param_1 + 0x80)) {
    piVar3 = *(int **)(*DAT_004ef79c + 0x1128);
    if ((char)piVar3[0x43] == '\0') {
      local_48 = 0;
      if (*(int *)(param_1 + 0xd4) != 0) {
        if ((*(char *)(param_1 + 0xd8) == *param_2) &&
           (bVar5 = *(int *)(param_1 + 0xdc) == *(int *)(param_2 + 4), local_48 = (uint)bVar5, bVar5
           )) {
          return 1;
        }
        *(uint *)(param_1 + 0xd4) = local_48;
      }
      uVar2 = *(undefined4 *)(param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0xdc) = uVar2;
      *(undefined4 *)(param_1 + 0xe0) = uVar4;
      local_50 = DAT_004ef7a4;
      local_4c = DAT_004ef7a8;
      uStack_40 = 0x20;
      uStack_24 = DAT_004ef7a4;
      uStack_20 = DAT_004ef7ac;
      uVar2 = 4;
      local_1c = 7;
      local_1b = 4;
      local_1a = (undefined1)local_48;
      local_44 = local_48;
      local_3c = local_48;
      local_38 = local_48;
      local_34 = local_48;
      local_30 = local_48;
      local_2c = local_48;
      uStack_28 = local_48;
      local_19 = local_1a;
      local_18 = local_1a;
      local_14 = local_48;
      iVar1 = func_00582260(*DAT_004ef7b0,(int)*param_2,*(uint *)(param_2 + 4));
      (**(code **)(*(int *)(iVar1 + 4) + 8))(iVar1 + 4);
      func_004994B0(param_1 + 0xe4,s_Archive__s_szs_004ef7b4,*(uint *)(iVar1 + 8),uVar2);
      local_14 = param_1 + 0x1f0;
      local_4c = *(undefined4 *)(param_1 + 0xe8);
      func_003AE7F4(piVar3,(int)&local_50);
      return 1;
    }
    if ((*(char *)(param_1 + 0xd8) != *param_2) ||
       (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 4))) {
      *(undefined1 *)(*DAT_004ef7a0 + 0x1ff0) = 1;
    }
  }
  return 0;
}

