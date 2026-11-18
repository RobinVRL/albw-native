#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001507A8(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_001d2060;
extern int DAT_001d2064;
extern float DAT_001d2068;
extern int *DAT_001d206c;
extern undefined4 *DAT_001d2070;
extern int DAT_001d2074;

// USA 001D1DEC <- EU 001D1DEC (Ghidra, non-matching)
// GLOBAL DAT_001d2060 float
// GLOBAL DAT_001d2064 int
// GLOBAL DAT_001d2068 float
// GLOBAL DAT_001d206c int *
// GLOBAL DAT_001d2070 undefined4 *
// GLOBAL DAT_001d2074 int

bool func_001D1DEC(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  ushort uVar6;
  bool bVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c ((float *)(albw_frame + 0x4))
  #define local_34 (*(float *)(albw_frame + 0xc))
  fVar8 = *(float *)(param_2 + 8);
  uVar6 = *(ushort *)(param_2 + 0x20) & 0x1f;
  if (fVar8 <= DAT_001d2060) {
    fVar8 = -fVar8;
  }
  if (*(char *)(param_1 + 0x500) == '\x05') {
    return false;
  }
  if ((DAT_001d2064 < (int)ALBW_AS_U32(fVar8)) && (uVar6 == 0xb || uVar6 == 10)) {
    *(undefined1 *)(param_1 + 0x63f) = 1;
  }
  else {
    if (uVar6 == 6 && DAT_001d2064 < (int)ALBW_AS_U32(fVar8)) {
      return false;
    }
    bVar7 = DAT_001d2068 == fVar8;
    if ((int)ALBW_AS_U32(DAT_001d2068) <= (int)ALBW_AS_U32(fVar8)) {
      bVar7 = uVar6 != 6;
    }
    if (!bVar7) {
      fVar8 = DAT_001d2060;
      iVar2 = func_0068C690((float *)(param_2 + 4));
      local_40 = (*(int *)(param_1 + 1000) + -0x80000000) - iVar2;
      iVar3 = func_0058E2B8(&local_40);
      puVar1 = DAT_001d2070;
      if ((*DAT_001d206c <= iVar3) || (*(char *)(param_1 + 0x5e0) == '\x01')) goto LAB_001d1eec;
      if (*(short *)(param_1 + 0x5c2) == 0) {
        if (((*(float *)(param_1 + 0x5c4) != fVar8) &&
            (*(int *)(param_1 + 1000) + 0x20000000U >> 0x1e ==
             *(int *)(param_1 + 0x5b8) + 0x20000000U >> 0x1e)) &&
           (func_00115C70(local_3c,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x590)),
           (int)ALBW_AS_U32((local_3c[0] * local_3c[0] + local_34 * local_34)) < DAT_001d2074)) {
          iVar3 = (iVar2 + 0x20000000U >> 0x1e ^ 2) * 0x40000000;
          uVar4 = func_00111A64((uint *)*puVar1);
          if ((uint)((ulonglong)uVar4 * 100 >> 0x20) < 0x32) {
            iVar3 = iVar3 + 0x40000000;
          }
          else {
            iVar3 = iVar3 + -0x40000000;
          }
          if (iVar3 == *(int *)(param_1 + 0x5b8)) {
            iVar3 = iVar3 + -0x80000000;
          }
          *(int *)(param_1 + 0x5b8) = iVar3;
        }
        *(undefined2 *)(param_1 + 0x5c2) = 10;
        if (*(char *)(param_1 + 0x500) == '\x02') {
          pfVar5 = (float *)func_00520FC0();
          func_00115C70(local_3c,(float *)(param_1 + 0x3d0),pfVar5);
          iVar3 = func_0068C690(local_3c);
          uVar4 = iVar3 + 0x20000000U >> 0x1e;
          iVar3 = uVar4 * 0x40000000;
          if ((*(int *)(param_1 + 0x5b8) + 0x20000000U >> 0x1e == uVar4) &&
             ((iVar2 + 0x20000000U >> 0x1e ^ 2) == uVar4)) {
            uVar4 = func_00111A64((uint *)*puVar1);
            if ((uint)((ulonglong)uVar4 * 100 >> 0x20) < 0x32) {
              iVar3 = iVar3 + 0x40000000;
            }
            else {
              iVar3 = iVar3 + -0x40000000;
            }
            if (*(int *)(param_1 + 0x5b8) == iVar3) {
              iVar3 = iVar3 + -0x80000000;
            }
          }
          *(int *)(param_1 + 0x5bc) = iVar3;
          *(undefined1 *)(param_1 + 0x5da) = 1;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x3d8);
  }
LAB_001d1eec:
  bVar7 = func_001507A8(param_1,param_2);
  return bVar7;
}

