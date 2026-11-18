// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00120A64(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern int func_00520FC0(void);
extern int func_00556D04(int param_1);
extern int func_00556DC0(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0060F1BC(int *param_1);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0017f00c;
extern int DAT_0017f010;
extern int DAT_0017f014;
extern int DAT_0017f018;
extern int DAT_0017f01c;

// USA 0017ED08 <- EU 0017ED08 (Ghidra, non-matching)
// GLOBAL DAT_0017f00c int *
// GLOBAL DAT_0017f010 int
// GLOBAL DAT_0017f014 int
// GLOBAL DAT_0017f018 int
// GLOBAL DAT_0017f01c int

undefined4 func_0017ED08(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  uint in_r3;
  int iVar6;
  float fVar7;
  
  iVar6 = *DAT_0017f00c;
  if (iVar6 != 0) {
    iVar3 = func_00556D04(iVar6);
    if (iVar3 == 0) {
      bVar2 = func_00556EAC(iVar6,0xa6);
      if ((bVar2) && ((short)param_1[0xe] != 0)) {
        func_00588C14((int)param_1,1,0);
      }
    }
    else if ((short)param_1[0xe] != 0) {
      func_00588C14((int)param_1,1,0);
      *(undefined1 *)((int)param_1 + 0xbed) = 1;
      cVar1 = (char)param_1[0x259];
      if ((cVar1 == '\x05' || cVar1 == '\a') || ((cVar1 == '\b' || cVar1 == '\t') || cVar1 == '\v'))
      {
        func_00659400(param_1 + 600,0);
      }
    }
    cVar1 = func_00556DC0(iVar6);
    if (cVar1 == '\0') {
      bVar2 = func_00556EAC(iVar6,99);
      if ((bVar2) || (bVar2 = func_00556EAC(iVar6,100), bVar2)) {
        iVar3 = DAT_0017f01c;
        if ((param_1[0xb8] & 2U) == 0) {
          param_1[0x26d] = 0xc;
          param_1[0x26e] = iVar3;
          param_1[0x26c] = 0;
          piVar5 = *(int **)(iVar6 + 0x1c);
          param_1[0x293] = *piVar5;
          param_1[0x294] = piVar5[1];
          param_1[0x295] = piVar5[2];
          param_1[0xb8] = param_1[0xb8] | 2;
        }
      }
      else {
        bVar2 = func_00556EAC(iVar6,0x65);
        if ((bVar2) || (bVar2 = func_00556EAC(iVar6,0x66), bVar2)) {
          if ((param_1[0xb8] & 2U) == 0) {
            param_1[0xb8] = param_1[0xb8] | 2;
          }
        }
        else if ((param_1[0xb8] & 2U) != 0) {
          param_1[0xb8] = param_1[0xb8] & 0xfffffffd;
          *(undefined1 *)((int)param_1 + 0xbf2) = 1;
        }
      }
    }
    else {
      if ((param_1[0xb8] & 2U) == 0) {
        pfVar4 = (float *)func_00520FC0();
        fVar7 = ALBW_AS_F32(param_1[0xf4]) - *pfVar4;
        if ((DAT_0017f010 <=
             (int)ALBW_AS_U32((fVar7 * fVar7 +
                   (ALBW_AS_F32(param_1[0xf5]) - pfVar4[1]) * (ALBW_AS_F32(param_1[0xf5]) - pfVar4[1]) +
                  (ALBW_AS_F32(param_1[0xf6]) - pfVar4[2]) * (ALBW_AS_F32(param_1[0xf6]) - pfVar4[2])))) &&
           (iVar3 = func_00120A64(param_1 + 0xf4,pfVar4,DAT_0017f010,in_r3), iVar3 != 0)) {
          func_00659400(param_1 + 600,0);
        }
        iVar3 = DAT_0017f014;
        param_1[0x26d] = 0x1a;
        param_1[0x26e] = iVar3;
        param_1[0x26c] = 0;
        piVar5 = *(int **)(iVar6 + 0x1c);
        param_1[0x293] = *piVar5;
        param_1[0x294] = piVar5[1];
        param_1[0x295] = piVar5[2];
        param_1[0xb8] = param_1[0xb8] | 2;
      }
      if ((char)param_1[0x259] == '\x05') {
        param_1[0xf8] = DAT_0017f018;
        param_1[0xf5] = param_1[0x294];
        param_1[0x2a5] = param_1[0xf4];
        param_1[0x2a6] = param_1[0xf5];
        param_1[0x2a7] = param_1[0xf6];
      }
      else if ((char)param_1[0x259] == '\0') {
        *(undefined1 *)(param_1 + 0x2fb) = 0;
        *(undefined1 *)((int)param_1 + 0x853) = 0;
        param_1[0xda] = param_1[2];
        param_1[0xdb] = param_1[3];
        param_1[0xdc] = param_1[4];
        param_1[0xf4] = param_1[2];
        param_1[0xf5] = param_1[3];
        param_1[0xf6] = param_1[4];
      }
    }
  }
  if ((uint)param_1[0x272] < (uint)param_1[0x273]) {
    param_1[0x272] = param_1[0x272] + 1;
  }
  return func_0060F1BC(param_1);
}

