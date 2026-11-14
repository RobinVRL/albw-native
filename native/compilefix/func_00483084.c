/* compilefix: USA 00483084 (EU 0048305C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float func_0034C4C0(int param_1,uint param_2,int param_3,float fparam_0);
extern int func_0034C57C(int param_1,int param_2);
extern int func_00532C78(int param_1);
extern int func_00533048(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern float DAT_00483354;
extern float DAT_00483358;
extern int DAT_0048335c;
extern float DAT_00483360;
extern float DAT_00483364;
extern float DAT_0048337c;
extern uint DAT_00483380;
extern int DAT_00483384;
extern int DAT_00483388;
extern float DAT_004835dc;
extern undefined1 DAT_004835e0;
extern char s_SE_S_RUPEE_UP_0048338c[];
extern char s_SE_S_RUPEE_UP_FIN_00483368[];

// USA 00483084 <- EU 0048305C (Ghidra, non-matching)
// GLOBAL DAT_00483354 float
// GLOBAL DAT_00483358 float
// GLOBAL DAT_0048335c int
// GLOBAL DAT_00483360 float
// GLOBAL DAT_00483364 float
// GLOBAL DAT_0048337c float
// GLOBAL DAT_00483380 uint
// GLOBAL DAT_00483384 int
// GLOBAL DAT_00483388 int
// GLOBAL DAT_004835dc float
// GLOBAL DAT_004835e0 undefined1
// GLOBAL s_SE_S_RUPEE_UP_0048338c string
// GLOBAL s_SE_S_RUPEE_UP_FIN_00483368 string

undefined4 func_00483084(int param_1)

{
  int iVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  uint in_fpscr;
  uint uVar18;
  float fVar19;
  undefined4 uVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(int *)(albw_frame + 0x0))
  #define local_9c (*(char * *)(albw_frame + 0x4))
  #define local_90 (*(int *)(albw_frame + 0x10))
  #define local_8c (*(uint * *)(albw_frame + 0x14))
  #define local_84 (*(int *)(albw_frame + 0x1c))
  #define local_80 (*(uint * *)(albw_frame + 0x20))
  #define local_7c (*(int *)(albw_frame + 0x24))
  #define local_78 ((uint *)(albw_frame + 0x28))
  #define uStack_59 (*(undefined1 *)(albw_frame + 0x47))
  #define local_50 (*(int *)(albw_frame + 0x50))
  #define local_4c (*(uint * *)(albw_frame + 0x54))
  fVar28 = DAT_00483358;
  fVar22 = DAT_00483354;
  uVar7 = (uint)*(ushort *)(param_1 + 0xe8);
  fVar24 = *(float *)(param_1 + 0xe4);
  fVar19 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  uVar12 = in_fpscr & 0xfffffff;
  uVar11 = uVar12 | (uint)(fVar19 == fVar24) << 0x1e | (uint)(fVar24 <= fVar19) << 0x1d;
  bVar4 = (byte)(uVar11 >> 0x18);
  if (!(bool)(bVar4 >> 5 & 1) || (bool)(bVar4 >> 6)) {
    bVar6 = func_00532C78(param_1 + 0x98);
    if (!bVar6) {
      func_002317C0((undefined2 *)(param_1 + 0x98),fVar22);
    }
    return 1;
  }
  fVar26 = (float)VectorUnsignedToFloat(uVar7,(byte)(uVar11 >> 0x15) & 3);
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xea),(byte)(uVar11 >> 0x15) & 3);
  fVar19 = (fVar26 - fVar24) / fVar19;
  uVar11 = uVar12 | (uint)(DAT_00483358 < fVar19) << 0x1f | (uint)(DAT_00483358 == fVar19) << 0x1e;
  uVar18 = uVar11 | (uint)(NAN(DAT_00483358) || NAN(fVar19)) << 0x1c;
  bVar4 = (byte)(uVar11 >> 0x18);
  if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar18 >> 0x1c) & 1)) {
    fVar19 = DAT_00483358;
  }
  fVar26 = (float)VectorUnsignedToFloat(uVar7,(byte)(uVar18 >> 0x15) & 3);
  uVar11 = uVar12 | (uint)(fVar24 < fVar26) << 0x1f | (uint)(fVar24 == fVar26) << 0x1e |
           (uint)(fVar26 <= fVar24) << 0x1d;
  uVar18 = uVar11 | (uint)(NAN(fVar24) || NAN(fVar26)) << 0x1c;
  bVar4 = (byte)(uVar11 >> 0x18);
  if ((bool)(bVar4 >> 5 & 1)) {
    if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar18 >> 0x1c) & 1)) goto LAB_0048314c;
    fVar19 = fVar24 - fVar19;
    uVar18 = uVar12 | (uint)(fVar19 == fVar26) << 0x1e | (uint)(fVar26 <= fVar19) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    if ((bool)(bVar4 >> 5 & 1) && !(bool)(bVar4 >> 6)) {
      uVar12 = uVar12 | (uint)(fVar19 < fVar24) << 0x1f | (uint)(fVar19 == fVar24) << 0x1e;
      uVar18 = uVar12 | (uint)(NAN(fVar19) || NAN(fVar24)) << 0x1c;
      bVar4 = (byte)(uVar12 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar18 >> 0x1c) & 1)) {
        *(float *)(param_1 + 0xe4) = fVar19;
        goto LAB_0048314c;
      }
    }
  }
  else {
    fVar19 = fVar24 + fVar19;
    uVar18 = uVar12 | (uint)(fVar26 == fVar19) << 0x1e | (uint)(fVar19 <= fVar26) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    if ((bool)(bVar4 >> 5 & 1) && !(bool)(bVar4 >> 6)) {
      uVar12 = uVar12 | (uint)(fVar24 < fVar19) << 0x1f | (uint)(fVar24 == fVar19) << 0x1e;
      uVar18 = uVar12 | (uint)(NAN(fVar24) || NAN(fVar19)) << 0x1c;
      bVar4 = (byte)(uVar12 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar18 >> 0x1c) & 1)) {
        *(float *)(param_1 + 0xe4) = fVar19;
        goto LAB_0048314c;
      }
    }
  }
  *(float *)(param_1 + 0xe4) = fVar26;
LAB_0048314c:
  iVar15 = DAT_0048335c;
  sVar2 = *(short *)(param_1 + 0xea) + -1;
  *(short *)(param_1 + 0xea) = sVar2;
  if (0 < sVar2) {
    fVar24 = *(float *)(param_1 + 0xe4);
    fVar19 = (float)VectorUnsignedToFloat(uVar7,(byte)(uVar18 >> 0x15) & 3);
    fVar19 = fVar24 - fVar19;
    uVar12 = uVar18 & 0xfffffff;
    uVar18 = uVar12 | (uint)(DAT_00483364 == fVar19) << 0x1e |
             (uint)(fVar19 <= DAT_00483364) << 0x1d;
    bVar4 = (byte)(uVar18 >> 0x18);
    bVar6 = (bool)(bVar4 >> 6);
    bVar17 = (bool)(bVar4 >> 5 & 1);
    if (!bVar17 || bVar6) {
      uVar18 = uVar12 | (uint)(fVar19 == DAT_00483360) << 0x1e |
               (uint)(DAT_00483360 <= fVar19) << 0x1d;
      bVar4 = (byte)(uVar18 >> 0x18);
      bVar6 = (bool)(bVar4 >> 6);
      bVar17 = (bool)(bVar4 >> 5 & 1);
    }
    if (bVar17 && !bVar6) {
      iVar21 = (int)fVar24;
      fVar22 = (float)VectorSignedToFloat(iVar21,(byte)(uVar18 >> 0x15) & 3);
      uVar12 = uVar18 & 0xfffffff | (uint)(fVar22 == fVar24) << 0x1e;
      if ((!SUB41(uVar12 >> 0x1e,0)) &&
         (uVar12 = uVar18 & 0xfffffff | (uint)(DAT_0048337c == fVar24) << 0x1e |
                   (uint)(fVar24 <= DAT_0048337c) << 0x1d, bVar4 = (byte)(uVar12 >> 0x18),
         !(bool)(bVar4 >> 5 & 1) || (bool)(bVar4 >> 6))) {
        iVar21 = iVar21 + 1;
      }
      iVar13 = 0;
      uVar29 = (ulonglong)DAT_00483380;
      iVar14 = param_1 + 0xcc;
      uVar11 = 0;
      fVar22 = DAT_00483360;
      fVar19 = DAT_0048337c;
      do {
        iVar23 = (int)fVar24;
        iVar16 = (int)((ulonglong)((longlong)DAT_00483384 * (longlong)iVar23) >> 0x20);
        iVar10 = (int)((ulonglong)((longlong)DAT_00483384 * (longlong)iVar21) >> 0x20);
        iVar10 = (iVar10 >> 2) - (iVar10 >> 0x1f);
        iVar21 = iVar21 + iVar10 * -10;
        cVar3 = *(char *)(param_1 + 0xdc + iVar13);
        if (cVar3 == '\0') {
          if ((iVar21 == 0) && (piVar8 = (int *)(iVar14 + uVar11 * 4), 0x41000000 < *piVar8)) {
            *piVar8 = (int)uVar29;
          }
          pfVar9 = (float *)(iVar14 + uVar11 * 4);
          fVar25 = *pfVar9;
          fVar26 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x15) & 3);
          uVar7 = uVar12 & 0xfffffff;
          uVar18 = uVar7 | (uint)(fVar25 < fVar26) << 0x1f | (uint)(fVar25 == fVar26) << 0x1e |
                   (uint)(fVar26 <= fVar25) << 0x1d;
          uVar12 = uVar18 | (uint)(NAN(fVar25) || NAN(fVar26)) << 0x1c;
          bVar4 = (byte)(uVar18 >> 0x18);
          if ((bool)(bVar4 >> 5 & 1)) {
            if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar12 >> 0x1c) & 1)) {
              fVar27 = fVar25 - fVar28;
              uVar12 = uVar7 | (uint)(fVar27 == fVar26) << 0x1e | (uint)(fVar26 <= fVar27) << 0x1d;
              bVar4 = (byte)(uVar12 >> 0x18);
              if ((!(bool)(bVar4 >> 5 & 1) || (bool)(bVar4 >> 6)) ||
                 (uVar7 = uVar7 | (uint)(fVar27 < fVar25) << 0x1f | (uint)(fVar27 == fVar25) << 0x1e
                 , uVar12 = uVar7 | (uint)(NAN(fVar27) || NAN(fVar25)) << 0x1c,
                 bVar4 = (byte)(uVar7 >> 0x18),
                 !(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar12 >> 0x1c) & 1)))
              goto LAB_0048341c;
              goto LAB_00483424;
            }
          }
          else {
            fVar27 = fVar25 + fVar28;
            uVar12 = uVar7 | (uint)(fVar26 == fVar27) << 0x1e | (uint)(fVar27 <= fVar26) << 0x1d;
            bVar4 = (byte)(uVar12 >> 0x18);
            if ((!(bool)(bVar4 >> 5 & 1) || (bool)(bVar4 >> 6)) ||
               (uVar7 = uVar7 | (uint)(fVar25 < fVar27) << 0x1f | (uint)(fVar25 == fVar27) << 0x1e,
               uVar12 = uVar7 | (uint)(NAN(fVar25) || NAN(fVar27)) << 0x1c,
               bVar4 = (byte)(uVar7 >> 0x18),
               !(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar12 >> 0x1c) & 1))) {
LAB_0048341c:
              *pfVar9 = fVar26;
            }
            else {
LAB_00483424:
              *pfVar9 = fVar27;
            }
          }
          pfVar9 = (float *)(iVar14 + uVar11 * 4);
          fVar26 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x15) & 3);
          fVar26 = *pfVar9 - fVar26;
          if (((uint)ALBW_AS_U32(fVar26) <= (uint)ALBW_AS_U32(DAT_004835dc)) &&
             ((int)ALBW_AS_U32(fVar26) <= (int)((int)ALBW_AS_U32(DAT_004835dc) + 0x80000000U))) {
            fVar26 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x15) & 3);
            *pfVar9 = fVar26;
          }
        }
        else {
          if (cVar3 == '\x01') {
            fVar25 = (float)VectorSignedToFloat(iVar23,(byte)(uVar12 >> 0x15) & 3);
            iVar1 = uVar11 << 2;
            fVar26 = (float)VectorSignedToFloat(iVar23 + ((iVar16 >> 2) - (iVar16 >> 0x1f)) * -10,
                                                (byte)(uVar12 >> 0x15) & 3);
            fVar26 = fVar26 + (fVar24 - fVar25);
          }
          else {
            iVar1 = uVar11 * 4;
            fVar26 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x15) & 3);
          }
          *(float *)(iVar14 + iVar1) = fVar26;
        }
        fVar26 = *(float *)(iVar14 + uVar11 * 4);
        iVar21 = (int)fVar26;
        fVar25 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x15) & 3);
        uVar7 = uVar12 & 0xfffffff;
        uVar12 = uVar7 | (uint)(fVar25 == fVar26) << 0x1e | (uint)(fVar26 <= fVar25) << 0x1d;
        bVar4 = (byte)(uVar12 >> 0x18);
        bVar6 = (bool)(bVar4 >> 6);
        if (!bVar6) {
          uVar12 = uVar7 | (uint)(fVar19 == fVar26) << 0x1e | (uint)(fVar26 <= fVar19) << 0x1d;
          bVar4 = (byte)(uVar12 >> 0x18);
          bVar6 = (bool)(bVar4 >> 6);
        }
        if ((bool)(bVar4 >> 5 & 1) && !bVar6) {
          iVar21 = iVar21 + -1;
        }
        fVar25 = (float)VectorSignedToFloat(iVar21,(byte)(uVar12 >> 0x15) & 3);
        func_0034C4C0(*(int *)(param_1 + 200),uVar11,iVar21,fVar26 - fVar25);
        fVar24 = fVar24 * fVar22;
        uVar11 = uVar11 + 1;
        iVar13 = iVar13 + 1;
        iVar21 = iVar10;
      } while (uVar11 != 4);
      local_7c = 0x20;
      uStack_59 = 0;
      (*(undefined1 *)((char *)&local_78[0] + 0)) = 0;
      local_50 = iVar15;
      local_84 = DAT_00483388;
      local_4c = (uint *)s_SE_S_RUPEE_UP_0048338c;
      local_80 = local_78;
      (**(code **)(iVar15 + 8))(&local_50);
      uVar12 = 0;
      do {
        if (*(char *)((int)local_4c + uVar12) == '\0') {
          if ((int)uVar12 < 0x40001) goto LAB_00483494;
          break;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < 0x40001);
      uVar12 = 0;
LAB_00483494:
      if (local_7c <= (int)uVar12) {
        uVar12 = local_7c - 1;
      }
      (**(code **)(local_50 + 8))(&local_50);
      func_0010E3C4(local_78,local_4c,uVar12);
      puVar5 = local_80;
      *(undefined1 *)((int)local_78 + uVar12) = 0;
      if (*(char *)(param_1 + 0xdc) != '\0') {
        local_8c = (uint *)&DAT_004835e0;
        local_90 = iVar15;
        (**(code **)(local_84 + 8))();
        iVar15 = 0;
        do {
          if (*(char *)((int)local_80 + iVar15) == '\0') {
            if (iVar15 < 0x40001) goto LAB_00483524;
            break;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < 0x40001);
        iVar15 = 0;
LAB_00483524:
        iVar21 = iVar15;
        if (iVar15 < 0) {
          iVar21 = 0;
        }
        (**(code **)(local_90 + 8))(&local_90);
        uVar12 = 0;
        do {
          if (*(char *)((int)local_8c + uVar12) == '\0') {
            if ((int)uVar12 < 0x40001) goto LAB_00483574;
            break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < 0x40001);
        uVar12 = 0;
LAB_00483574:
        if (local_7c - iVar21 <= (int)uVar12) {
          uVar12 = (local_7c - iVar21) - 1;
        }
        if (0 < (int)uVar12) {
          (**(code **)(local_90 + 8))(&local_90);
          func_0010E3C4((uint *)((int)puVar5 + iVar21),local_8c,uVar12);
          if (iVar15 < (int)(iVar21 + uVar12)) {
            *(undefined1 *)((int)puVar5 + iVar21 + uVar12) = 0;
          }
        }
      }
      func_00533048(param_1,&local_84,0);
      return 0;
    }
  }
  func_0034C57C(*(int *)(param_1 + 200),uVar7);
  uVar20 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(ushort *)(param_1 + 0xe8),(byte)(uVar18 >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0xe4) = uVar20;
  func_002317C0((undefined2 *)(param_1 + 0x98),fVar22);
  local_9c = s_SE_S_RUPEE_UP_FIN_00483368;
  local_a0 = iVar15;
  func_00533078(param_1,&local_a0,0);
  return 1;
}

