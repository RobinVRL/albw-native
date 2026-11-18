// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00111610(int param_1,uint *param_2);
extern float func_00111764(int param_1,uint *param_2);
extern int func_001508C0(int param_1,int param_2,int param_3);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0029A460(int param_1,int *param_2,uint param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00539200(int param_1);
extern int func_0053B098(int param_1);
extern undefined4 DAT_0029a004;
extern int *DAT_0029a008;
extern uint *DAT_0029a00c;
extern undefined4 *DAT_0029a010;

// USA 00299C04 <- EU 00299BE0 (Ghidra, non-matching)
// GLOBAL DAT_0029a004 undefined4
// GLOBAL DAT_0029a008 int *
// GLOBAL DAT_0029a00c uint *
// GLOBAL DAT_0029a010 undefined4 *

void func_00299C04(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  float in_s1;
  undefined8 uVar16;
  int *local_6c;
  
  uVar1 = DAT_0029a004;
  uVar13 = 0;
  puVar12 = (uint *)(param_1[0x110] + -4);
  if (puVar12 != (uint *)(param_1 + 0x10e)) {
    piVar2 = param_1 + 0x191;
    puVar3 = (uint *)(param_1 + 0x141);
    puVar4 = (uint *)(param_1 + 0x13f);
    puVar5 = (uint *)(param_1 + 0x142);
    do {
      piVar6 = (int *)func_0052FBA0(*DAT_0029a008 + 0x3dbbc,*puVar12);
      if (piVar6 != (int *)0x0) {
        if (((*DAT_0029a00c & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0029a00c), iVar7 != 0))
        {
          *DAT_0029a010 = uVar1;
        }
        uVar16 = (**(code **)*piVar6)(piVar6,DAT_0029a010);
        uVar10 = (uint)((ulonglong)uVar16 >> 0x20);
        if ((int)uVar16 == 0) {
          piVar6 = (int *)0x0;
        }
        if (piVar6 != (int *)0x0) {
          bVar14 = false;
          if ((char)param_1[0x1db] != '\0') {
            bVar14 = *(char *)((int)param_1 + 0x76a) == '\0';
            if (bVar14) {
              uVar10 = (uint)*(byte *)((int)param_1 + 0x76b);
            }
            uVar8 = (uint)(short)piVar6[0x15];
            if (bVar14 && uVar10 == 0) {
              if (uVar8 != 0xffffffff) {
                uVar10 = param_2;
              }
              bVar14 = false;
              if (uVar8 != 0xffffffff && uVar8 != uVar10) goto LAB_00299d10;
            }
            bVar14 = true;
          }
LAB_00299d10:
          iVar7 = piVar6[0x105];
          if (iVar7 != 0) {
            local_6c = piVar6;
            if (*(char *)((int)param_1 + 0x769) != '\0') {
              local_6c = param_1;
            }
            iVar9 = func_0053B098(iVar7);
            if (iVar9 == 0) {
              if (((*(char *)(iVar7 + 0x68) == '\x01') || (*(char *)(iVar7 + 0x68) == '\x02')) ||
                 (*(char *)(iVar7 + 0x39) != '\0')) {
                uVar10 = 1 << (uVar13 & 0xff);
                puVar11 = (uint *)0x1;
                if ((*puVar4 & uVar10) == 0) {
                  if (bVar14) {
                    if ((param_1[0x15c] == -1) || ((param_1[0x140] & uVar10) == 0)) {
                      if (param_1[0x15f] != -1) {
                        func_0029A460((int)param_1,local_6c,3);
                      }
                    }
                    else {
                      func_0029A460((int)param_1,local_6c,0);
                    }
                  }
                  *puVar4 = *puVar4 | uVar10;
                  *puVar3 = *puVar3 | uVar10;
                  param_1[0x140] = param_1[0x140] & ~uVar10;
                  *puVar5 = *puVar5 & ~uVar10;
                  puVar11 = puVar5;
                }
                uVar8 = *puVar3;
                if ((uVar8 & uVar10) == 0) {
                  if (bVar14) {
                    uVar8 = param_1[0x15f];
                  }
                  if (bVar14 && uVar8 != 0xffffffff) {
                    func_0029A460((int)param_1,local_6c,3);
                  }
                  *puVar3 = *puVar3 | uVar10;
                  param_1[0x140] = param_1[0x140] & ~uVar10;
                  uVar10 = *puVar5 & ~uVar10;
                  puVar11 = puVar5;
                  goto LAB_00299f64;
                }
                if (bVar14) {
                  puVar11 = (uint *)param_1[0x15e];
                }
                if (bVar14 && puVar11 != (uint *)0xffffffff) {
                  func_001508C0((int)local_6c,(int)puVar11,(int)piVar2);
                  bVar14 = func_00539200((int)piVar2);
                  if (bVar14) {
                    fVar15 = func_00111764((int)(param_1 + 0x14d),(uint *)0x0);
                    func_0025B860((int)piVar2,0,fVar15,in_s1);
                    fVar15 = func_00111610((int)(param_1 + 0x14d),(uint *)0x0);
                    func_0025B824((int)piVar2,fVar15);
                  }
                }
              }
              else {
                uVar10 = 1 << (uVar13 & 0xff);
                uVar8 = *puVar5;
                if ((uVar8 & uVar10) == 0) {
                  if (bVar14) {
                    uVar8 = param_1[0x160];
                  }
                  if (bVar14 && uVar8 != 0xffffffff) {
                    func_0029A460((int)param_1,local_6c,4);
                  }
                  *puVar5 = *puVar5 | uVar10;
                  *puVar3 = *puVar3 & ~uVar10;
                }
              }
            }
            else {
              uVar8 = param_1[0x140];
              uVar10 = 1 << (uVar13 & 0xff);
              if ((uVar8 & uVar10) == 0) {
                if (bVar14) {
                  uVar8 = param_1[0x15d];
                }
                if (bVar14 && uVar8 != 0xffffffff) {
                  func_0029A460((int)param_1,local_6c,1);
                }
                param_1[0x140] = param_1[0x140] | uVar10;
                *puVar5 = *puVar5 | uVar10;
                *puVar4 = *puVar4 & ~uVar10;
                uVar10 = *puVar3 & ~uVar10;
                puVar11 = puVar3;
LAB_00299f64:
                *puVar11 = uVar10;
              }
            }
          }
          if ((*(char *)((int)param_1 + 0x769) != '\0') && (*(char *)((int)piVar6 + 0x3cd) != '\0'))
          {
            *(undefined1 *)((int)param_1 + 0x76d) = 1;
          }
        }
      }
      uVar13 = uVar13 + 1;
      puVar12 = (uint *)(puVar12[2] - 4);
    } while (puVar12 != (uint *)(param_1 + 0x10e));
  }
  return;
}

