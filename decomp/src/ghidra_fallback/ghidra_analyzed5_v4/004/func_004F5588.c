#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_0014F0B0(int param_1);
extern int func_0014F5A8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_0014FA44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5, undefined4 param_6,int param_7);
extern int func_0014FFEC(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_001503F4(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_004F499C(int param_1,int param_2);
extern int func_004F7D3C(int param_1);
extern int func_005211D8(int param_1);
extern uint DAT_004f596c;
extern float DAT_004f5970;
extern float *DAT_004f5974;
extern float DAT_004f5978;
extern float DAT_004f597c;
extern int DAT_004f5980;
extern float DAT_004f5984;
extern uint DAT_004f5988;
extern uint DAT_004f5b94;
extern float DAT_004f5b98;
extern float DAT_004f5b9c;

// USA 004F5588 <- EU 004F5560 (Ghidra, non-matching)
// GLOBAL DAT_004f596c uint
// GLOBAL DAT_004f5970 float
// GLOBAL DAT_004f5974 float *
// GLOBAL DAT_004f5978 float
// GLOBAL DAT_004f597c float
// GLOBAL DAT_004f5980 int
// GLOBAL DAT_004f5984 float
// GLOBAL DAT_004f5988 uint
// GLOBAL DAT_004f5b94 uint
// GLOBAL DAT_004f5b98 float
// GLOBAL DAT_004f5b9c float

/* WARNING: Variable defined which should be unmapped: objStack_50 */

void func_004F5588(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined4 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  float in_s0;
  float fparam_0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_1 + 0x5a0);
  *(undefined1 *)(param_1 + 0x89e) = 0;
  func_0014F0B0(param_1);
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) & ~DAT_004f596c | 0x10000;
  func_004F7D3C(param_1);
  fVar13 = DAT_004f5970;
  *(float *)(param_1 + 0x590) = DAT_004f5970;
  *(float *)(param_1 + 0x594) = fVar13;
  *(float *)(param_1 + 0x598) = fVar13;
  *(float *)(param_1 + 0x7a8) = fVar13;
  *(float *)(param_1 + 0x7ac) = fVar13;
  *(float *)(param_1 + 0x7b0) = fVar13;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined1 *)(param_1 + 0x8b4) = 0;
  if ((*(uint *)(param_1 + 0x59c) & 0x30) != 0) {
    local_44 = *DAT_004f5974;
    local_40 = DAT_004f5974[1];
    local_3c = DAT_004f5974[2];
    if (((*(uint *)(param_1 + 0x59c) & 0x20) != 0) &&
       (in_s0 = *(float *)(param_1 + 0x4cc), in_s0 != fVar13)) {
      local_44 = fVar13;
      local_40 = fVar13;
      local_3c = fVar13;
      objStack_50[0] = *(uint *)(param_1 + 0x588);
      objStack_50[1] = 0;
      objStack_50[2] = 0;
      fVar14 = fVar13;
      iVar3 = func_0014FA44(param_1,(int)&local_44,*(undefined4 *)(param_1 + 0x430),
                            *(undefined4 *)(param_1 + 0x448),objStack_50[0],0,0);
      if (iVar3 != 0) {
        in_s0 = *(float *)(param_1 + 0x4cc);
        local_40 = fVar14;
        func_00115D70(&local_44,&local_44,in_s0);
        func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_44);
      }
      if (*(int *)(param_1 + 0x434) != 0) {
        objStack_50[0] = *(uint *)(param_1 + 0x588);
        objStack_50[1] = 0;
        objStack_50[2] = 0;
        local_44 = fVar14;
        local_40 = fVar14;
        local_3c = fVar14;
        iVar3 = func_0014FA44(param_1,(int)&local_44,*(undefined4 *)(param_1 + 0x434),
                              *(undefined4 *)(param_1 + 0x448),objStack_50[0],0,0);
        if (iVar3 != 0) {
          in_s0 = *(float *)(param_1 + 0x4cc);
          local_40 = fVar14;
          func_00115D70(&local_44,&local_44,in_s0);
          func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_44);
        }
      }
    }
    if ((*(uint *)(param_1 + 0x59c) & 0x10) != 0) {
      func_00115C70((float *)objStack_50,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x368));
      fVar12 = ALBW_AS_F32(objStack_50[1]);
      fVar14 = DAT_004f5978;
      bVar2 = false;
      if ((*(uint *)(param_1 + 0x59c) & 0x400000) == 0) {
        bVar2 = *(float *)(param_1 + 0x4c4) == *(float *)(param_1 + 0x4c8);
      }
      if ((!bVar2) ||
         (*(float *)(param_1 + 0x4c8) * DAT_004f597c <
          *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x36c))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0x36c)) {
        uVar4 = *(uint *)(param_1 + 0x5a0);
      }
      else {
        *(undefined1 *)(param_1 + 0x849) = 0;
        iVar3 = DAT_004f5980;
        *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x1000000;
        fVar5 = *(float *)(param_1 + 0x4c8);
        if ((int)ALBW_AS_U32(fVar5) < iVar3) {
          fVar5 = DAT_004f5984;
        }
        objStack_50[1] = (uint)ALBW_AS_U32(fVar5);
        if (((*(byte *)(param_1 + 0x768) & 1) != 0) && (fVar13 < *(float *)(param_1 + 0x750))) {
          objStack_50[1] = (uint)ALBW_AS_U32((fVar5 + *(float *)(param_1 + 0x750)));
        }
        objStack_50[0] = (uint)ALBW_AS_U32(fVar13);
        objStack_50[2] = (uint)ALBW_AS_U32(fVar13);
        local_44 = fVar13;
        local_40 = fVar13;
        local_3c = fVar13;
        if (bVar2) {
          iVar3 = func_0014F5A8(param_1,(uint)&local_44,objStack_50,
                                *(uint *)(param_1 + 0x58c) | 0x60,fVar5);
        }
        else {
          iVar3 = func_0014EEC8(param_1,(uint)&local_44,objStack_50,*(undefined4 *)(param_1 + 0x58c)
                                ,fVar5);
        }
        if (iVar3 != 0) {
          func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_44);
        }
        *(uint *)(param_1 + 0x39c) = *(uint *)(param_1 + 0x39c) & 0xfffffffd;
        uVar4 = *(uint *)(param_1 + 0x5a0) & ~DAT_004f5988;
        *(uint *)(param_1 + 0x5a0) = uVar4;
      }
      *(uint *)(param_1 + 0x5a0) = uVar4 & 0xfeffffff;
      puVar6 = (undefined4 *)(param_1 + 0x4b8);
      if (*(char *)(param_1 + 0x768) == '\0') {
        *(undefined1 *)(param_1 + 0x8b4) = 1;
        *(undefined1 *)(param_1 + 0x849) = 0;
        in_s0 = *(float *)(param_1 + 0x4c8);
        uVar4 = *(uint *)(param_1 + 0x58c) | 0x60;
        local_44 = fVar13;
        local_40 = fVar13;
        local_3c = fVar13;
        if (bVar2) {
          iVar3 = func_0014F5A8(param_1,(uint)&local_44,puVar6,uVar4,in_s0);
        }
        else {
          iVar3 = func_0014EEC8(param_1,(uint)&local_44,puVar6,uVar4,in_s0);
        }
      }
      else {
        uVar4 = 0;
        *(undefined1 *)(param_1 + 0x849) = 1;
        do {
          fVar5 = fVar13;
          if (((uint)*(byte *)(param_1 + 0x768) & 1 << (uVar4 & 0xff)) != 0) {
            iVar3 = param_1 + (uVar4 & 1) * 0x10;
            *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x40500;
            fparam_0 = *(float *)(iVar3 + 0x748);
            objStack_50[2] = *(uint *)(iVar3 + 0x754);
            objStack_50[0] = *(uint *)(iVar3 + 0x74c);
            objStack_50[1] = (uint)ALBW_AS_U32((*(float *)(iVar3 + 0x750) + fparam_0));
            if ((*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0x36c)) &&
               ((int)(fparam_0 * fVar14) < 0x40000000)) {
              fVar11 = *(float *)(iVar3 + 0x750) + fparam_0 * fVar14;
              bVar10 = SBORROW4((int)ALBW_AS_U32(fVar11),0x40000000);
              bVar8 = (int)ALBW_AS_U32(fVar11) + -0x40000000 < 0;
              bVar9 = fVar11 == 2.0;
              if (0x40000000 < (int)ALBW_AS_U32(fVar11)) {
                fVar11 = fVar14 - fparam_0;
                bVar8 = fVar11 < fparam_0;
                bVar9 = fVar11 == fparam_0;
                bVar10 = NAN(fVar11) || NAN(fparam_0);
              }
              if (!bVar9 && bVar8 == bVar10) {
                objStack_50[1] = (uint)ALBW_AS_U32(fVar11);
              }
            }
            local_44 = fVar13;
            local_40 = fVar13;
            local_3c = fVar13;
            iVar3 = func_0014EEC8(param_1,(uint)&local_44,objStack_50,
                                  *(uint *)(param_1 + 0x58c) & 0xffffff9f,fparam_0);
            if (iVar3 != 0) {
              local_40 = fVar13;
              func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_44);
            }
          }
          fVar13 = fVar5;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 2);
        *(uint *)(param_1 + 0x39c) = *(uint *)(param_1 + 0x39c) & 0xfffffffd;
        uVar4 = DAT_004f5b94;
        *(undefined1 *)(param_1 + 0x8b4) = 1;
        *(undefined1 *)(param_1 + 0x849) = 0;
        *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) & ~uVar4 & 0xfffbfaff;
        in_s0 = *(float *)(param_1 + 0x4c8);
        uVar4 = *(uint *)(param_1 + 0x58c) | 0x60;
        local_44 = fVar13;
        local_40 = fVar13;
        local_3c = fVar13;
        if (bVar2) {
          iVar3 = func_001503F4(param_1,(uint)&local_44,puVar6,uVar4,in_s0);
        }
        else {
          iVar3 = func_0014FFEC(param_1,(uint)&local_44,puVar6,uVar4,in_s0);
        }
      }
      if (iVar3 != 0) {
        func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_44);
      }
      bVar8 = (*(uint *)(param_1 + 0x5a0) & 0x40000) == 0;
      bVar2 = iVar3 == 0;
      uVar4 = 0;
      if (!bVar8 && !bVar2) {
        uVar4 = (uint)*(byte *)(param_1 + 0x7fc);
      }
      bVar9 = (!bVar8 && !bVar2) && (int)(uVar4 - 2) < 0;
      bVar10 = (bVar8 || bVar2) || uVar4 == 2;
      bVar7 = (!bVar8 && !bVar2) && SBORROW4(uVar4,2);
      if ((!bVar8 && !bVar2) && uVar4 != 2) {
        bVar9 = fVar13 < fVar12;
        bVar10 = fVar13 == fVar12;
        bVar7 = NAN(fVar13) || NAN(fVar12);
      }
      if (!bVar10 && bVar9 == bVar7) {
        in_s0 = *(float *)(param_1 + 0x36c);
        if (in_s0 < *(float *)(param_1 + 0x3d4)) {
          *(float *)(param_1 + 0x3d4) = in_s0;
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x5a0) & 0x100) == 0) {
    *(undefined1 *)(param_1 + 0x76c) = 0;
  }
  else {
    in_s0 = *(float *)(param_1 + 0x3d4);
    if (*(float *)(param_1 + 0x36c) < in_s0) {
      *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x200;
    }
    bVar1 = *(byte *)(param_1 + 0x76c);
    if (bVar1 < 0x80) {
      *(byte *)(param_1 + 0x76c) = bVar1 + 1;
    }
  }
  if ((*(uint *)(param_1 + 0x59c) & 0x1000000) == 0) {
    *(float *)(param_1 + 0x57c) = fVar13;
  }
  else {
    in_s0 = *(float *)(param_1 + 0x57c);
    if ((*(uint *)(param_1 + 0x5a0) & 0x8000) != 0) {
      fVar13 = DAT_004f5b98;
    }
    *(float *)(param_1 + 0x580) = fVar13;
    if (fVar13 != in_s0) {
      in_s0 = in_s0 + (fVar13 - in_s0) * DAT_004f5b9c;
      *(float *)(param_1 + 0x57c) = in_s0;
    }
  }
  bVar2 = func_005211D8(param_1);
  if (bVar2) {
    func_004F499C(param_1,0);
  }
  func_00115C70((float *)(param_1 + 0x8a8),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x368));
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) & 0xefffffff;
  return;
}

