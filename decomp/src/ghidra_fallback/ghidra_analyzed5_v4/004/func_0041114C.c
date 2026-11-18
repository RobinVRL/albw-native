#include "ghidra_types.h"

extern int func_00410FB8(int *param_1,uint param_2,int *param_3,uint param_4,uint param_5,uint param_6);
extern int func_00411FEC(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_00412404(int *param_1,uint param_2,int *param_3,int param_4,int param_5);
extern int func_00569B68(int param_1,uint param_2,uint *param_3);
extern int func_00569C10(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056CB18(int param_1,uint param_2);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 0041114C <- EU 0041112C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *

undefined4 func_0041114C(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(uint *)(albw_frame + 0x0))
  #define local_4c (*(uint *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 ((uint *)(albw_frame + 0xc))
  #define local_2c (*(undefined1 *)(albw_frame + 0x24))
  #define local_2b (*(undefined1 *)(albw_frame + 0x25))
  local_50 = 0xffffffff;
  local_4c = 0xffffffff;
  uStack_48 = 0;
  bVar1 = func_00569C10(param_1[1],param_2,&local_50);
  if (!bVar1) {
    return 0;
  }
  if (local_50 != 0xffffffff) {
    iVar2 = func_0056CB18(param_1[1],local_50);
    if (iVar2 == 1) {
      uVar4 = local_50;
      if (local_50 <= local_4c) {
        do {
          if (((uint)param_4 & 1) != 0) {
            uVar3 = func_0056CBF8(param_1[1],uVar4);
            uVar3 = func_00412404(param_1,uVar3,param_3,(int)param_5,0);
            if (uVar3 == 0) {
              return 0;
            }
          }
          if (((uint)param_4 & 0xc) != 0) {
            local_2c = 0;
            local_44[0] = 0;
            local_2b = 0;
            local_44[5] = 0;
            local_44[1] = 0xffffffff;
            local_44[2] = 0xffffffff;
            local_44[3] = 0xffffffff;
            local_44[4] = 0xffffffff;
            iVar2 = func_00569B68(param_1[1],uVar4,local_44);
            if (iVar2 == 0) {
              return 0;
            }
            uVar3 = 0;
            do {
              if ((local_44[uVar3 + 1] != 0xffffffff) &&
                 (iVar2 = func_00411FEC(param_1,local_44[uVar3 + 1],param_3,param_4,param_5),
                 iVar2 == 0)) {
                return 0;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < 4);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 <= local_4c);
      }
    }
    else if ((iVar2 == 3) && (uVar4 = local_50, local_50 <= local_4c)) {
      do {
        iVar2 = func_00410FB8(param_1,uVar4,param_3,(uint)param_4,(uint)param_5,param_2);
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= local_4c);
    }
  }
  return 1;
}

