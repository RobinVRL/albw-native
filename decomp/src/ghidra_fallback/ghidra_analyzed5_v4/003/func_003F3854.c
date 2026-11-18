#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00112D70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_001139F8(int param_1);
extern int func_003CBB00(undefined1 *param_1);
extern int func_003F3668(int param_1,int param_2,int param_3);
extern int func_00561EB4(char *param_1,int *param_2,int param_3);
extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern int func_00600660(int param_1);
extern undefined DAT_00000012;
extern undefined4 DAT_003f3c1c;
extern undefined4 DAT_003f3c20;
extern undefined4 DAT_003f3c24;
extern undefined4 DAT_003f3c28;
extern int DAT_003f3c2c;
extern int DAT_003f3c30;
extern int DAT_003f3c34;
extern undefined4 DAT_003f3c38;
extern int DAT_003f41a0;
extern uint DAT_003f41a4;

// USA 003F3854 <- EU 003F3834 (Ghidra, non-matching)
// GLOBAL DAT_00000012 undefined
// GLOBAL DAT_003f3c1c undefined4
// GLOBAL DAT_003f3c20 undefined4
// GLOBAL DAT_003f3c24 undefined4
// GLOBAL DAT_003f3c28 undefined4
// GLOBAL DAT_003f3c2c int
// GLOBAL DAT_003f3c30 int
// GLOBAL DAT_003f3c34 int
// GLOBAL DAT_003f3c38 undefined4
// GLOBAL DAT_003f41a0 int
// GLOBAL DAT_003f41a4 uint

undefined8 func_003F3854(int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  char cVar15;
  uint uVar16;
  uint extraout_r1;
  uint extraout_r1_00;
  uint *puVar17;
  undefined4 *puVar18;
  int iVar19;
  code *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  int iVar25;
  char *pcVar26;
  char *pcVar27;
  bool bVar28;
  uint in_fpscr;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  _Alignas(8) unsigned char albw_frame[0x900];
  #define local_8f8 (*(uint *)(albw_frame + 0x8))
  #define local_8f4 (*(uint *)(albw_frame + 0xc))
  #define local_8f0 (*(int *)(albw_frame + 0x10))
  #define local_8ec (*(uint *)(albw_frame + 0x14))
  #define local_8e8 (*(undefined4 *)(albw_frame + 0x18))
  #define iStack_8e4 (*(int *)(albw_frame + 0x1c))
  #define local_8e0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_8dc (*(uint *)(albw_frame + 0x24))
  #define uStack_8d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_8d4 (*(uint *)(albw_frame + 0x2c))
  #define uStack_8d0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8cc (*(uint *)(albw_frame + 0x34))
  #define uStack_8c8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_8c4 ((int *)(albw_frame + 0x3c))
  #define local_8b8 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_8b4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_c4 (*(int * *)(albw_frame + 0x83c))
  #define local_c0 ((char *)(albw_frame + 0x840))
  #define iStack_44 (*(int *)(albw_frame + 0x8bc))
  #define local_40 (*(undefined1 *)(albw_frame + 0x8c0))
  #define local_3f (*(undefined1 *)(albw_frame + 0x8c1))
  #define local_3e (*(undefined1 *)(albw_frame + 0x8c2))
  #define local_3d (*(undefined1 *)(albw_frame + 0x8c3))
  #define local_3c (*(undefined4 *)(albw_frame + 0x8c4))
  #define piStack_34 (*(int * *)(albw_frame + 0x8cc))
  #define piStack_30 (*(int * *)(albw_frame + 0x8d0))
  #define local_2c (*(int *)(albw_frame + 0x8d4))
  #define iStack_28 (*(int *)(albw_frame + 0x8d8))
  puVar17 = &local_8f8;
  uVar16 = (uint)*(byte *)(param_1 + 1);
  if (uVar16 == 0) {
    *param_1 = (int)param_2;
    piStack_34 = param_1;
    piStack_30 = param_2;
    local_2c = param_3;
    iStack_28 = param_4;
    uVar31 = (**(code **)(*param_2 + 8))(param_2,0x2b0,0x80);
    uVar16 = (uint)((ulonglong)uVar31 >> 0x20);
    param_1[2] = (int)uVar31;
    uVar6 = DAT_003f3c28;
    uVar5 = DAT_003f3c24;
    uVar4 = DAT_003f3c20;
    uVar3 = DAT_003f3c1c;
    uVar7 = 0;
    if ((int)uVar31 != 0) {
      iVar9 = 0;
      do {
        iVar11 = iVar9 * 10;
        iVar25 = iVar9 + 1;
        uVar7 = ALBW_AS_U32(VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3));
        uVar29 = ALBW_AS_U32(VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3));
        iVar19 = DAT_003f3c2c + iVar9 * 6;
        uVar30 = ALBW_AS_U32(VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3));
        puVar18 = (undefined4 *)(param_1[2] + iVar9 * 0x30);
        *puVar18 = uVar3;
        puVar18[1] = uVar4;
        puVar18[2] = uVar7;
        uVar7 = ALBW_AS_U32(VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3));
        puVar18 = (undefined4 *)(iVar9 * 0x30 + 0xc + param_1[2]);
        *puVar18 = uVar4;
        puVar18[1] = uVar4;
        puVar18[2] = uVar30;
        puVar18 = (undefined4 *)(param_1[2] + iVar9 * 0x30 + 0x18);
        *puVar18 = uVar3;
        puVar18[1] = uVar3;
        puVar18[2] = uVar7;
        puVar18 = (undefined4 *)(param_1[2] + iVar9 * 0x30 + 0x24);
        puVar18[2] = uVar29;
        *puVar18 = uVar4;
        puVar18[1] = uVar3;
        puVar18 = (undefined4 *)(param_1[2] + iVar9 * 0x20 + 0x180);
        *puVar18 = uVar5;
        puVar18[1] = uVar5;
        puVar18 = (undefined4 *)(param_1[2] + iVar9 * 0x20 + 0x188);
        *puVar18 = uVar6;
        puVar18[1] = uVar5;
        puVar18 = (undefined4 *)(param_1[2] + iVar9 * 0x20 + 400);
        *puVar18 = uVar5;
        puVar18[1] = uVar6;
        puVar18 = (undefined4 *)(param_1[2] + iVar9 * 0x20 + 0x198);
        *puVar18 = uVar6;
        puVar18[1] = uVar6;
        *(char *)(param_1[2] + iVar9 * 6 + 0x280) = (char)(iVar9 << 2);
        cVar2 = (char)iVar9;
        cVar15 = cVar2 * '\x04' + '\x02';
        *(char *)(param_1[2] + iVar9 * 6 + 0x281) = cVar15;
        cVar1 = cVar2 * '\x04' + '\x01';
        *(char *)(param_1[2] + iVar19) = cVar1;
        *(char *)(param_1[2] + DAT_003f3c30 + iVar9 * 6) = cVar1;
        *(char *)(param_1[2] + iVar9 * 6 + 0x284) = cVar15;
        *(char *)(param_1[2] + iVar9 * 6 + 0x285) = cVar2 * '\x04' + '\x03';
        iVar9 = iVar25;
      } while (iVar25 < 8);
      pcVar8 = (char *)(**(code **)(*(int *)*param_1 + 8))((int *)*param_1,0x24,0x80);
      param_1[0x254] = (int)pcVar8;
      if (pcVar8 == (char *)0x0) {
        uVar16 = 0;
        if (param_1[2] != 0) {
          (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1);
          param_1[2] = 0;
          uVar16 = extraout_r1_00;
        }
        uVar7 = 0;
      }
      else {
        cVar15 = '\0';
        local_8f8 = 6;
        pcVar21 = pcVar8 + 2;
        pcVar22 = pcVar8 + 0x12;
        pcVar23 = pcVar8 + 0x13;
        pcVar26 = pcVar8 + 0x14;
        pcVar27 = pcVar8 + 1;
        do {
          cVar1 = cVar15 * '\x03';
          local_8f8 = local_8f8 - 1;
          *pcVar8 = cVar15 * '\f';
          *pcVar27 = cVar15 * '\f' + '\x04';
          *pcVar21 = cVar15 * '\f' + '\b';
          *pcVar22 = cVar1;
          *pcVar23 = cVar1 + '\x01';
          cVar15 = cVar15 + '\x01';
          *pcVar26 = cVar1 + '\x02';
          pcVar8 = pcVar8 + 3;
          pcVar21 = pcVar21 + 3;
          pcVar22 = pcVar22 + 3;
          pcVar23 = pcVar23 + 3;
          pcVar26 = pcVar26 + 3;
          pcVar27 = pcVar27 + 3;
        } while (local_8f8 != 0);
        iVar9 = func_003F3668((int)param_1,local_2c,iStack_28);
        uVar7 = 0;
        uVar16 = extraout_r1;
        if (iVar9 != 0) {
          local_40 = 0;
          local_3f = 1;
          local_3d = 0xff;
          local_3c = 0;
          local_3e = 0;
          func_00112D70(param_1 + 0x6d,(int)&local_40,0x100,0xb);
          local_3e = 1;
          func_00112D70(param_1 + 0x6d,(int)&local_40,0x100,7);
          local_c4 = param_1 + 0x262;
          local_3e = 0;
          func_00112D70(local_c4,(int)&local_40,0x100,1);
          iVar9 = func_00600660(0x20000);
          uVar16 = func_001139F8(iVar9);
          local_8f0 = func_001139F8(param_1[3] + 0x280);
          iVar9 = DAT_003f3c34;
          param_1[0x251] = local_8f0;
          uVar24 = iVar9 + 0x1d;
          *(undefined1 *)(param_1 + 0x253) = 1;
          param_1[0x252] = 0x30;
          uVar7 = DAT_003f3c38;
          local_8f4 = uVar24 | (int)uVar24 >> 0xf;
          local_8f8 = 1;
          local_8e0 = 0;
          uStack_8d8 = 1;
          local_8d4 = local_8f4 - 0x30;
          uStack_8d0 = 1;
          local_8f0 = local_8f0 + (uVar16 >> 3) * -8;
          local_8c4[1] = 0;
          local_8c4[2] = DAT_003f3c38;
          local_8ec = iVar9 + -1;
          pcVar20 = (code *)&local_8f0;
          local_8c4[0] = iVar9 + 9;
          local_8e8 = 0x30;
          iStack_8e4 = iVar9;
          local_8b8 = 0;
          uStack_8b4 = DAT_003f3c38;
          uStack_8c8 = 1;
          if (param_1[9] != *param_1) {
            param_1[9] = *param_1;
          }
          piVar10 = (int *)param_1[8];
          bVar28 = piVar10 != (int *)&DAT_00000012;
          if (bVar28) {
            piVar10 = (int *)param_1[9];
          }
          uStack_8dc = uVar24;
          local_8cc = uVar24;
          if (bVar28 && piVar10 != (int *)0x0) {
            if (param_1[7] != 0) {
              (**(code **)(*piVar10 + 0xc))(piVar10);
              param_1[7] = 0;
            }
            pcVar20 = *(code **)(*(int *)param_1[9] + 8);
            iVar11 = (*pcVar20)((int *)param_1[9],0x48,0x80);
            param_1[7] = iVar11;
            param_1[8] = 0x12;
          }
          iVar11 = param_1[8];
          if (iVar11 != 0) {
            pcVar20 = (code *)param_1[7];
          }
          if (iVar11 != 0 && pcVar20 != (code *)0x0) {
            func_0010E3C4((uint *)pcVar20,&local_8f8,iVar11 << 2);
          }
          if (param_1[0xc] != *param_1) {
            param_1[0xc] = *param_1;
          }
          puVar12 = (uint *)param_1[0xb];
          bVar28 = puVar12 != (uint *)&DAT_00000012;
          if (bVar28) {
            puVar12 = (uint *)param_1[0xc];
          }
          if (bVar28 && puVar12 != (uint *)0x0) {
            if (param_1[10] != 0) {
              (**(code **)(*puVar12 + 0xc))(puVar12);
              param_1[10] = 0;
            }
            puVar12 = (uint *)(**(code **)(*(int *)param_1[0xc] + 8))((int *)param_1[0xc],0x48,0x80)
            ;
            param_1[10] = (int)puVar12;
            param_1[0xb] = 0x12;
          }
          iVar11 = param_1[0xb];
          if (iVar11 != 0) {
            puVar12 = (uint *)param_1[10];
          }
          if (iVar11 != 0 && puVar12 != (uint *)0x0) {
            func_0010E3C4(puVar12,&local_8f8,iVar11 << 2);
          }
          iVar11 = func_00600660(0x20000);
          uVar16 = func_001139F8(iVar11);
          local_8f0 = func_001139F8(param_1[0x255] + 0x12);
          param_1[0x260] = 0x12;
          param_1[0x25f] = local_8f0;
          local_8f4 = DAT_003f41a0;
          local_8f0 = local_8f0 + (uVar16 >> 3) * -8;
          *(undefined1 *)(param_1 + 0x261) = 1;
          local_8ec = local_8f4 - 0x38;
          local_8f8 = 1;
          local_8e8 = 0x12;
          iStack_8e4 = iVar9;
          local_8d4 = local_8ec | 9;
          local_8e0 = 0;
          uStack_8d8 = 1;
          local_8c4[0] = local_8d4 + 2;
          uStack_8d0 = 1;
          pcVar20 = (code *)local_8c4;
          local_8c4[1] = 0;
          local_8c4[2] = uVar7;
          local_8b8 = 0;
          uStack_8b4 = uVar7;
          uStack_8c8 = 1;
          if (param_1[0x25b] != *param_1) {
            param_1[0x25b] = *param_1;
          }
          puVar12 = (uint *)param_1[0x25a];
          bVar28 = puVar12 != (uint *)&DAT_00000012;
          if (bVar28) {
            puVar12 = (uint *)param_1[0x25b];
          }
          uStack_8dc = uVar24;
          local_8cc = uVar24;
          if (bVar28 && puVar12 != (uint *)0x0) {
            if (param_1[0x259] != 0) {
              (**(code **)(*puVar12 + 0xc))(puVar12);
              param_1[0x259] = 0;
            }
            pcVar20 = *(code **)(*(int *)param_1[0x25b] + 8);
            puVar12 = (uint *)(*pcVar20)((int *)param_1[0x25b],0x48,0x80);
            param_1[0x259] = (int)puVar12;
            param_1[0x25a] = 0x12;
          }
          iVar9 = param_1[0x25a];
          if (iVar9 != 0) {
            puVar12 = (uint *)param_1[0x259];
          }
          if (iVar9 != 0 && puVar12 != (uint *)0x0) {
            func_0010E3C4(puVar12,&local_8f8,iVar9 << 2);
          }
          if (param_1[0x25e] != *param_1) {
            param_1[0x25e] = *param_1;
          }
          piVar10 = (int *)param_1[0x25d];
          bVar28 = piVar10 != (int *)&DAT_00000012;
          if (bVar28) {
            piVar10 = (int *)param_1[0x25e];
          }
          if (bVar28 && piVar10 != (int *)0x0) {
            if (param_1[0x25c] != 0) {
              (**(code **)(*piVar10 + 0xc))(piVar10);
              param_1[0x25c] = 0;
            }
            pcVar20 = *(code **)(*(int *)param_1[0x25e] + 8);
            iVar9 = (*pcVar20)((int *)param_1[0x25e],0x48,0x80);
            param_1[0x25c] = iVar9;
            param_1[0x25d] = 0x12;
          }
          iVar9 = param_1[0x25d];
          if (iVar9 != 0) {
            pcVar20 = (code *)param_1[0x25c];
          }
          if (iVar9 != 0 && pcVar20 != (code *)0x0) {
            func_0010E3C4((uint *)pcVar20,&local_8f8,iVar9 << 2);
          }
          func_003CBB00(local_c0);
          local_c0[0] = '\0';
          puVar18 = (undefined4 *)func_00561EB4(local_c0,(int *)&local_8f8,1);
          puVar12 = func_00562280(&iStack_44,puVar18,1);
          uVar16 = DAT_003f41a4;
          uVar24 = 0;
          do {
            if (param_1[uVar24 * 0x1c + 0xc5] == 0) {
              puVar14 = puVar12 + 1;
              *puVar12 = 0;
              *puVar14 = uVar24 * 3 + 0x205 | 0xf0000;
            }
            else {
              *puVar12 = 0;
              puVar12[1] = uVar24 * 3 + 0x203 | 0x802f0000;
              puVar14 = puVar12 + 3;
              puVar12[2] = 0;
              *puVar14 = 0;
            }
            puVar12 = puVar14 + 1;
            pcVar20 = (code *)(uint)*(byte *)(param_1 + uVar24 * 5 + 0x215);
            if (pcVar20 != (code *)0x0) {
              *puVar12 = uVar24;
              puVar14[2] = uVar16;
              puVar14[3] = 0;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar12 = puVar14 + 7;
              puVar14[6] = 0;
            }
            uVar24 = uVar24 + 1;
          } while ((int)uVar24 < 0xc);
          piVar10 = (int *)((int)puVar12 - (int)&local_8f8 >> 2);
          if (param_1[6] != *param_1) {
            param_1[6] = *param_1;
          }
          piVar13 = (int *)param_1[5];
          bVar28 = piVar13 != piVar10;
          if (bVar28) {
            piVar13 = (int *)param_1[6];
          }
          if (bVar28 && piVar13 != (int *)0x0) {
            if (param_1[4] != 0) {
              (**(code **)(*piVar13 + 0xc))(piVar13);
              param_1[4] = 0;
            }
            if (piVar10 != (int *)0x0) {
              pcVar20 = *(code **)(*(int *)param_1[6] + 8);
              iVar9 = (*pcVar20)((int *)param_1[6],(int)piVar10 << 2,0x80);
              param_1[4] = iVar9;
            }
            param_1[5] = (int)piVar10;
          }
          iVar9 = param_1[5];
          if (iVar9 != 0) {
            pcVar20 = (code *)param_1[4];
          }
          if (iVar9 != 0 && pcVar20 != (code *)0x0) {
            func_0010E3C4((uint *)pcVar20,&local_8f8,iVar9 << 2);
          }
          func_003CBB00(local_c0);
          local_c0[0] = '\0';
          puVar18 = (undefined4 *)func_00561EB4(local_c0,(int *)&local_8f8,1);
          puVar12 = func_00562280(&iStack_44,puVar18,1);
          uVar24 = 0;
          do {
            if (local_c4[uVar24 * 0x1c + 0x58] == 0) {
              puVar14 = puVar12 + 1;
              *puVar12 = 0;
              *puVar14 = uVar24 * 3 + 0x205 | 0xf0000;
            }
            else {
              *puVar12 = 0;
              puVar12[1] = uVar24 * 3 + 0x203 | 0x802f0000;
              puVar14 = puVar12 + 3;
              puVar12[2] = 0;
              *puVar14 = 0;
            }
            puVar12 = puVar14 + 1;
            pcVar20 = (code *)(uint)*(byte *)(local_c4 + uVar24 * 5 + 0x1a8);
            if (pcVar20 != (code *)0x0) {
              *puVar12 = uVar24;
              puVar14[2] = uVar16;
              puVar14[3] = 0;
              puVar14[4] = 0;
              puVar14[5] = 0;
              puVar12 = puVar14 + 7;
              puVar14[6] = 0;
            }
            uVar24 = uVar24 + 1;
          } while ((int)uVar24 < 0xc);
          piVar10 = (int *)((int)puVar12 - (int)&local_8f8 >> 2);
          if (param_1[600] != *param_1) {
            param_1[600] = *param_1;
          }
          piVar13 = (int *)param_1[599];
          bVar28 = piVar13 != piVar10;
          if (bVar28) {
            piVar13 = (int *)param_1[600];
          }
          if (bVar28 && piVar13 != (int *)0x0) {
            if (param_1[0x256] != 0) {
              (**(code **)(*piVar13 + 0xc))(piVar13);
              param_1[0x256] = 0;
            }
            if (piVar10 != (int *)0x0) {
              pcVar20 = *(code **)(*(int *)param_1[600] + 8);
              iVar9 = (*pcVar20)((int *)param_1[600],(int)piVar10 << 2,0x80);
              param_1[0x256] = iVar9;
            }
            param_1[599] = (int)piVar10;
          }
          iVar9 = param_1[599];
          if (iVar9 != 0) {
            pcVar20 = (code *)param_1[0x256];
          }
          if (iVar9 != 0 && pcVar20 != (code *)0x0) {
            uVar31 = func_0010E3C4((uint *)pcVar20,&local_8f8,iVar9 << 2);
            puVar17 = (uint *)((ulonglong)uVar31 >> 0x20);
          }
          *(undefined1 *)(param_1 + 1) = 1;
          return CONCAT44(puVar17,1);
        }
      }
    }
  }
  else {
    uVar7 = 1;
  }
  return CONCAT44(uVar16,uVar7);
}

