#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0034B918(int param_1,uint param_2);
extern int func_0044121C(int *param_1,undefined4 *param_2);
extern int func_00441278(int param_1,undefined4 *param_2);
extern int func_004B3B10(void);
extern int *DAT_0051a2b0;
extern undefined4 DAT_0051a2c4;
extern char s_npc_name_darkzelda_0051a2c8[];
extern char s_npc_name_maple_0051a2dc[];
extern char s_npc_name_sahas_0051a2ec[];
extern char s_npc_name_zelda_0051a2b4[];

// USA 00519E70 <- EU 00519E48 (Ghidra, non-matching)
// GLOBAL DAT_0051a2b0 int *
// GLOBAL DAT_0051a2c4 undefined4
// GLOBAL s_npc_name_darkzelda_0051a2c8 string
// GLOBAL s_npc_name_maple_0051a2dc string
// GLOBAL s_npc_name_sahas_0051a2ec string
// GLOBAL s_npc_name_zelda_0051a2b4 string

undefined4 func_00519E70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_r1;
  uint in_r2;
  int in_r3;
  bool bVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(*DAT_0051a2b0 + 0x25) == '\0') {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      uVar2 = (uint)*(char *)((int)piVar1 + 0xd);
      if (uVar2 == 0) {
        in_r2 = (uint)*(byte *)((int)piVar1 + 0xe);
      }
      if (uVar2 != 0 || in_r2 != 0) {
        bVar3 = uVar2 == 3;
        if (bVar3) {
          uVar2 = (uint)*(byte *)((int)piVar1 + 0xe);
        }
        if (!bVar3 || uVar2 != 3) {
          return 0;
        }
        return func_0044121C(piVar1,param_2);
      }
    }
    bVar3 = func_004B3B10();
    if (bVar3) {
      *(undefined1 *)(param_1 + 0x134) = 0x18;
    }
    else if (*(char *)(param_1 + 0x134) == -1) {
      *(undefined1 *)(param_1 + 0x134) = 0;
    }
    piVar1 = (int *)0x0;
    switch(*(undefined1 *)(param_1 + 0x134)) {
    case 0:
    case 0x13:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,0);
      break;
    case 1:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,1);
      break;
    case 2:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,2);
      break;
    case 3:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,3);
      break;
    case 4:
    case 9:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,4);
      break;
    case 5:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,5);
      break;
    case 6:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,9);
      break;
    case 7:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,10);
      break;
    case 8:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,0xb);
      break;
    case 10:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,6);
      break;
    case 0xb:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,7);
      break;
    case 0xc:
    case 0x14:
    case 0x15:
    case 0x17:
    case 0x19:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,8);
      break;
    case 0x16:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,0xc);
      break;
    case 0x18:
      piVar1 = (int *)func_0034B918(param_1 + 0x14,0x10);
    }
    if (piVar1 != (int *)0x0) {
      func_00441278((int)piVar1,param_2);
      func_001B6C2C(piVar1,extraout_r1,in_r2,in_r3);
      switch(*(undefined1 *)(param_1 + 0x134)) {
      case 4:
                    /* WARNING: Could not recover jumptable at 0x0051a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*piVar1 + 0x50))(piVar1,7);
      case 9:
                    /* WARNING: Could not recover jumptable at 0x0051a138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*piVar1 + 0x50))(piVar1,0);
      case 0xc:
        local_1c = s_npc_name_darkzelda_0051a2c8;
        local_20 = DAT_0051a2c4;
        return (**(code **)(*piVar1 + 0x58))(piVar1,&local_20);
      case 0xd:
                    /* WARNING: Could not recover jumptable at 0x0051a154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*piVar1 + 0x50))(piVar1,1);
      case 0xe:
                    /* WARNING: Could not recover jumptable at 0x0051a170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*piVar1 + 0x50))(piVar1,2);
      case 0xf:
                    /* WARNING: Could not recover jumptable at 0x0051a18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*piVar1 + 0x50))(piVar1,3);
      case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0051a1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*piVar1 + 0x50))(piVar1,4);
      case 0x11:
                    /* WARNING: Could not recover jumptable at 0x0051a1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*piVar1 + 0x50))(piVar1,5);
      case 0x12:
                    /* WARNING: Could not recover jumptable at 0x0051a1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*piVar1 + 0x50))(piVar1,6);
      case 0x13:
      case 0x15:
        local_1c = s_npc_name_sahas_0051a2ec;
        local_20 = DAT_0051a2c4;
        return (**(code **)(*piVar1 + 0x58))(piVar1,&local_20);
      case 0x14:
        local_1c = s_npc_name_maple_0051a2dc;
        local_20 = DAT_0051a2c4;
        return (**(code **)(*piVar1 + 0x58))(piVar1,&local_20);
      case 0x17:
        local_1c = s_npc_name_zelda_0051a2b4;
        local_20 = DAT_0051a2c4;
        (**(code **)(*piVar1 + 0x58))(piVar1,&local_20);
      }
    }
  }
  return 0;
}

