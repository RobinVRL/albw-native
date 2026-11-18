#include "ghidra_types.h"

extern int func_0041297C(int *param_1,int *param_2);
extern int func_00569BBC(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569C10(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056C1B4(int *param_1,uint param_2,uint param_3);
extern int func_0056C2B8(int *param_1,uint param_2,uint param_3);
extern int func_0056C5EC(int param_1,uint *param_2,uint param_3,uint param_4);
extern int func_0056CB18(int param_1,uint param_2);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 0056C018 <- EU 0056BFF0 (Ghidra, non-matching)

undefined4 func_0056C018(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(uint *)(albw_frame + 0x0))
  #define local_4c (*(uint *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(uint *)(albw_frame + 0x14))
  #define local_38 (*(undefined1 *)(albw_frame + 0x18))
  #define local_37 (*(undefined1 *)(albw_frame + 0x19))
  #define local_36 (*(undefined1 *)(albw_frame + 0x1a))
  #define local_35 (*(undefined1 *)(albw_frame + 0x1b))
  #define local_34 (*(undefined1 *)(albw_frame + 0x1c))
  #define aiStack_28 ((int *)(albw_frame + 0x28))
  local_50 = 0xffffffff;
  local_4c = 0xffffffff;
  uStack_48 = 0;
  bVar2 = func_00569C10(param_1[1],param_2,&local_50);
  uVar6 = 0;
  if (bVar2) {
    iVar4 = func_0056CB18(param_1[1],local_50);
    if (iVar4 == 1) {
      uVar7 = local_50;
      if (local_50 <= local_4c) {
        do {
          iVar4 = func_0056C2B8(param_1,uVar7,param_3);
          if (iVar4 == 0) {
            return 0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 <= local_4c);
      }
    }
    else if ((iVar4 == 3) && (uVar7 = local_50, local_50 <= local_4c)) {
      do {
        uVar6 = func_0056CBF8(param_1[1],uVar7);
        piVar5 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar6);
        if (((param_3 & 10) != 0) && (piVar5 == (int *)0x0)) {
          return 0;
        }
        if ((param_3 & 8) != 0) {
          local_40 = 0;
          local_3c = local_3c & 0xffff0000;
          iVar4 = func_00569BBC(param_1[1],uVar7,&local_44);
          uVar1 = local_44;
          if (iVar4 == 0) {
            return 0;
          }
          func_0041297C(aiStack_28,piVar5);
          local_38 = 0;
          local_37 = 0;
          local_36 = 0;
          local_35 = 0;
          local_34 = 0;
          iVar4 = func_0056C5EC((int)aiStack_28,&local_40,uVar1,0);
          if (iVar4 == 0) {
            return 0;
          }
          cVar3 = func_0056C1B4(param_1,local_40,local_3c);
          if (cVar3 == '\0') {
            return 0;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 <= local_4c);
    }
    uVar6 = 1;
  }
  return uVar6;
}

