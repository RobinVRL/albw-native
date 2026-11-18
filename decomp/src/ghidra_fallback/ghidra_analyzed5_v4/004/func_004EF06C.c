#include "ghidra_types.h"

extern int func_001E06AC(int param_1,int param_2,undefined4 param_3);
extern int func_001E1A88(int param_1,int *param_2,int param_3);
extern int func_001E1D44(int param_1);
extern int func_003AE7C4(int param_1);
extern int func_004C5070(int param_1);
extern int func_004EE86C(char *param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00689650(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_004ef200;
extern int *DAT_004ef204;
extern int *DAT_004ef208;
extern int DAT_004ef20c;
extern undefined4 DAT_004ef210;
extern undefined4 DAT_004ef214;
extern int *DAT_004ef228;
extern undefined4 DAT_004ef22c;
extern char s_Archive__s_szs_004ef218[];
extern char s_cf_004ef218[];

// USA 004EF06C <- EU 004EF044 (Ghidra, non-matching)
// GLOBAL DAT_004ef200 int *
// GLOBAL DAT_004ef204 int *
// GLOBAL DAT_004ef208 int *
// GLOBAL DAT_004ef20c int
// GLOBAL DAT_004ef210 undefined4
// GLOBAL DAT_004ef214 undefined4
// GLOBAL DAT_004ef228 int *
// GLOBAL DAT_004ef22c undefined4
// GLOBAL s_cf_004ef218 string

undefined8 func_004EF06C(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x180];
  #define local_17c (*(int *)(albw_frame + 0x4))
  #define local_178 (*(undefined4 *)(albw_frame + 0x8))
  #define local_174 (*(undefined4 *)(albw_frame + 0xc))
  #define local_170 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_16c (*(undefined4 *)(albw_frame + 0x14))
  #define local_168 (*(undefined4 *)(albw_frame + 0x18))
  #define local_164 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_160 (*(undefined4 *)(albw_frame + 0x20))
  #define local_15c (*(undefined4 *)(albw_frame + 0x24))
  #define local_158 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_154 (*(undefined4 *)(albw_frame + 0x2c))
  #define iStack_150 (*(int *)(albw_frame + 0x30))
  #define uStack_14c (*(undefined4 *)(albw_frame + 0x34))
  #define local_148 (*(undefined1 *)(albw_frame + 0x38))
  #define local_147 (*(undefined1 *)(albw_frame + 0x39))
  #define local_146 (*(undefined1 *)(albw_frame + 0x3a))
  #define local_145 (*(undefined1 *)(albw_frame + 0x3b))
  #define local_144 (*(undefined1 *)(albw_frame + 0x3c))
  #define auStack_140 ((undefined4 *)(albw_frame + 0x40))
  iVar3 = func_004EE86C(param_2);
  piVar1 = DAT_004ef200;
  uVar5 = (uint)*(ushort *)(param_1 + 0x68);
  if (iVar3 == 1 && uVar5 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    if (*param_2 != -1) {
      uVar5 = *(uint *)(param_2 + 4);
      uVar7 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)param_2;
      *(uint *)(param_1 + 0x1c) = uVar5;
      *(undefined4 *)(param_1 + 0x20) = uVar7;
      *(undefined1 *)(param_1 + 0x48) = 0xff;
      func_00582260(*piVar1,(int)*(char *)(param_1 + 0x18),uVar5);
    }
    if (*(char *)(*(int *)(*DAT_004ef204 + 0x1128) + 0x10c) != '\0') {
      func_003AE7C4(*(int *)(*DAT_004ef204 + 0x1128));
    }
    piVar2 = DAT_004ef208;
    puVar6 = *(undefined4 **)(param_1 + 0xd4);
    if (((puVar6 == (undefined4 *)0x0) || (*(char *)(param_1 + 0xd8) != *(char *)(param_1 + 0x18)))
       || (*(int *)(param_1 + 0xdc) != *(int *)(param_1 + 0x1c))) {
      local_178 = DAT_004ef210;
      local_174 = 0;
      local_17c = DAT_004ef20c;
      local_170 = 0;
      uStack_16c = 0x20;
      puVar6 = &uStack_154;
      local_168 = 0;
      local_164 = 0;
      local_160 = 0;
      local_15c = 0;
      local_158 = 0;
      uStack_154 = 0;
      iStack_150 = DAT_004ef20c;
      uStack_14c = DAT_004ef214;
      local_148 = 7;
      local_147 = 4;
      local_146 = 0;
      local_145 = 0;
      local_144 = 0;
      iVar3 = func_00582260(*piVar1,(int)*param_2,*(uint *)(param_2 + 4));
      (**(code **)(*(int *)(iVar3 + 4) + 8))(iVar3 + 4);
      puVar6 = func_00689650(auStack_140,s_Archive__s_szs_004ef218,*(uint *)(iVar3 + 8),puVar6);
      local_178 = puVar6[1];
      puVar6 = func_001E1A88(*piVar2,&local_17c,0);
    }
    uVar7 = func_001E06AC(*piVar2,4,puVar6);
    *(undefined4 *)(param_1 + 0xd4) = uVar7;
    *(int *)(param_1 + 0xd8) = (int)uVar8;
    *(int *)(param_1 + 0xdc) = (int)((ulonglong)uVar8 >> 0x20);
    *(undefined4 *)(param_1 + 0xe0) = uVar4;
    func_001E1D44(*piVar2);
    func_004C5070(*DAT_004ef228);
    uVar5 = param_1 + 0x18;
    *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return CONCAT44(uVar5,uVar4);
}

