#include "ghidra_types.h"

extern int func_00410704(int *param_1,int *param_2);
extern int func_00411438(int *param_1,uint param_2,uint param_3,int *param_4,uint param_5);
extern int func_00412404(int *param_1,uint param_2,int *param_3,int param_4,int param_5);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056A6E0(int param_1);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 00411D0C <- EU 00411CEC (Ghidra, non-matching)

undefined4 func_00411D0C(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c ((undefined4 *)(albw_frame + 0x4))
  #define local_34 (*(char *)(albw_frame + 0xc))
  #define aiStack_30 ((int *)(albw_frame + 0x10))
  if (param_2 != (int *)0x0) {
    func_00410704(aiStack_30,param_2);
    puVar2 = (uint *)func_0056A6E0((int)aiStack_30);
    if (puVar2 != (uint *)0x0) {
      uVar3 = 0;
      if (*puVar2 != 0) {
        do {
          if (*puVar2 <= uVar3) {
            return 0;
          }
          if (puVar2 + uVar3 * 2 + 1 == (uint *)0x0) {
            return 0;
          }
          uVar4 = puVar2[uVar3 * 2 + 1];
          uVar5 = puVar2[uVar3 * 2 + 2];
          local_3c[0] = 0xffffffff;
          local_34 = '\0';
          bVar1 = func_00569AB8(param_1[1],uVar4,local_3c);
          if (!bVar1) {
            return 0;
          }
          if (local_34 == '\0') {
            uVar4 = func_0056CBF8(param_1[1],uVar4);
            uVar4 = func_00412404(param_1,uVar4,param_3,0,1);
          }
          else {
            uVar4 = func_00411438(param_1,uVar4,uVar5,param_3,0);
          }
          if (uVar4 == 0) {
            return 0;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *puVar2);
      }
      return 1;
    }
  }
  return 0;
}

