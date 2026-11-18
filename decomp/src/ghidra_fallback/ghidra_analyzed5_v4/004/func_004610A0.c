#include "ghidra_types.h"

extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00582130(int param_1,uint param_2);
extern int DAT_00461238;
extern int *DAT_0046123c;
extern uint DAT_00461240;
extern undefined DAT_00461244;

// USA 004610A0 <- EU 00461078 (Ghidra, non-matching)
// GLOBAL DAT_00461238 int
// GLOBAL DAT_0046123c int *
// GLOBAL DAT_00461240 uint
// GLOBAL DAT_00461244 undefined

void func_004610A0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint in_r3;
  uint uVar6;
  ulonglong uVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(undefined2 * *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c ((undefined2 *)(albw_frame + 0x14))
  #define local_2e (*(undefined2 *)(albw_frame + 0x32))
  piVar1 = DAT_0046123c;
  local_54 = local_4c;
  uStack_50 = 0x10;
  local_2e = 0;
  local_4c[0] = 0;
  local_58 = DAT_00461238;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar7 = (ulonglong)DAT_00461240;
    do {
      piVar2 = (int *)(param_1 + 0x7c);
      if (uVar6 < 10) {
        piVar2 = (int *)(param_1 + 0x7c + uVar6 * 0x18);
      }
      if (-1 < *piVar2) {
        puVar3 = (undefined4 *)(param_1 + 0x7c);
        if (uVar6 < 10) {
          puVar3 = (undefined4 *)(param_1 + 0x7c + uVar6 * 0x18);
        }
        uVar4 = func_00582130(*piVar1,(int)(short)*puVar3);
        iVar5 = param_1 + 0x7c;
        if (uVar6 < 10) {
          iVar5 = param_1 + 0x7c + uVar6 * 0x18;
        }
        if (*(uint *)(iVar5 + 4) != uVar4) {
          func_004994FC((int)&local_58,&DAT_00461244,uVar4,in_r3);
          iVar5 = param_1 + 0x7c;
          if (uVar6 < 10) {
            iVar5 = param_1 + 0x7c + uVar6 * 0x18;
          }
          piVar2 = *(int **)(iVar5 + 8);
          (**(code **)(local_58 + 8))(&local_58);
          in_r3 = 0;
          do {
            if (local_54[in_r3] == 0) {
              if ((int)in_r3 < 0x40001) goto LAB_00461188;
              break;
            }
            in_r3 = in_r3 + 1;
          } while ((int)in_r3 < 0x40001);
          in_r3 = 0;
LAB_00461188:
          in_r3 = in_r3 & 0xffff;
          (**(code **)(local_58 + 8))(&local_58);
          (**(code **)(*piVar2 + 0x60))(piVar2,local_54,0);
          iVar5 = param_1 + 0x7c;
          if (uVar6 < 10) {
            iVar5 = param_1 + 0x7c + uVar6 * 0x18;
          }
          *(uint *)(iVar5 + 4) = uVar4;
          if (uVar4 == 0) {
            if (param_2 == 0) {
              iVar5 = param_1 + 0x7c;
              if (uVar6 < 10) {
                iVar5 = param_1 + 0x7c + uVar6 * 0x18;
              }
              func_00231524(iVar5 + 0xc);
            }
            else {
              iVar5 = param_1 + 0x7c;
              if (uVar6 < 10) {
                iVar5 = param_1 + 0x7c + uVar6 * 0x18;
              }
              func_002317C0((undefined2 *)(iVar5 + 0xc),ALBW_AS_F32(uVar7));
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x74));
  }
  return;
}

