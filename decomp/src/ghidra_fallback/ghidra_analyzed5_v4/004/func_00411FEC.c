#include "ghidra_types.h"

extern int func_00410704(int *param_1,int *param_2);
extern int func_00411438(int *param_1,uint param_2,uint param_3,int *param_4,uint param_5);
extern int func_00412404(int *param_1,uint param_2,int *param_3,int param_4,int param_5);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056A6E0(int param_1);
extern int func_0056CBF8(int param_1,uint param_2);
extern int func_0056D220(int param_1,uint param_2);

// USA 00411FEC <- EU 00411FCC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *

undefined4 func_00411FEC(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((undefined4 *)(albw_frame + 0x8))
  #define local_40 (*(char *)(albw_frame + 0x10))
  #define aiStack_34 ((int *)(albw_frame + 0x1c))
  uVar2 = func_0056CBF8(param_1[1],param_2);
  if ((((uint)param_4 & 4) != 0) &&
     (uVar3 = func_00412404(param_1,uVar2,param_3,(int)param_5,0), uVar3 == 0)) {
    return 0;
  }
  if (((uint)param_4 & 8) != 0) {
    piVar4 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    if (piVar4 == (int *)0x0) {
      puVar5 = (uint *)func_0056D220(param_1[1],param_2);
      uVar2 = 0;
      if (*puVar5 != 0) {
        do {
          if (((uint)param_4 & 8) != 0) {
            uVar3 = func_0056CBF8(param_1[1],puVar5[uVar2 + 1]);
            uVar3 = func_00412404(param_1,uVar3,param_3,(int)param_5,1);
            if (uVar3 == 0) {
              return 0;
            }
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *puVar5);
      }
    }
    else {
      func_00410704(aiStack_34,piVar4);
      puVar5 = (uint *)func_0056A6E0((int)aiStack_34);
      if (puVar5 == (uint *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (*puVar5 != 0) {
        do {
          if (*puVar5 <= uVar2) {
            return 0;
          }
          if (puVar5 + uVar2 * 2 + 1 == (uint *)0x0) {
            return 0;
          }
          uVar3 = puVar5[uVar2 * 2 + 1];
          uVar6 = puVar5[uVar2 * 2 + 2];
          local_40 = '\0';
          local_48[0] = 0xffffffff;
          bVar1 = func_00569AB8(param_1[1],uVar3,local_48);
          if (!bVar1) {
            return 0;
          }
          if (local_40 == '\0') {
            if (((uint)param_4 & 8) != 0) {
              uVar3 = func_0056CBF8(param_1[1],uVar3);
              uVar3 = func_00412404(param_1,uVar3,param_3,(int)param_5,1);
              goto joined_r0x0041213c;
            }
          }
          else {
            uVar3 = func_00411438(param_1,uVar3,uVar6,param_3,(uint)param_5);
joined_r0x0041213c:
            if (uVar3 == 0) {
              return 0;
            }
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *puVar5);
      }
    }
  }
  return 1;
}

