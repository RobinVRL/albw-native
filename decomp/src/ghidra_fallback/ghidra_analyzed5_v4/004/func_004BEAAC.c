#include "ghidra_types.h"

extern int func_0013C688(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0013C6C0(int param_1);
extern int func_00292010(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_00297138(int param_1,int *param_2);
extern int func_00319628(int param_1,undefined4 param_2);
extern int func_003196A8(int param_1);
extern int func_00336A60(int param_1,int param_2);
extern int func_00391558(int param_1);
extern int func_004BCAE0(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004EA120(int param_1,int *param_2);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053FA48(int param_1);
extern int func_00547B20(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern float *DAT_004bf17c;
extern int DAT_004bf180;
extern int DAT_004bf184;
extern undefined4 *DAT_004bf188;
extern undefined4 *DAT_004bf18c;
extern int DAT_004bf190;
extern undefined4 *DAT_004bf194;
extern undefined4 *DAT_004bf198;
extern int DAT_004bf19c;
extern float DAT_004bf1a0;
extern float DAT_004bf1a4;
extern float DAT_004bf1a8;
extern float DAT_004bf1ac;
extern int *DAT_004bf1b0;
extern float *DAT_004bf1b4;
extern int *DAT_004bf1b8;

// USA 004BEAAC <- EU 004BEA84 (Ghidra, non-matching)
// GLOBAL DAT_004bf17c float *
// GLOBAL DAT_004bf180 int
// GLOBAL DAT_004bf184 int
// GLOBAL DAT_004bf188 undefined4 *
// GLOBAL DAT_004bf18c undefined4 *
// GLOBAL DAT_004bf190 int
// GLOBAL DAT_004bf194 undefined4 *
// GLOBAL DAT_004bf198 undefined4 *
// GLOBAL DAT_004bf19c int
// GLOBAL DAT_004bf1a0 float
// GLOBAL DAT_004bf1a4 float
// GLOBAL DAT_004bf1a8 float
// GLOBAL DAT_004bf1ac float
// GLOBAL DAT_004bf1b0 int *
// GLOBAL DAT_004bf1b4 float *
// GLOBAL DAT_004bf1b8 int *

undefined4 func_004BEAAC(int *param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  short sVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define iStack_50 (*(int *)(albw_frame + 0x0))
  #define fStack_4c (*(float *)(albw_frame + 0x4))
  #define fStack_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define piStack_3c (*(int * *)(albw_frame + 0x14))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  puVar1 = DAT_004bf188;
  iVar5 = DAT_004bf180;
  pfVar4 = DAT_004bf17c;
  if (*(char *)((int)param_1 + 0x98a) != '\n') {
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0xac))(param_1,3,0);
      func_004CF478(param_1[0x1e8],1);
    }
    return 1;
  }
  fVar9 = *DAT_004bf17c;
  if (fVar9 == 0.0) {
    return 1;
  }
  bVar2 = true;
  iStack_34 = DAT_004bf184;
  iVar12 = (int)ALBW_AS_U32(*DAT_004bf17c) + 0x3dbbc;
  fStack_48 = fVar9;
  if (param_2 != 0) {
    fStack_4c = fVar9;
    if (param_2 == 1) {
      if (*(short *)((int)param_1 + 0x95a) == 0) {
        uVar10 = 0;
        uVar8 = 0;
        while( true ) {
          uVar11 = *(undefined4 *)(DAT_004bf180 + uVar8 * 4);
          piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fStack_4c),uVar11,*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc0));
          if (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6) {
            do {
              if ((*piVar6 != 0) && (bVar2 = func_00547B20(*piVar6 + 4), !bVar2)) goto LAB_004bf2f0;
              piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fStack_4c),uVar11,piVar6 + 1);
            } while (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6);
          }
          uVar10 = uVar10 + 1;
          if (6 < (int)uVar10) break;
          uVar8 = uVar10;
          if (6 < uVar10) {
            uVar8 = 0;
          }
        }
        iVar5 = func_0052FBA0((int)ALBW_AS_U32(fStack_48) + 0x3dbbc,param_1[0x253]);
        if (iVar5 != 0) {
          func_00319628(iVar5,param_1[0xfa]);
        }
        fStack_4c = DAT_004bf1b4[1];
        iStack_50 = iStack_34;
        func_004EA120(*DAT_004bf1b8,&iStack_50);
        if (((param_1[0x254] != 0) && (*DAT_004bf17c != 0.0)) &&
           (iVar5 = func_0052FBA0((int)ALBW_AS_U32(*DAT_004bf17c) + 0x3dbbc,param_1[0x254]), iVar5 != 0)) {
          func_00391558(iVar5);
        }
        goto LAB_004bed74;
      }
      if (*(short *)((int)param_1 + 0x95a) != 1) {
        return 0;
      }
      iVar5 = func_0052FBA0(iVar12,param_1[0x253]);
      if (iVar5 == 0) {
        return 0;
      }
      bVar2 = func_003196A8(iVar5);
      fVar9 = ALBW_AS_F32((uint)bVar2);
      if (fVar9 == 0.0) {
        return 0;
      }
      uVar8 = param_1[0x254];
      if (uVar8 != 0) {
        fVar9 = *pfVar4;
      }
      if ((uVar8 != 0 && fVar9 != 0.0) &&
         (iVar5 = func_0052FBA0((int)ALBW_AS_U32(fVar9) + 0x3dbbc,uVar8), iVar5 != 0)) {
        func_00391558(iVar5);
      }
    }
    else if (param_2 == 2) {
      if (*(short *)((int)param_1 + 0x95a) == 0) {
        uVar10 = 0;
        piStack_3c = (int *)0x1;
        uVar8 = 0;
        while( true ) {
          uVar11 = *(undefined4 *)(iVar5 + uVar8 * 4);
          piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fStack_4c),uVar11,*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc0));
          if (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6) {
            do {
              piVar7 = (int *)*piVar6;
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 0x9c))(piVar7,piStack_3c);
              }
              piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fStack_4c),uVar11,piVar6 + 1);
            } while (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6);
          }
          uVar10 = uVar10 + 1;
          if (6 < (int)uVar10) break;
          uVar8 = uVar10;
          if (6 < uVar10) {
            uVar8 = 0;
          }
        }
        goto LAB_004bed74;
      }
      if ((ushort)*(byte *)((int)param_1 + 0x852) != *(ushort *)((int)param_1 + 0x90a)) {
        return 0;
      }
    }
    goto LAB_004bf2f0;
  }
  sVar3 = *(short *)((int)param_1 + 0x95a);
  if (sVar3 == 0) {
    if (param_1[0x252] == 0) {
      piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),*DAT_004bf188,*(int **)((int)ALBW_AS_U32(*DAT_004bf17c) + 0x3dbc0)
                                   );
      piVar7 = (int *)((int)ALBW_AS_U32(fStack_48) + 0x3dbc8);
      if ((int *)*piVar7 != piVar6) {
        do {
          if (*piVar6 != 0) {
            param_1[0x252] = *(int *)(*piVar6 + 0x2cc);
            break;
          }
          piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fStack_48),*puVar1,piVar6 + 1);
        } while ((int *)*piVar7 != piVar6);
      }
    }
    puVar1 = DAT_004bf18c;
    if ((param_1[0x205] == 0) && (fVar9 = *pfVar4, fVar9 != 0.0)) {
      piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),*DAT_004bf18c,*(int **)(DAT_004bf190 + (int)ALBW_AS_U32(fVar9)));
      if (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6) {
        do {
          if (*piVar6 != 0) {
            param_1[0x205] = *(int *)(*piVar6 + 0x2cc);
            break;
          }
          piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),*puVar1,piVar6 + 1);
        } while (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6);
      }
    }
    puVar1 = DAT_004bf194;
    if ((param_1[0x254] == 0) && (fVar9 = *pfVar4, fVar9 != 0.0)) {
      piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),*DAT_004bf194,*(int **)(DAT_004bf190 + (int)ALBW_AS_U32(fVar9)));
      if (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6) {
        do {
          if (*piVar6 != 0) {
            param_1[0x254] = *(int *)(*piVar6 + 0x2cc);
            break;
          }
          piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),*puVar1,piVar6 + 1);
        } while (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6);
      }
    }
    puVar1 = DAT_004bf198;
    if ((param_1[0x253] == 0) && (fVar9 = *pfVar4, fVar9 != 0.0)) {
      piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),*DAT_004bf198,*(int **)(DAT_004bf190 + (int)ALBW_AS_U32(fVar9)));
      if (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6) {
        do {
          iVar5 = *piVar6;
          if (iVar5 != 0) {
            param_1[0x253] = *(int *)(iVar5 + 0x2cc);
            *(int *)(iVar5 + 1000) = param_1[0xfa];
            *(int *)(iVar5 + 0x4c0) = param_1[0xb3];
            break;
          }
          piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),*puVar1,piVar6 + 1);
        } while (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6);
      }
    }
LAB_004bed74:
    *(short *)((int)param_1 + 0x95a) = *(short *)((int)param_1 + 0x95a) + 1;
    return 0;
  }
  if (sVar3 == 1) {
    sVar3 = 2;
  }
  else {
    if (sVar3 == 2) {
      iVar5 = func_0052FBA0(iVar12,param_1[0x252]);
      if (iVar5 != 0) {
        func_0013C688(iVar5,param_1 + 0xf4,param_1 + 0xfa);
      }
      iVar5 = func_0052FBA0(iVar12,param_1[0x205]);
      if (iVar5 != 0) {
        iVar12 = func_00588BE4((int)param_1);
        func_00336A60(iVar5,iVar12);
      }
    }
    else if (sVar3 == 3) {
      iVar5 = func_0052FBA0(iVar12,param_1[0x252]);
      if (iVar5 == 0) {
        return 0;
      }
      bVar2 = func_0013C6C0(iVar5);
      fVar9 = ALBW_AS_F32((uint)bVar2);
      if (fVar9 == 0.0) {
        return 0;
      }
      uVar8 = param_1[0x254];
      if (uVar8 != 0) {
        fVar9 = *pfVar4;
      }
      if ((uVar8 != 0 && fVar9 != 0.0) &&
         (iVar5 = func_0052FBA0((int)ALBW_AS_U32(fVar9) + 0x3dbbc,uVar8), iVar5 != 0)) {
        func_00391558(iVar5);
      }
      func_004BCAE0((int)param_1,0);
      iVar5 = DAT_004bf19c;
      *(undefined2 *)(param_1 + 0x256) = 0x3c;
      param_1[0x255] = iVar5;
      *(int *)(param_1[0x1e8] + 0x158) = iVar5;
    }
    else if (sVar3 == 4) {
      pfVar4 = (float *)(param_1 + 0x255);
      fVar9 = *pfVar4;
      if (DAT_004bf1a0 - fVar9 <= DAT_004bf1a4) {
        if (DAT_004bf1a8 <= DAT_004bf1a0 - fVar9) {
          *pfVar4 = DAT_004bf1a0;
        }
        else {
          bVar2 = false;
          *pfVar4 = fVar9 - DAT_004bf1a4;
        }
      }
      else {
        bVar2 = false;
        *pfVar4 = fVar9 + DAT_004bf1a4;
      }
      *(int *)(param_1[0x1e8] + 0x158) = param_1[0x255];
      if (!bVar2) {
        return 0;
      }
    }
    else {
      if (sVar3 != 5) {
        if (sVar3 != 6) {
          return 0;
        }
        iVar5 = func_0053FA48(*DAT_004bf1b0);
        if (iVar5 == 0) {
          return 0;
        }
LAB_004bf2f0:
        *(undefined2 *)((int)param_1 + 0x95a) = 0;
        return 1;
      }
      if ((short)param_1[0x256] != 0) {
        *(short *)(param_1 + 0x256) = (short)param_1[0x256] + -1;
        return 0;
      }
      piStack_3c = param_1 + 599;
      iVar12 = 0;
      do {
        fVar9 = *pfVar4;
        uVar11 = *(undefined4 *)(iVar5 + iVar12 * 4);
        if (fVar9 != 0.0) {
          piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),uVar11,*(int **)(DAT_004bf190 + (int)ALBW_AS_U32(fVar9)));
          if (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6) {
            do {
              if (*piVar6 != 0) {
                bVar2 = func_00547B20(*piVar6 + 4);
                if (bVar2) {
                  *(char *)piStack_3c = (char)param_1[599] + '\x01';
                }
                break;
              }
              piVar6 = (int *)func_005841A8((int)ALBW_AS_U32(fVar9),uVar11,piVar6 + 1);
            } while (*(int **)((int)ALBW_AS_U32(fVar9) + 0x3dbc8U) != piVar6);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 7);
      if (6 < *(byte *)(param_1 + 599)) {
        fStack_4c = *DAT_004bf1b4;
        iStack_50 = iStack_34;
        func_00297138(*DAT_004bf1b8,&iStack_50);
        goto LAB_004bf2f0;
      }
      pfVar4 = (float *)func_00520FC0();
      fStack_4c = *pfVar4;
      fStack_48 = pfVar4[1];
      fStack_44 = pfVar4[2];
      iVar5 = param_1[0xfa];
      func_004D8054(&fStack_4c,iVar5 + 0x80000000U,DAT_004bf1ac);
      func_00292010(*DAT_004bf1b0,&fStack_4c,iVar5 + 0x80000000U);
    }
    sVar3 = *(short *)((int)param_1 + 0x95a) + 1;
  }
  *(short *)((int)param_1 + 0x95a) = sVar3;
  return 0;
}

