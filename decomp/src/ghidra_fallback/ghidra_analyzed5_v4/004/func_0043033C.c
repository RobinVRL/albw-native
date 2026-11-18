#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00433ABC(int *param_1,int *param_2,int param_3);
extern int func_0068B200(float *param_1,float *param_2);
extern int *DAT_004306e8;
extern float DAT_004306ec;
extern float DAT_004306f0;
extern float DAT_004306f4;
extern float DAT_004306f8;
extern int DAT_004306fc;
extern int *DAT_00430700;
extern float DAT_00430704;

// USA 0043033C <- EU 0043031C (Ghidra, non-matching)
// GLOBAL DAT_004306e8 int *
// GLOBAL DAT_004306ec float
// GLOBAL DAT_004306f0 float
// GLOBAL DAT_004306f4 float
// GLOBAL DAT_004306f8 float
// GLOBAL DAT_004306fc int
// GLOBAL DAT_00430700 int *
// GLOBAL DAT_00430704 float

void func_0043033C(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_e0 (*(undefined2 *)(albw_frame + 0x0))
  #define uStack_de (*(undefined2 *)(albw_frame + 0x2))
  #define local_dc (*(float *)(albw_frame + 0x4))
  #define fStack_d8 (*(float *)(albw_frame + 0x8))
  #define local_d4 (*(float *)(albw_frame + 0xc))
  #define local_d0 (*(float *)(albw_frame + 0x10))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define fStack_c8 (*(float *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define local_c0 (*(float *)(albw_frame + 0x20))
  #define local_bc (*(float *)(albw_frame + 0x24))
  #define local_b8 (*(float *)(albw_frame + 0x28))
  #define local_b4 (*(float *)(albw_frame + 0x2c))
  #define local_b0 (*(float *)(albw_frame + 0x30))
  #define local_ac (*(undefined4 *)(albw_frame + 0x34))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_a4 (*(float *)(albw_frame + 0x3c))
  #define local_a0 (*(undefined2 *)(albw_frame + 0x40))
  #define local_9c (*(undefined4 *)(albw_frame + 0x44))
  #define local_98 (*(undefined4 *)(albw_frame + 0x48))
  #define local_90 (*(undefined4 *)(albw_frame + 0x50))
  #define local_8c (*(undefined4 *)(albw_frame + 0x54))
  #define local_88 (*(undefined1 *)(albw_frame + 0x58))
  #define local_78 (*(int *)(albw_frame + 0x68))
  #define local_74 (*(float * *)(albw_frame + 0x6c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x70))
  #define afStack_6c ((float *)(albw_frame + 0x74))
  #define local_60 (*(float *)(albw_frame + 0x80))
  #define local_5c (*(float *)(albw_frame + 0x84))
  #define local_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define iStack_2c (*(int *)(albw_frame + 0xb4))
  #define local_28 (*(int *)(albw_frame + 0xb8))
  piVar3 = DAT_004306e8;
  iVar10 = *DAT_004306e8;
  local_78 = 0;
  local_74 = (float *)0x0;
  local_70 = 0;
  local_60 = DAT_004306ec;
  fVar18 = DAT_004306ec;
  iStack_2c = param_1;
  local_28 = param_2;
  func_00433ABC(&local_78,*(int **)(param_1 + 0x5c),*(int *)(param_1 + 0x70));
  local_60 = ALBW_AS_F32(piVar3[0xe]);
  if (piVar3[0xc] == 0) {
    bVar2 = false;
    if (*(int *)(iVar10 + 4) != 0) goto LAB_00430374;
    pfVar6 = (float *)0x0;
  }
  else {
    bVar2 = true;
LAB_00430374:
    pfVar6 = &local_5c;
  }
  pfVar11 = (float *)(*(int *)(local_78 + 4) + (uint)*(ushort *)((int)local_74 + 6) * 0xc);
  func_00115C70((float *)&local_e0,(float *)(piVar3 + 6),afStack_6c);
  fVar14 = ALBW_AS_F32(CONCAT22(uStack_de,local_e0));
  fVar21 = fStack_d8;
  fVar20 = local_dc;
  func_00115C70(&local_c4,(float *)(piVar3 + 9),afStack_6c);
  fVar12 = fVar14 * *pfVar11 + fVar20 * pfVar11[1] + fVar21 * pfVar11[2];
  fVar19 = local_c4 * *pfVar11 + local_c0 * pfVar11[1] + local_bc * pfVar11[2];
  fVar13 = fVar12;
  fVar15 = local_bc;
  fVar16 = local_c0;
  fVar17 = local_c4;
  if (fVar19 < fVar12) {
    fVar13 = fVar19;
    fVar15 = fVar21;
    fVar16 = fVar20;
    fVar17 = fVar14;
    fVar19 = fVar12;
    fVar21 = local_bc;
    fVar14 = local_c4;
    fVar20 = local_c0;
  }
  fVar12 = DAT_004306f0;
  if (((DAT_004306f0 < fVar13) || (fVar19 < DAT_004306f0)) ||
     ((fVar19 = fVar19 - fVar13, DAT_004306f8 <= fVar19 && (fVar19 <= DAT_004306f4)))) {
LAB_00430574:
    bVar1 = false;
  }
  else {
    fVar19 = -fVar13 / fVar19;
    local_bc = fVar21 + (fVar15 - fVar21) * fVar19;
    local_c4 = fVar14 + (fVar17 - fVar14) * fVar19;
    local_c0 = fVar20 + (fVar16 - fVar20) * fVar19;
    iVar7 = *(int *)(local_78 + 4);
    pfVar11 = (float *)(iVar7 + (uint)*(ushort *)(local_74 + 2) * 0xc);
    pfVar5 = (float *)(iVar7 + (uint)*(ushort *)((int)local_74 + 10) * 0xc);
    pfVar8 = (float *)(iVar7 + (uint)*(ushort *)(local_74 + 3) * 0xc);
    if (((DAT_004306fc < (int)ALBW_AS_U32((local_c4 * *pfVar11 + local_c0 * pfVar11[1] + local_bc * pfVar11[2])))
        || (DAT_004306fc < (int)ALBW_AS_U32((local_c4 * *pfVar5 + local_c0 * pfVar5[1] + local_bc * pfVar5[2]))))
       || (*local_74 + DAT_004306f4 <
           local_c4 * *pfVar8 + local_c0 * pfVar8[1] + local_bc * pfVar8[2])) goto LAB_00430574;
    if (pfVar6 != (float *)0x0) {
      func_00115C54(&local_dc,&local_c4,afStack_6c);
      *pfVar6 = local_dc;
      pfVar6[1] = fStack_d8;
      pfVar6[2] = local_d4;
    }
    bVar1 = true;
  }
  *(byte *)(piVar3 + 0x1b) = bVar1 | *(byte *)(piVar3 + 0x1b);
  piVar4 = DAT_00430700;
  if (!bVar1) {
    return;
  }
  if (bVar2) {
    if (*(int *)(iVar10 + 4) != 0) goto LAB_004305a4;
  }
  else {
    if (*(int *)(iVar10 + 4) == 0) goto LAB_004307bc;
LAB_004305a4:
    local_c0 = DAT_00430704;
    local_e0 = 0x1f;
    uStack_de = 0;
    local_9c = 0;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    pfVar6 = (float *)(*(int *)(local_78 + 4) + (uint)*(ushort *)((int)local_74 + 6) * 0xc);
    local_bc = *pfVar6;
    local_b8 = pfVar6[1];
    local_b4 = pfVar6[2];
    if ((~*(ushort *)(param_1 + 100) & 0x1f) == 0) {
      local_a0 = *(undefined2 *)((int)local_74 + 0xe);
    }
    else {
      local_a0 = *(undefined2 *)(param_1 + 100);
    }
    local_b0 = local_5c;
    local_ac = local_58;
    local_a8 = local_54;
    local_98 = *(undefined4 *)(param_1 + 0x68);
    piVar9 = (int *)piVar3[0xd];
    local_a4 = fVar12;
    if (piVar9 == (int *)0x0) {
      func_00115C54(&local_b0,&local_b0,(float *)(local_28 + 4));
    }
    else {
      if ((*(byte *)(piVar9 + 0x2a) & 6) != 0) {
        func_00115CE4(&local_d0,(float *)(piVar9 + 0x21),&local_bc);
        fVar14 = SQRT(local_d0 * local_d0 + local_cc * local_cc + fStack_c8 * fStack_c8);
        if (fVar12 < fVar14) {
          fVar18 = fVar18 / fVar14;
          local_bc = local_d0 * fVar18;
          local_b4 = fStack_c8 * fVar18;
          local_b8 = local_cc * fVar18;
        }
        if (fVar14 != fVar12) {
          local_a4 = local_a4 / fVar14;
        }
        func_00115CE4(&local_b0,(float *)(piVar9 + 0xf),&local_b0);
      }
      func_00115C54(&local_b0,&local_b0,(float *)(*piVar9 + 4));
    }
    iVar10 = (**(code **)**(undefined4 **)(iVar10 + 4))(*(undefined4 **)(iVar10 + 4),&local_c0);
    if (iVar10 == 0) {
      if (*(char *)(*piVar4 + 0xbf4c) == '\0') {
        return;
      }
      *(undefined1 *)((int)piVar3 + 0x6f) = 1;
      return;
    }
  }
  if (bVar2) {
    func_00115C70(&local_d4,&local_5c,(float *)(piVar3 + 9));
    local_e0 = SUB42(local_d4,0);
    uStack_de = (undefined2)((uint)ALBW_AS_U32(local_d4) >> 0x10);
    local_dc = local_d0;
    fStack_d8 = local_cc;
    iVar10 = piVar3[0xd];
    if ((iVar10 != 0) && ((*(byte *)(iVar10 + 0xa8) & 6) != 0)) {
      func_00115CE4((float *)&local_e0,(float *)(iVar10 + 0x84),(float *)&local_e0);
    }
    func_0068B200((float *)piVar3[0xc],(float *)&local_e0);
  }
LAB_004307bc:
  if (*(char *)(*piVar4 + 0xbf4c) != '\0') {
    *(undefined1 *)((int)piVar3 + 0x6f) = 1;
  }
  *(undefined1 *)((int)piVar3 + 0x6d) = 1;
  return;
}

