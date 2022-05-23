id: WyświetlanieDanych
language: CSharp
name:
  Default: WyświetlanieDanych
qualifiedName:
  Default: WyświetlanieDanych
type: Assembly
modifiers: {}
items:
- id: WyświetlanieDanych
  commentId: N:WyświetlanieDanych
  language: CSharp
  name:
    CSharp: WyświetlanieDanych
    VB: WyświetlanieDanych
  nameWithType:
    CSharp: WyświetlanieDanych
    VB: WyświetlanieDanych
  qualifiedName:
    CSharp: WyświetlanieDanych
    VB: WyświetlanieDanych
  type: Namespace
  assemblies:
  - WyświetlanieDanych
  modifiers: {}
  items:
  - id: WyświetlanieDanych.Form1
    commentId: T:WyświetlanieDanych.Form1
    language: CSharp
    name:
      CSharp: Form1
      VB: Form1
    nameWithType:
      CSharp: Form1
      VB: Form1
    qualifiedName:
      CSharp: WyświetlanieDanych.Form1
      VB: WyświetlanieDanych.Form1
    type: Class
    assemblies:
    - WyświetlanieDanych
    namespace: WyświetlanieDanych
    source:
      remote:
        path: Forms/WyświetlanieDanych/Forms/Form1.Designer.cs
        branch: pawel_final
        repo: https://github.com/mateuszigbt/komponenty
      id: Form1
      path: Forms/Form1.Designer.cs
      startLine: 2
    summary: "\nKlasa Form1 jest serializowana. W tym okienku można wybierać customowe nazwy oraz kolory.\n"
    example: []
    syntax:
      content:
        CSharp: >-
          [Serializable]

          public class Form1 : Form, IDropTarget, ISynchronizeInvoke, IWin32Window, IBindableComponent, IComponent, IDisposable, IContainerControl, ISerializable
        VB: >-
          <Serializable>

          Public Class Form1

              Inherits Form

              Implements IDropTarget, ISynchronizeInvoke, IWin32Window, IBindableComponent, IComponent, IDisposable, IContainerControl, ISerializable
    inheritance:
    - System.Object
    - System.MarshalByRefObject
    - System.ComponentModel.Component
    - System.Windows.Forms.Control
    - System.Windows.Forms.ScrollableControl
    - System.Windows.Forms.ContainerControl
    - System.Windows.Forms.Form
    implements:
    - System.Windows.Forms.IDropTarget
    - System.ComponentModel.ISynchronizeInvoke
    - System.Windows.Forms.IWin32Window
    - System.Windows.Forms.IBindableComponent
    - System.ComponentModel.IComponent
    - System.IDisposable
    - System.Windows.Forms.IContainerControl
    - System.Runtime.Serialization.ISerializable
    inheritedMembers:
    - System.Windows.Forms.Form.SetVisibleCore(System.Boolean)
    - System.Windows.Forms.Form.Activate
    - System.Windows.Forms.Form.ActivateMdiChild(System.Windows.Forms.Form)
    - System.Windows.Forms.Form.AddOwnedForm(System.Windows.Forms.Form)
    - System.Windows.Forms.Form.AdjustFormScrollbars(System.Boolean)
    - System.Windows.Forms.Form.Close
    - System.Windows.Forms.Form.CreateControlsInstance
    - System.Windows.Forms.Form.CreateHandle
    - System.Windows.Forms.Form.DefWndProc(System.Windows.Forms.Message@)
    - System.Windows.Forms.Form.ProcessMnemonic(System.Char)
    - System.Windows.Forms.Form.CenterToParent
    - System.Windows.Forms.Form.CenterToScreen
    - System.Windows.Forms.Form.LayoutMdi(System.Windows.Forms.MdiLayout)
    - System.Windows.Forms.Form.OnActivated(System.EventArgs)
    - System.Windows.Forms.Form.OnBackgroundImageChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnBackgroundImageLayoutChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnClosing(System.ComponentModel.CancelEventArgs)
    - System.Windows.Forms.Form.OnClosed(System.EventArgs)
    - System.Windows.Forms.Form.OnFormClosing(System.Windows.Forms.FormClosingEventArgs)
    - System.Windows.Forms.Form.OnFormClosed(System.Windows.Forms.FormClosedEventArgs)
    - System.Windows.Forms.Form.OnCreateControl
    - System.Windows.Forms.Form.OnDeactivate(System.EventArgs)
    - System.Windows.Forms.Form.OnEnabledChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnEnter(System.EventArgs)
    - System.Windows.Forms.Form.OnFontChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnHandleCreated(System.EventArgs)
    - System.Windows.Forms.Form.OnHandleDestroyed(System.EventArgs)
    - System.Windows.Forms.Form.OnHelpButtonClicked(System.ComponentModel.CancelEventArgs)
    - System.Windows.Forms.Form.OnLayout(System.Windows.Forms.LayoutEventArgs)
    - System.Windows.Forms.Form.OnLoad(System.EventArgs)
    - System.Windows.Forms.Form.OnMaximizedBoundsChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnMaximumSizeChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnMinimumSizeChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnInputLanguageChanged(System.Windows.Forms.InputLanguageChangedEventArgs)
    - System.Windows.Forms.Form.OnInputLanguageChanging(System.Windows.Forms.InputLanguageChangingEventArgs)
    - System.Windows.Forms.Form.OnVisibleChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnMdiChildActivate(System.EventArgs)
    - System.Windows.Forms.Form.OnMenuStart(System.EventArgs)
    - System.Windows.Forms.Form.OnMenuComplete(System.EventArgs)
    - System.Windows.Forms.Form.OnPaint(System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Form.OnResize(System.EventArgs)
    - System.Windows.Forms.Form.OnDpiChanged(System.Windows.Forms.DpiChangedEventArgs)
    - System.Windows.Forms.Form.OnGetDpiScaledSize(System.Int32,System.Int32,System.Drawing.Size@)
    - System.Windows.Forms.Form.OnRightToLeftLayoutChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnShown(System.EventArgs)
    - System.Windows.Forms.Form.OnTextChanged(System.EventArgs)
    - System.Windows.Forms.Form.ProcessCmdKey(System.Windows.Forms.Message@,System.Windows.Forms.Keys)
    - System.Windows.Forms.Form.ProcessDialogKey(System.Windows.Forms.Keys)
    - System.Windows.Forms.Form.ProcessDialogChar(System.Char)
    - System.Windows.Forms.Form.ProcessKeyPreview(System.Windows.Forms.Message@)
    - System.Windows.Forms.Form.ProcessTabKey(System.Boolean)
    - System.Windows.Forms.Form.RemoveOwnedForm(System.Windows.Forms.Form)
    - System.Windows.Forms.Form.Select(System.Boolean,System.Boolean)
    - System.Windows.Forms.Form.GetScaledBounds(System.Drawing.Rectangle,System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
    - System.Windows.Forms.Form.ScaleControl(System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
    - System.Windows.Forms.Form.SetBoundsCore(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
    - System.Windows.Forms.Form.SetClientSizeCore(System.Int32,System.Int32)
    - System.Windows.Forms.Form.SetDesktopBounds(System.Int32,System.Int32,System.Int32,System.Int32)
    - System.Windows.Forms.Form.SetDesktopLocation(System.Int32,System.Int32)
    - System.Windows.Forms.Form.Show(System.Windows.Forms.IWin32Window)
    - System.Windows.Forms.Form.ShowDialog
    - System.Windows.Forms.Form.ShowDialog(System.Windows.Forms.IWin32Window)
    - System.Windows.Forms.Form.ToString
    - System.Windows.Forms.Form.UpdateDefaultButton
    - System.Windows.Forms.Form.OnResizeBegin(System.EventArgs)
    - System.Windows.Forms.Form.OnResizeEnd(System.EventArgs)
    - System.Windows.Forms.Form.OnStyleChanged(System.EventArgs)
    - System.Windows.Forms.Form.ValidateChildren
    - System.Windows.Forms.Form.ValidateChildren(System.Windows.Forms.ValidationConstraints)
    - System.Windows.Forms.Form.WndProc(System.Windows.Forms.Message@)
    - System.Windows.Forms.Form.AcceptButton
    - System.Windows.Forms.Form.ActiveForm
    - System.Windows.Forms.Form.ActiveMdiChild
    - System.Windows.Forms.Form.AllowTransparency
    - System.Windows.Forms.Form.AutoScroll
    - System.Windows.Forms.Form.AutoSize
    - System.Windows.Forms.Form.AutoSizeMode
    - System.Windows.Forms.Form.AutoValidate
    - System.Windows.Forms.Form.BackColor
    - System.Windows.Forms.Form.FormBorderStyle
    - System.Windows.Forms.Form.CancelButton
    - System.Windows.Forms.Form.ClientSize
    - System.Windows.Forms.Form.ControlBox
    - System.Windows.Forms.Form.CreateParams
    - System.Windows.Forms.Form.DefaultImeMode
    - System.Windows.Forms.Form.DefaultSize
    - System.Windows.Forms.Form.DesktopBounds
    - System.Windows.Forms.Form.DesktopLocation
    - System.Windows.Forms.Form.DialogResult
    - System.Windows.Forms.Form.HelpButton
    - System.Windows.Forms.Form.Icon
    - System.Windows.Forms.Form.IsMdiChild
    - System.Windows.Forms.Form.IsMdiContainer
    - System.Windows.Forms.Form.IsRestrictedWindow
    - System.Windows.Forms.Form.KeyPreview
    - System.Windows.Forms.Form.Location
    - System.Windows.Forms.Form.MaximizedBounds
    - System.Windows.Forms.Form.MaximumSize
    - System.Windows.Forms.Form.MainMenuStrip
    - System.Windows.Forms.Form.Menu
    - System.Windows.Forms.Form.MinimumSize
    - System.Windows.Forms.Form.MaximizeBox
    - System.Windows.Forms.Form.MdiChildren
    - System.Windows.Forms.Form.MdiParent
    - System.Windows.Forms.Form.MergedMenu
    - System.Windows.Forms.Form.MinimizeBox
    - System.Windows.Forms.Form.Modal
    - System.Windows.Forms.Form.Opacity
    - System.Windows.Forms.Form.OwnedForms
    - System.Windows.Forms.Form.Owner
    - System.Windows.Forms.Form.RestoreBounds
    - System.Windows.Forms.Form.RightToLeftLayout
    - System.Windows.Forms.Form.ShowInTaskbar
    - System.Windows.Forms.Form.ShowIcon
    - System.Windows.Forms.Form.ShowWithoutActivation
    - System.Windows.Forms.Form.Size
    - System.Windows.Forms.Form.SizeGripStyle
    - System.Windows.Forms.Form.StartPosition
    - System.Windows.Forms.Form.Text
    - System.Windows.Forms.Form.TopLevel
    - System.Windows.Forms.Form.TopMost
    - System.Windows.Forms.Form.TransparencyKey
    - System.Windows.Forms.Form.WindowState
    - System.Windows.Forms.Form.AutoSizeChanged
    - System.Windows.Forms.Form.AutoValidateChanged
    - System.Windows.Forms.Form.HelpButtonClicked
    - System.Windows.Forms.Form.MaximizedBoundsChanged
    - System.Windows.Forms.Form.MaximumSizeChanged
    - System.Windows.Forms.Form.MinimumSizeChanged
    - System.Windows.Forms.Form.Activated
    - System.Windows.Forms.Form.Deactivate
    - System.Windows.Forms.Form.FormClosing
    - System.Windows.Forms.Form.FormClosed
    - System.Windows.Forms.Form.Load
    - System.Windows.Forms.Form.MdiChildActivate
    - System.Windows.Forms.Form.MenuComplete
    - System.Windows.Forms.Form.MenuStart
    - System.Windows.Forms.Form.InputLanguageChanged
    - System.Windows.Forms.Form.InputLanguageChanging
    - System.Windows.Forms.Form.RightToLeftLayoutChanged
    - System.Windows.Forms.Form.Shown
    - System.Windows.Forms.Form.DpiChanged
    - System.Windows.Forms.Form.ResizeBegin
    - System.Windows.Forms.Form.ResizeEnd
    - System.Windows.Forms.ContainerControl.System#Windows#Forms#IContainerControl#ActivateControl(System.Windows.Forms.Control)
    - System.Windows.Forms.ContainerControl.OnAutoValidateChanged(System.EventArgs)
    - System.Windows.Forms.ContainerControl.OnParentChanged(System.EventArgs)
    - System.Windows.Forms.ContainerControl.PerformAutoScale
    - System.Windows.Forms.ContainerControl.Validate
    - System.Windows.Forms.ContainerControl.Validate(System.Boolean)
    - System.Windows.Forms.ContainerControl.AutoScaleDimensions
    - System.Windows.Forms.ContainerControl.AutoScaleFactor
    - System.Windows.Forms.ContainerControl.AutoScaleMode
    - System.Windows.Forms.ContainerControl.BindingContext
    - System.Windows.Forms.ContainerControl.CanEnableIme
    - System.Windows.Forms.ContainerControl.ActiveControl
    - System.Windows.Forms.ContainerControl.CurrentAutoScaleDimensions
    - System.Windows.Forms.ContainerControl.ParentForm
    - System.Windows.Forms.ScrollableControl.ScrollStateAutoScrolling
    - System.Windows.Forms.ScrollableControl.ScrollStateHScrollVisible
    - System.Windows.Forms.ScrollableControl.ScrollStateVScrollVisible
    - System.Windows.Forms.ScrollableControl.ScrollStateUserHasScrolled
    - System.Windows.Forms.ScrollableControl.ScrollStateFullDrag
    - System.Windows.Forms.ScrollableControl.GetScrollState(System.Int32)
    - System.Windows.Forms.ScrollableControl.OnMouseWheel(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.ScrollableControl.OnRightToLeftChanged(System.EventArgs)
    - System.Windows.Forms.ScrollableControl.OnPaintBackground(System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.ScrollableControl.OnPaddingChanged(System.EventArgs)
    - System.Windows.Forms.ScrollableControl.SetDisplayRectLocation(System.Int32,System.Int32)
    - System.Windows.Forms.ScrollableControl.ScrollControlIntoView(System.Windows.Forms.Control)
    - System.Windows.Forms.ScrollableControl.ScrollToControl(System.Windows.Forms.Control)
    - System.Windows.Forms.ScrollableControl.OnScroll(System.Windows.Forms.ScrollEventArgs)
    - System.Windows.Forms.ScrollableControl.SetAutoScrollMargin(System.Int32,System.Int32)
    - System.Windows.Forms.ScrollableControl.SetScrollState(System.Int32,System.Boolean)
    - System.Windows.Forms.ScrollableControl.AutoScrollMargin
    - System.Windows.Forms.ScrollableControl.AutoScrollPosition
    - System.Windows.Forms.ScrollableControl.AutoScrollMinSize
    - System.Windows.Forms.ScrollableControl.DisplayRectangle
    - System.Windows.Forms.ScrollableControl.HScroll
    - System.Windows.Forms.ScrollableControl.HorizontalScroll
    - System.Windows.Forms.ScrollableControl.VScroll
    - System.Windows.Forms.ScrollableControl.VerticalScroll
    - System.Windows.Forms.ScrollableControl.Scroll
    - System.Windows.Forms.Control.GetAccessibilityObjectById(System.Int32)
    - System.Windows.Forms.Control.SetAutoSizeMode(System.Windows.Forms.AutoSizeMode)
    - System.Windows.Forms.Control.GetAutoSizeMode
    - System.Windows.Forms.Control.GetPreferredSize(System.Drawing.Size)
    - System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32)
    - System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32,System.Int32)
    - System.Windows.Forms.Control.BeginInvoke(System.Delegate)
    - System.Windows.Forms.Control.BeginInvoke(System.Delegate,System.Object[])
    - System.Windows.Forms.Control.BringToFront
    - System.Windows.Forms.Control.Contains(System.Windows.Forms.Control)
    - System.Windows.Forms.Control.CreateAccessibilityInstance
    - System.Windows.Forms.Control.CreateGraphics
    - System.Windows.Forms.Control.CreateControl
    - System.Windows.Forms.Control.DestroyHandle
    - System.Windows.Forms.Control.DoDragDrop(System.Object,System.Windows.Forms.DragDropEffects)
    - System.Windows.Forms.Control.DrawToBitmap(System.Drawing.Bitmap,System.Drawing.Rectangle)
    - System.Windows.Forms.Control.EndInvoke(System.IAsyncResult)
    - System.Windows.Forms.Control.FindForm
    - System.Windows.Forms.Control.GetTopLevel
    - System.Windows.Forms.Control.RaiseKeyEvent(System.Object,System.Windows.Forms.KeyEventArgs)
    - System.Windows.Forms.Control.RaiseMouseEvent(System.Object,System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.Focus
    - System.Windows.Forms.Control.FromChildHandle(System.IntPtr)
    - System.Windows.Forms.Control.FromHandle(System.IntPtr)
    - System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point,System.Windows.Forms.GetChildAtPointSkip)
    - System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point)
    - System.Windows.Forms.Control.GetContainerControl
    - System.Windows.Forms.Control.GetNextControl(System.Windows.Forms.Control,System.Boolean)
    - System.Windows.Forms.Control.GetStyle(System.Windows.Forms.ControlStyles)
    - System.Windows.Forms.Control.Hide
    - System.Windows.Forms.Control.InitLayout
    - System.Windows.Forms.Control.Invalidate(System.Drawing.Region)
    - System.Windows.Forms.Control.Invalidate(System.Drawing.Region,System.Boolean)
    - System.Windows.Forms.Control.Invalidate
    - System.Windows.Forms.Control.Invalidate(System.Boolean)
    - System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle)
    - System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle,System.Boolean)
    - System.Windows.Forms.Control.Invoke(System.Delegate)
    - System.Windows.Forms.Control.Invoke(System.Delegate,System.Object[])
    - System.Windows.Forms.Control.InvokePaint(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Control.InvokePaintBackground(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Control.IsKeyLocked(System.Windows.Forms.Keys)
    - System.Windows.Forms.Control.IsInputChar(System.Char)
    - System.Windows.Forms.Control.IsInputKey(System.Windows.Forms.Keys)
    - System.Windows.Forms.Control.IsMnemonic(System.Char,System.String)
    - System.Windows.Forms.Control.LogicalToDeviceUnits(System.Int32)
    - System.Windows.Forms.Control.ScaleBitmapLogicalToDevice(System.Drawing.Bitmap@)
    - System.Windows.Forms.Control.NotifyInvalidate(System.Drawing.Rectangle)
    - System.Windows.Forms.Control.InvokeOnClick(System.Windows.Forms.Control,System.EventArgs)
    - System.Windows.Forms.Control.OnAutoSizeChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnBackColorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnBindingContextChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnCausesValidationChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnContextMenuChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnContextMenuStripChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnCursorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnDockChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnForeColorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnNotifyMessage(System.Windows.Forms.Message)
    - System.Windows.Forms.Control.OnParentBackColorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentBackgroundImageChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentBindingContextChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentCursorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentEnabledChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentFontChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentForeColorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentRightToLeftChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentVisibleChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnPrint(System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Control.OnTabIndexChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnTabStopChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnClick(System.EventArgs)
    - System.Windows.Forms.Control.OnClientSizeChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnControlAdded(System.Windows.Forms.ControlEventArgs)
    - System.Windows.Forms.Control.OnControlRemoved(System.Windows.Forms.ControlEventArgs)
    - System.Windows.Forms.Control.OnLocationChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnDoubleClick(System.EventArgs)
    - System.Windows.Forms.Control.OnDragEnter(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.OnDragOver(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.OnDragLeave(System.EventArgs)
    - System.Windows.Forms.Control.OnDragDrop(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.OnGiveFeedback(System.Windows.Forms.GiveFeedbackEventArgs)
    - System.Windows.Forms.Control.InvokeGotFocus(System.Windows.Forms.Control,System.EventArgs)
    - System.Windows.Forms.Control.OnGotFocus(System.EventArgs)
    - System.Windows.Forms.Control.OnHelpRequested(System.Windows.Forms.HelpEventArgs)
    - System.Windows.Forms.Control.OnInvalidated(System.Windows.Forms.InvalidateEventArgs)
    - System.Windows.Forms.Control.OnKeyDown(System.Windows.Forms.KeyEventArgs)
    - System.Windows.Forms.Control.OnKeyPress(System.Windows.Forms.KeyPressEventArgs)
    - System.Windows.Forms.Control.OnKeyUp(System.Windows.Forms.KeyEventArgs)
    - System.Windows.Forms.Control.OnLeave(System.EventArgs)
    - System.Windows.Forms.Control.InvokeLostFocus(System.Windows.Forms.Control,System.EventArgs)
    - System.Windows.Forms.Control.OnLostFocus(System.EventArgs)
    - System.Windows.Forms.Control.OnMarginChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseDoubleClick(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMouseClick(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMouseCaptureChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseDown(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMouseEnter(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseLeave(System.EventArgs)
    - System.Windows.Forms.Control.OnDpiChangedBeforeParent(System.EventArgs)
    - System.Windows.Forms.Control.OnDpiChangedAfterParent(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseHover(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseMove(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMouseUp(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMove(System.EventArgs)
    - System.Windows.Forms.Control.OnQueryContinueDrag(System.Windows.Forms.QueryContinueDragEventArgs)
    - System.Windows.Forms.Control.OnRegionChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnPreviewKeyDown(System.Windows.Forms.PreviewKeyDownEventArgs)
    - System.Windows.Forms.Control.OnSizeChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnChangeUICues(System.Windows.Forms.UICuesEventArgs)
    - System.Windows.Forms.Control.OnSystemColorsChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnValidating(System.ComponentModel.CancelEventArgs)
    - System.Windows.Forms.Control.OnValidated(System.EventArgs)
    - System.Windows.Forms.Control.RescaleConstantsForDpi(System.Int32,System.Int32)
    - System.Windows.Forms.Control.PerformLayout
    - System.Windows.Forms.Control.PerformLayout(System.Windows.Forms.Control,System.String)
    - System.Windows.Forms.Control.PointToClient(System.Drawing.Point)
    - System.Windows.Forms.Control.PointToScreen(System.Drawing.Point)
    - System.Windows.Forms.Control.PreProcessMessage(System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.PreProcessControlMessage(System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.ProcessKeyEventArgs(System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.ProcessKeyMessage(System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.RaiseDragEvent(System.Object,System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.RaisePaintEvent(System.Object,System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Control.RecreateHandle
    - System.Windows.Forms.Control.RectangleToClient(System.Drawing.Rectangle)
    - System.Windows.Forms.Control.RectangleToScreen(System.Drawing.Rectangle)
    - System.Windows.Forms.Control.ReflectMessage(System.IntPtr,System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.Refresh
    - System.Windows.Forms.Control.ResetMouseEventArgs
    - System.Windows.Forms.Control.ResetText
    - System.Windows.Forms.Control.ResumeLayout
    - System.Windows.Forms.Control.ResumeLayout(System.Boolean)
    - System.Windows.Forms.Control.Scale(System.Drawing.SizeF)
    - System.Windows.Forms.Control.Select
    - System.Windows.Forms.Control.SelectNextControl(System.Windows.Forms.Control,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
    - System.Windows.Forms.Control.SendToBack
    - System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32)
    - System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
    - System.Windows.Forms.Control.SizeFromClientSize(System.Drawing.Size)
    - System.Windows.Forms.Control.SetStyle(System.Windows.Forms.ControlStyles,System.Boolean)
    - System.Windows.Forms.Control.SetTopLevel(System.Boolean)
    - System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.HorizontalAlignment)
    - System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.LeftRightAlignment)
    - System.Windows.Forms.Control.RtlTranslateAlignment(System.Drawing.ContentAlignment)
    - System.Windows.Forms.Control.RtlTranslateHorizontal(System.Windows.Forms.HorizontalAlignment)
    - System.Windows.Forms.Control.RtlTranslateLeftRight(System.Windows.Forms.LeftRightAlignment)
    - System.Windows.Forms.Control.RtlTranslateContent(System.Drawing.ContentAlignment)
    - System.Windows.Forms.Control.Show
    - System.Windows.Forms.Control.SuspendLayout
    - System.Windows.Forms.Control.Update
    - System.Windows.Forms.Control.UpdateBounds
    - System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32)
    - System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
    - System.Windows.Forms.Control.UpdateZOrder
    - System.Windows.Forms.Control.UpdateStyles
    - System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragEnter(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragOver(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragLeave(System.EventArgs)
    - System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragDrop(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.OnImeModeChanged(System.EventArgs)
    - System.Windows.Forms.Control.AccessibilityObject
    - System.Windows.Forms.Control.AccessibleDefaultActionDescription
    - System.Windows.Forms.Control.AccessibleDescription
    - System.Windows.Forms.Control.AccessibleName
    - System.Windows.Forms.Control.AccessibleRole
    - System.Windows.Forms.Control.AllowDrop
    - System.Windows.Forms.Control.Anchor
    - System.Windows.Forms.Control.AutoScrollOffset
    - System.Windows.Forms.Control.LayoutEngine
    - System.Windows.Forms.Control.BackgroundImage
    - System.Windows.Forms.Control.BackgroundImageLayout
    - System.Windows.Forms.Control.Bottom
    - System.Windows.Forms.Control.Bounds
    - System.Windows.Forms.Control.CanFocus
    - System.Windows.Forms.Control.CanRaiseEvents
    - System.Windows.Forms.Control.CanSelect
    - System.Windows.Forms.Control.Capture
    - System.Windows.Forms.Control.CausesValidation
    - System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls
    - System.Windows.Forms.Control.ClientRectangle
    - System.Windows.Forms.Control.CompanyName
    - System.Windows.Forms.Control.ContainsFocus
    - System.Windows.Forms.Control.ContextMenu
    - System.Windows.Forms.Control.ContextMenuStrip
    - System.Windows.Forms.Control.Controls
    - System.Windows.Forms.Control.Created
    - System.Windows.Forms.Control.Cursor
    - System.Windows.Forms.Control.DataBindings
    - System.Windows.Forms.Control.DefaultBackColor
    - System.Windows.Forms.Control.DefaultCursor
    - System.Windows.Forms.Control.DefaultFont
    - System.Windows.Forms.Control.DefaultForeColor
    - System.Windows.Forms.Control.DefaultMargin
    - System.Windows.Forms.Control.DefaultMaximumSize
    - System.Windows.Forms.Control.DefaultMinimumSize
    - System.Windows.Forms.Control.DefaultPadding
    - System.Windows.Forms.Control.DeviceDpi
    - System.Windows.Forms.Control.IsDisposed
    - System.Windows.Forms.Control.Disposing
    - System.Windows.Forms.Control.Dock
    - System.Windows.Forms.Control.DoubleBuffered
    - System.Windows.Forms.Control.Enabled
    - System.Windows.Forms.Control.Focused
    - System.Windows.Forms.Control.Font
    - System.Windows.Forms.Control.FontHeight
    - System.Windows.Forms.Control.ForeColor
    - System.Windows.Forms.Control.Handle
    - System.Windows.Forms.Control.HasChildren
    - System.Windows.Forms.Control.Height
    - System.Windows.Forms.Control.IsHandleCreated
    - System.Windows.Forms.Control.InvokeRequired
    - System.Windows.Forms.Control.IsAccessible
    - System.Windows.Forms.Control.IsMirrored
    - System.Windows.Forms.Control.Left
    - System.Windows.Forms.Control.Margin
    - System.Windows.Forms.Control.ModifierKeys
    - System.Windows.Forms.Control.MouseButtons
    - System.Windows.Forms.Control.MousePosition
    - System.Windows.Forms.Control.Name
    - System.Windows.Forms.Control.Parent
    - System.Windows.Forms.Control.ProductName
    - System.Windows.Forms.Control.ProductVersion
    - System.Windows.Forms.Control.RecreatingHandle
    - System.Windows.Forms.Control.Region
    - System.Windows.Forms.Control.RenderRightToLeft
    - System.Windows.Forms.Control.ResizeRedraw
    - System.Windows.Forms.Control.Right
    - System.Windows.Forms.Control.RightToLeft
    - System.Windows.Forms.Control.ScaleChildren
    - System.Windows.Forms.Control.Site
    - System.Windows.Forms.Control.TabIndex
    - System.Windows.Forms.Control.TabStop
    - System.Windows.Forms.Control.Tag
    - System.Windows.Forms.Control.Top
    - System.Windows.Forms.Control.TopLevelControl
    - System.Windows.Forms.Control.ShowKeyboardCues
    - System.Windows.Forms.Control.ShowFocusCues
    - System.Windows.Forms.Control.UseWaitCursor
    - System.Windows.Forms.Control.Visible
    - System.Windows.Forms.Control.Width
    - System.Windows.Forms.Control.PreferredSize
    - System.Windows.Forms.Control.Padding
    - System.Windows.Forms.Control.ImeMode
    - System.Windows.Forms.Control.ImeModeBase
    - System.Windows.Forms.Control.PropagatingImeMode
    - System.Windows.Forms.Control.BackColorChanged
    - System.Windows.Forms.Control.BackgroundImageChanged
    - System.Windows.Forms.Control.BackgroundImageLayoutChanged
    - System.Windows.Forms.Control.BindingContextChanged
    - System.Windows.Forms.Control.CausesValidationChanged
    - System.Windows.Forms.Control.ClientSizeChanged
    - System.Windows.Forms.Control.ContextMenuChanged
    - System.Windows.Forms.Control.ContextMenuStripChanged
    - System.Windows.Forms.Control.CursorChanged
    - System.Windows.Forms.Control.DockChanged
    - System.Windows.Forms.Control.EnabledChanged
    - System.Windows.Forms.Control.FontChanged
    - System.Windows.Forms.Control.ForeColorChanged
    - System.Windows.Forms.Control.LocationChanged
    - System.Windows.Forms.Control.MarginChanged
    - System.Windows.Forms.Control.RegionChanged
    - System.Windows.Forms.Control.RightToLeftChanged
    - System.Windows.Forms.Control.SizeChanged
    - System.Windows.Forms.Control.TabIndexChanged
    - System.Windows.Forms.Control.TabStopChanged
    - System.Windows.Forms.Control.TextChanged
    - System.Windows.Forms.Control.VisibleChanged
    - System.Windows.Forms.Control.Click
    - System.Windows.Forms.Control.ControlAdded
    - System.Windows.Forms.Control.ControlRemoved
    - System.Windows.Forms.Control.DragDrop
    - System.Windows.Forms.Control.DragEnter
    - System.Windows.Forms.Control.DragOver
    - System.Windows.Forms.Control.DragLeave
    - System.Windows.Forms.Control.GiveFeedback
    - System.Windows.Forms.Control.HandleCreated
    - System.Windows.Forms.Control.HandleDestroyed
    - System.Windows.Forms.Control.HelpRequested
    - System.Windows.Forms.Control.Invalidated
    - System.Windows.Forms.Control.PaddingChanged
    - System.Windows.Forms.Control.Paint
    - System.Windows.Forms.Control.QueryContinueDrag
    - System.Windows.Forms.Control.QueryAccessibilityHelp
    - System.Windows.Forms.Control.DoubleClick
    - System.Windows.Forms.Control.Enter
    - System.Windows.Forms.Control.GotFocus
    - System.Windows.Forms.Control.KeyDown
    - System.Windows.Forms.Control.KeyPress
    - System.Windows.Forms.Control.KeyUp
    - System.Windows.Forms.Control.Layout
    - System.Windows.Forms.Control.Leave
    - System.Windows.Forms.Control.LostFocus
    - System.Windows.Forms.Control.MouseClick
    - System.Windows.Forms.Control.MouseDoubleClick
    - System.Windows.Forms.Control.MouseCaptureChanged
    - System.Windows.Forms.Control.MouseDown
    - System.Windows.Forms.Control.MouseEnter
    - System.Windows.Forms.Control.MouseLeave
    - System.Windows.Forms.Control.DpiChangedBeforeParent
    - System.Windows.Forms.Control.DpiChangedAfterParent
    - System.Windows.Forms.Control.MouseHover
    - System.Windows.Forms.Control.MouseMove
    - System.Windows.Forms.Control.MouseUp
    - System.Windows.Forms.Control.MouseWheel
    - System.Windows.Forms.Control.Move
    - System.Windows.Forms.Control.PreviewKeyDown
    - System.Windows.Forms.Control.Resize
    - System.Windows.Forms.Control.ChangeUICues
    - System.Windows.Forms.Control.StyleChanged
    - System.Windows.Forms.Control.SystemColorsChanged
    - System.Windows.Forms.Control.Validating
    - System.Windows.Forms.Control.Validated
    - System.Windows.Forms.Control.ParentChanged
    - System.Windows.Forms.Control.ImeModeChanged
    - System.ComponentModel.Component.Dispose
    - System.ComponentModel.Component.GetService(System.Type)
    - System.ComponentModel.Component.Events
    - System.ComponentModel.Component.Container
    - System.ComponentModel.Component.DesignMode
    - System.ComponentModel.Component.Disposed
    - System.MarshalByRefObject.MemberwiseClone(System.Boolean)
    - System.MarshalByRefObject.GetLifetimeService
    - System.MarshalByRefObject.InitializeLifetimeService
    - System.MarshalByRefObject.CreateObjRef(System.Type)
    - System.Object.Equals(System.Object)
    - System.Object.Equals(System.Object,System.Object)
    - System.Object.ReferenceEquals(System.Object,System.Object)
    - System.Object.GetHashCode
    - System.Object.GetType
    - System.Object.MemberwiseClone
    attributes:
    - type: System.SerializableAttribute
      ctor: System.SerializableAttribute.#ctor
      arguments: []
    modifiers:
      CSharp:
      - public
      - class
      VB:
      - Public
      - Class
    items:
    - id: WyświetlanieDanych.Form1.#ctor
      commentId: M:WyświetlanieDanych.Form1.#ctor
      language: CSharp
      name:
        CSharp: Form1()
        VB: Form1()
      nameWithType:
        CSharp: Form1.Form1()
        VB: Form1.Form1()
      qualifiedName:
        CSharp: WyświetlanieDanych.Form1.Form1()
        VB: WyświetlanieDanych.Form1.Form1()
      type: Constructor
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form1.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: .ctor
        path: Forms/Form1.cs
        startLine: 27
      summary: "\nKonstruktor Form1\n"
      example: []
      syntax:
        content:
          CSharp: public Form1()
          VB: Public Sub New
      overload: WyświetlanieDanych.Form1.#ctor*
      modifiers:
        CSharp:
        - public
        VB:
        - Public
    - id: WyświetlanieDanych.Form1.#ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
      commentId: M:WyświetlanieDanych.Form1.#ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
      language: CSharp
      name:
        CSharp: Form1(SerializationInfo, StreamingContext)
        VB: Form1(SerializationInfo, StreamingContext)
      nameWithType:
        CSharp: Form1.Form1(SerializationInfo, StreamingContext)
        VB: Form1.Form1(SerializationInfo, StreamingContext)
      qualifiedName:
        CSharp: WyświetlanieDanych.Form1.Form1(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext)
        VB: WyświetlanieDanych.Form1.Form1(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext)
      type: Constructor
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form1.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: .ctor
        path: Forms/Form1.cs
        startLine: 36
      summary: "\nKonstruktor Form1 zawierające informacje na temat serializacji oraz pliku z danymi.\n"
      example: []
      syntax:
        content:
          CSharp: public Form1(SerializationInfo info, StreamingContext context)
          VB: Public Sub New(info As SerializationInfo, context As StreamingContext)
        parameters:
        - id: info
          type: System.Runtime.Serialization.SerializationInfo
          description: Przechowuje wszystkie dane potrzebne do serializacji lub deserializacji obiektu. Klasa ta nie może być dziedziczona
        - id: context
          type: System.Runtime.Serialization.StreamingContext
          description: Opisuje źródło i miejsce docelowe danego serializowanego strumienia oraz udostępnia dodatkowy kontekst zdefiniowany przez obiekt wywołujący.
      overload: WyświetlanieDanych.Form1.#ctor*
      modifiers:
        CSharp:
        - public
        VB:
        - Public
    - id: WyświetlanieDanych.Form1.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
      commentId: M:WyświetlanieDanych.Form1.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
      language: CSharp
      name:
        CSharp: GetObjectData(SerializationInfo, StreamingContext)
        VB: GetObjectData(SerializationInfo, StreamingContext)
      nameWithType:
        CSharp: Form1.GetObjectData(SerializationInfo, StreamingContext)
        VB: Form1.GetObjectData(SerializationInfo, StreamingContext)
      qualifiedName:
        CSharp: WyświetlanieDanych.Form1.GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext)
        VB: WyświetlanieDanych.Form1.GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext)
      type: Method
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form1.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: GetObjectData
        path: Forms/Form1.cs
        startLine: 135
      summary: "\nMetoda GetObjectData zapisuje dane serializowanych danych\n"
      example: []
      syntax:
        content:
          CSharp: public void GetObjectData(SerializationInfo info, StreamingContext context)
          VB: Public Sub GetObjectData(info As SerializationInfo, context As StreamingContext)
        parameters:
        - id: info
          type: System.Runtime.Serialization.SerializationInfo
          description: Przechowuje wszystkie dane potrzebne do serializacji lub deserializacji obiektu. Klasa ta nie może być dziedziczona
        - id: context
          type: System.Runtime.Serialization.StreamingContext
          description: Opisuje źródło i miejsce docelowe danego serializowanego strumienia oraz udostępnia dodatkowy kontekst zdefiniowany przez obiekt wywołujący.
      overload: WyświetlanieDanych.Form1.GetObjectData*
      implements:
      - System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
      modifiers:
        CSharp:
        - public
        VB:
        - Public
    - id: WyświetlanieDanych.Form1.Dispose(System.Boolean)
      commentId: M:WyświetlanieDanych.Form1.Dispose(System.Boolean)
      language: CSharp
      name:
        CSharp: Dispose(Boolean)
        VB: Dispose(Boolean)
      nameWithType:
        CSharp: Form1.Dispose(Boolean)
        VB: Form1.Dispose(Boolean)
      qualifiedName:
        CSharp: WyświetlanieDanych.Form1.Dispose(System.Boolean)
        VB: WyświetlanieDanych.Form1.Dispose(System.Boolean)
      type: Method
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form1.Designer.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: Dispose
        path: Forms/Form1.Designer.cs
        startLine: 13
      summary: "\nWyczyść wszystkie używane zasoby.\n"
      example: []
      syntax:
        content:
          CSharp: protected override void Dispose(bool disposing)
          VB: Protected Overrides Sub Dispose(disposing As Boolean)
        parameters:
        - id: disposing
          type: System.Boolean
          description: prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.
      overload: WyświetlanieDanych.Form1.Dispose*
      overridden: System.Windows.Forms.Form.Dispose(System.Boolean)
      modifiers:
        CSharp:
        - protected
        - override
        VB:
        - Protected
        - Overrides
  - id: WyświetlanieDanych.Form2
    commentId: T:WyświetlanieDanych.Form2
    language: CSharp
    name:
      CSharp: Form2
      VB: Form2
    nameWithType:
      CSharp: Form2
      VB: Form2
    qualifiedName:
      CSharp: WyświetlanieDanych.Form2
      VB: WyświetlanieDanych.Form2
    type: Class
    assemblies:
    - WyświetlanieDanych
    namespace: WyświetlanieDanych
    source:
      remote:
        path: Forms/WyświetlanieDanych/Forms/Form2.Designer.cs
        branch: pawel_final
        repo: https://github.com/mateuszigbt/komponenty
      id: Form2
      path: Forms/Form2.Designer.cs
      startLine: 2
    syntax:
      content:
        CSharp: 'public class Form2 : Form, IDropTarget, ISynchronizeInvoke, IWin32Window, IBindableComponent, IComponent, IDisposable, IContainerControl'
        VB: >-
          Public Class Form2

              Inherits Form

              Implements IDropTarget, ISynchronizeInvoke, IWin32Window, IBindableComponent, IComponent, IDisposable, IContainerControl
    inheritance:
    - System.Object
    - System.MarshalByRefObject
    - System.ComponentModel.Component
    - System.Windows.Forms.Control
    - System.Windows.Forms.ScrollableControl
    - System.Windows.Forms.ContainerControl
    - System.Windows.Forms.Form
    implements:
    - System.Windows.Forms.IDropTarget
    - System.ComponentModel.ISynchronizeInvoke
    - System.Windows.Forms.IWin32Window
    - System.Windows.Forms.IBindableComponent
    - System.ComponentModel.IComponent
    - System.IDisposable
    - System.Windows.Forms.IContainerControl
    inheritedMembers:
    - System.Windows.Forms.Form.SetVisibleCore(System.Boolean)
    - System.Windows.Forms.Form.Activate
    - System.Windows.Forms.Form.ActivateMdiChild(System.Windows.Forms.Form)
    - System.Windows.Forms.Form.AddOwnedForm(System.Windows.Forms.Form)
    - System.Windows.Forms.Form.AdjustFormScrollbars(System.Boolean)
    - System.Windows.Forms.Form.Close
    - System.Windows.Forms.Form.CreateControlsInstance
    - System.Windows.Forms.Form.CreateHandle
    - System.Windows.Forms.Form.DefWndProc(System.Windows.Forms.Message@)
    - System.Windows.Forms.Form.ProcessMnemonic(System.Char)
    - System.Windows.Forms.Form.CenterToParent
    - System.Windows.Forms.Form.CenterToScreen
    - System.Windows.Forms.Form.LayoutMdi(System.Windows.Forms.MdiLayout)
    - System.Windows.Forms.Form.OnActivated(System.EventArgs)
    - System.Windows.Forms.Form.OnBackgroundImageChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnBackgroundImageLayoutChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnClosing(System.ComponentModel.CancelEventArgs)
    - System.Windows.Forms.Form.OnClosed(System.EventArgs)
    - System.Windows.Forms.Form.OnFormClosing(System.Windows.Forms.FormClosingEventArgs)
    - System.Windows.Forms.Form.OnFormClosed(System.Windows.Forms.FormClosedEventArgs)
    - System.Windows.Forms.Form.OnCreateControl
    - System.Windows.Forms.Form.OnDeactivate(System.EventArgs)
    - System.Windows.Forms.Form.OnEnabledChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnEnter(System.EventArgs)
    - System.Windows.Forms.Form.OnFontChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnHandleCreated(System.EventArgs)
    - System.Windows.Forms.Form.OnHandleDestroyed(System.EventArgs)
    - System.Windows.Forms.Form.OnHelpButtonClicked(System.ComponentModel.CancelEventArgs)
    - System.Windows.Forms.Form.OnLayout(System.Windows.Forms.LayoutEventArgs)
    - System.Windows.Forms.Form.OnLoad(System.EventArgs)
    - System.Windows.Forms.Form.OnMaximizedBoundsChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnMaximumSizeChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnMinimumSizeChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnInputLanguageChanged(System.Windows.Forms.InputLanguageChangedEventArgs)
    - System.Windows.Forms.Form.OnInputLanguageChanging(System.Windows.Forms.InputLanguageChangingEventArgs)
    - System.Windows.Forms.Form.OnVisibleChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnMdiChildActivate(System.EventArgs)
    - System.Windows.Forms.Form.OnMenuStart(System.EventArgs)
    - System.Windows.Forms.Form.OnMenuComplete(System.EventArgs)
    - System.Windows.Forms.Form.OnPaint(System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Form.OnResize(System.EventArgs)
    - System.Windows.Forms.Form.OnDpiChanged(System.Windows.Forms.DpiChangedEventArgs)
    - System.Windows.Forms.Form.OnGetDpiScaledSize(System.Int32,System.Int32,System.Drawing.Size@)
    - System.Windows.Forms.Form.OnRightToLeftLayoutChanged(System.EventArgs)
    - System.Windows.Forms.Form.OnShown(System.EventArgs)
    - System.Windows.Forms.Form.OnTextChanged(System.EventArgs)
    - System.Windows.Forms.Form.ProcessCmdKey(System.Windows.Forms.Message@,System.Windows.Forms.Keys)
    - System.Windows.Forms.Form.ProcessDialogKey(System.Windows.Forms.Keys)
    - System.Windows.Forms.Form.ProcessDialogChar(System.Char)
    - System.Windows.Forms.Form.ProcessKeyPreview(System.Windows.Forms.Message@)
    - System.Windows.Forms.Form.ProcessTabKey(System.Boolean)
    - System.Windows.Forms.Form.RemoveOwnedForm(System.Windows.Forms.Form)
    - System.Windows.Forms.Form.Select(System.Boolean,System.Boolean)
    - System.Windows.Forms.Form.GetScaledBounds(System.Drawing.Rectangle,System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
    - System.Windows.Forms.Form.ScaleControl(System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
    - System.Windows.Forms.Form.SetBoundsCore(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
    - System.Windows.Forms.Form.SetClientSizeCore(System.Int32,System.Int32)
    - System.Windows.Forms.Form.SetDesktopBounds(System.Int32,System.Int32,System.Int32,System.Int32)
    - System.Windows.Forms.Form.SetDesktopLocation(System.Int32,System.Int32)
    - System.Windows.Forms.Form.Show(System.Windows.Forms.IWin32Window)
    - System.Windows.Forms.Form.ShowDialog
    - System.Windows.Forms.Form.ShowDialog(System.Windows.Forms.IWin32Window)
    - System.Windows.Forms.Form.ToString
    - System.Windows.Forms.Form.UpdateDefaultButton
    - System.Windows.Forms.Form.OnResizeBegin(System.EventArgs)
    - System.Windows.Forms.Form.OnResizeEnd(System.EventArgs)
    - System.Windows.Forms.Form.OnStyleChanged(System.EventArgs)
    - System.Windows.Forms.Form.ValidateChildren
    - System.Windows.Forms.Form.ValidateChildren(System.Windows.Forms.ValidationConstraints)
    - System.Windows.Forms.Form.WndProc(System.Windows.Forms.Message@)
    - System.Windows.Forms.Form.AcceptButton
    - System.Windows.Forms.Form.ActiveForm
    - System.Windows.Forms.Form.ActiveMdiChild
    - System.Windows.Forms.Form.AllowTransparency
    - System.Windows.Forms.Form.AutoScroll
    - System.Windows.Forms.Form.AutoSize
    - System.Windows.Forms.Form.AutoSizeMode
    - System.Windows.Forms.Form.AutoValidate
    - System.Windows.Forms.Form.BackColor
    - System.Windows.Forms.Form.FormBorderStyle
    - System.Windows.Forms.Form.CancelButton
    - System.Windows.Forms.Form.ClientSize
    - System.Windows.Forms.Form.ControlBox
    - System.Windows.Forms.Form.CreateParams
    - System.Windows.Forms.Form.DefaultImeMode
    - System.Windows.Forms.Form.DefaultSize
    - System.Windows.Forms.Form.DesktopBounds
    - System.Windows.Forms.Form.DesktopLocation
    - System.Windows.Forms.Form.DialogResult
    - System.Windows.Forms.Form.HelpButton
    - System.Windows.Forms.Form.Icon
    - System.Windows.Forms.Form.IsMdiChild
    - System.Windows.Forms.Form.IsMdiContainer
    - System.Windows.Forms.Form.IsRestrictedWindow
    - System.Windows.Forms.Form.KeyPreview
    - System.Windows.Forms.Form.Location
    - System.Windows.Forms.Form.MaximizedBounds
    - System.Windows.Forms.Form.MaximumSize
    - System.Windows.Forms.Form.MainMenuStrip
    - System.Windows.Forms.Form.Menu
    - System.Windows.Forms.Form.MinimumSize
    - System.Windows.Forms.Form.MaximizeBox
    - System.Windows.Forms.Form.MdiChildren
    - System.Windows.Forms.Form.MdiParent
    - System.Windows.Forms.Form.MergedMenu
    - System.Windows.Forms.Form.MinimizeBox
    - System.Windows.Forms.Form.Modal
    - System.Windows.Forms.Form.Opacity
    - System.Windows.Forms.Form.OwnedForms
    - System.Windows.Forms.Form.Owner
    - System.Windows.Forms.Form.RestoreBounds
    - System.Windows.Forms.Form.RightToLeftLayout
    - System.Windows.Forms.Form.ShowInTaskbar
    - System.Windows.Forms.Form.ShowIcon
    - System.Windows.Forms.Form.ShowWithoutActivation
    - System.Windows.Forms.Form.Size
    - System.Windows.Forms.Form.SizeGripStyle
    - System.Windows.Forms.Form.StartPosition
    - System.Windows.Forms.Form.Text
    - System.Windows.Forms.Form.TopLevel
    - System.Windows.Forms.Form.TopMost
    - System.Windows.Forms.Form.TransparencyKey
    - System.Windows.Forms.Form.WindowState
    - System.Windows.Forms.Form.AutoSizeChanged
    - System.Windows.Forms.Form.AutoValidateChanged
    - System.Windows.Forms.Form.HelpButtonClicked
    - System.Windows.Forms.Form.MaximizedBoundsChanged
    - System.Windows.Forms.Form.MaximumSizeChanged
    - System.Windows.Forms.Form.MinimumSizeChanged
    - System.Windows.Forms.Form.Activated
    - System.Windows.Forms.Form.Deactivate
    - System.Windows.Forms.Form.FormClosing
    - System.Windows.Forms.Form.FormClosed
    - System.Windows.Forms.Form.Load
    - System.Windows.Forms.Form.MdiChildActivate
    - System.Windows.Forms.Form.MenuComplete
    - System.Windows.Forms.Form.MenuStart
    - System.Windows.Forms.Form.InputLanguageChanged
    - System.Windows.Forms.Form.InputLanguageChanging
    - System.Windows.Forms.Form.RightToLeftLayoutChanged
    - System.Windows.Forms.Form.Shown
    - System.Windows.Forms.Form.DpiChanged
    - System.Windows.Forms.Form.ResizeBegin
    - System.Windows.Forms.Form.ResizeEnd
    - System.Windows.Forms.ContainerControl.System#Windows#Forms#IContainerControl#ActivateControl(System.Windows.Forms.Control)
    - System.Windows.Forms.ContainerControl.OnAutoValidateChanged(System.EventArgs)
    - System.Windows.Forms.ContainerControl.OnParentChanged(System.EventArgs)
    - System.Windows.Forms.ContainerControl.PerformAutoScale
    - System.Windows.Forms.ContainerControl.Validate
    - System.Windows.Forms.ContainerControl.Validate(System.Boolean)
    - System.Windows.Forms.ContainerControl.AutoScaleDimensions
    - System.Windows.Forms.ContainerControl.AutoScaleFactor
    - System.Windows.Forms.ContainerControl.AutoScaleMode
    - System.Windows.Forms.ContainerControl.BindingContext
    - System.Windows.Forms.ContainerControl.CanEnableIme
    - System.Windows.Forms.ContainerControl.ActiveControl
    - System.Windows.Forms.ContainerControl.CurrentAutoScaleDimensions
    - System.Windows.Forms.ContainerControl.ParentForm
    - System.Windows.Forms.ScrollableControl.ScrollStateAutoScrolling
    - System.Windows.Forms.ScrollableControl.ScrollStateHScrollVisible
    - System.Windows.Forms.ScrollableControl.ScrollStateVScrollVisible
    - System.Windows.Forms.ScrollableControl.ScrollStateUserHasScrolled
    - System.Windows.Forms.ScrollableControl.ScrollStateFullDrag
    - System.Windows.Forms.ScrollableControl.GetScrollState(System.Int32)
    - System.Windows.Forms.ScrollableControl.OnMouseWheel(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.ScrollableControl.OnRightToLeftChanged(System.EventArgs)
    - System.Windows.Forms.ScrollableControl.OnPaintBackground(System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.ScrollableControl.OnPaddingChanged(System.EventArgs)
    - System.Windows.Forms.ScrollableControl.SetDisplayRectLocation(System.Int32,System.Int32)
    - System.Windows.Forms.ScrollableControl.ScrollControlIntoView(System.Windows.Forms.Control)
    - System.Windows.Forms.ScrollableControl.ScrollToControl(System.Windows.Forms.Control)
    - System.Windows.Forms.ScrollableControl.OnScroll(System.Windows.Forms.ScrollEventArgs)
    - System.Windows.Forms.ScrollableControl.SetAutoScrollMargin(System.Int32,System.Int32)
    - System.Windows.Forms.ScrollableControl.SetScrollState(System.Int32,System.Boolean)
    - System.Windows.Forms.ScrollableControl.AutoScrollMargin
    - System.Windows.Forms.ScrollableControl.AutoScrollPosition
    - System.Windows.Forms.ScrollableControl.AutoScrollMinSize
    - System.Windows.Forms.ScrollableControl.DisplayRectangle
    - System.Windows.Forms.ScrollableControl.HScroll
    - System.Windows.Forms.ScrollableControl.HorizontalScroll
    - System.Windows.Forms.ScrollableControl.VScroll
    - System.Windows.Forms.ScrollableControl.VerticalScroll
    - System.Windows.Forms.ScrollableControl.Scroll
    - System.Windows.Forms.Control.GetAccessibilityObjectById(System.Int32)
    - System.Windows.Forms.Control.SetAutoSizeMode(System.Windows.Forms.AutoSizeMode)
    - System.Windows.Forms.Control.GetAutoSizeMode
    - System.Windows.Forms.Control.GetPreferredSize(System.Drawing.Size)
    - System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32)
    - System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32,System.Int32)
    - System.Windows.Forms.Control.BeginInvoke(System.Delegate)
    - System.Windows.Forms.Control.BeginInvoke(System.Delegate,System.Object[])
    - System.Windows.Forms.Control.BringToFront
    - System.Windows.Forms.Control.Contains(System.Windows.Forms.Control)
    - System.Windows.Forms.Control.CreateAccessibilityInstance
    - System.Windows.Forms.Control.CreateGraphics
    - System.Windows.Forms.Control.CreateControl
    - System.Windows.Forms.Control.DestroyHandle
    - System.Windows.Forms.Control.DoDragDrop(System.Object,System.Windows.Forms.DragDropEffects)
    - System.Windows.Forms.Control.DrawToBitmap(System.Drawing.Bitmap,System.Drawing.Rectangle)
    - System.Windows.Forms.Control.EndInvoke(System.IAsyncResult)
    - System.Windows.Forms.Control.FindForm
    - System.Windows.Forms.Control.GetTopLevel
    - System.Windows.Forms.Control.RaiseKeyEvent(System.Object,System.Windows.Forms.KeyEventArgs)
    - System.Windows.Forms.Control.RaiseMouseEvent(System.Object,System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.Focus
    - System.Windows.Forms.Control.FromChildHandle(System.IntPtr)
    - System.Windows.Forms.Control.FromHandle(System.IntPtr)
    - System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point,System.Windows.Forms.GetChildAtPointSkip)
    - System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point)
    - System.Windows.Forms.Control.GetContainerControl
    - System.Windows.Forms.Control.GetNextControl(System.Windows.Forms.Control,System.Boolean)
    - System.Windows.Forms.Control.GetStyle(System.Windows.Forms.ControlStyles)
    - System.Windows.Forms.Control.Hide
    - System.Windows.Forms.Control.InitLayout
    - System.Windows.Forms.Control.Invalidate(System.Drawing.Region)
    - System.Windows.Forms.Control.Invalidate(System.Drawing.Region,System.Boolean)
    - System.Windows.Forms.Control.Invalidate
    - System.Windows.Forms.Control.Invalidate(System.Boolean)
    - System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle)
    - System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle,System.Boolean)
    - System.Windows.Forms.Control.Invoke(System.Delegate)
    - System.Windows.Forms.Control.Invoke(System.Delegate,System.Object[])
    - System.Windows.Forms.Control.InvokePaint(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Control.InvokePaintBackground(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Control.IsKeyLocked(System.Windows.Forms.Keys)
    - System.Windows.Forms.Control.IsInputChar(System.Char)
    - System.Windows.Forms.Control.IsInputKey(System.Windows.Forms.Keys)
    - System.Windows.Forms.Control.IsMnemonic(System.Char,System.String)
    - System.Windows.Forms.Control.LogicalToDeviceUnits(System.Int32)
    - System.Windows.Forms.Control.ScaleBitmapLogicalToDevice(System.Drawing.Bitmap@)
    - System.Windows.Forms.Control.NotifyInvalidate(System.Drawing.Rectangle)
    - System.Windows.Forms.Control.InvokeOnClick(System.Windows.Forms.Control,System.EventArgs)
    - System.Windows.Forms.Control.OnAutoSizeChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnBackColorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnBindingContextChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnCausesValidationChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnContextMenuChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnContextMenuStripChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnCursorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnDockChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnForeColorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnNotifyMessage(System.Windows.Forms.Message)
    - System.Windows.Forms.Control.OnParentBackColorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentBackgroundImageChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentBindingContextChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentCursorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentEnabledChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentFontChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentForeColorChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentRightToLeftChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnParentVisibleChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnPrint(System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Control.OnTabIndexChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnTabStopChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnClick(System.EventArgs)
    - System.Windows.Forms.Control.OnClientSizeChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnControlAdded(System.Windows.Forms.ControlEventArgs)
    - System.Windows.Forms.Control.OnControlRemoved(System.Windows.Forms.ControlEventArgs)
    - System.Windows.Forms.Control.OnLocationChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnDoubleClick(System.EventArgs)
    - System.Windows.Forms.Control.OnDragEnter(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.OnDragOver(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.OnDragLeave(System.EventArgs)
    - System.Windows.Forms.Control.OnDragDrop(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.OnGiveFeedback(System.Windows.Forms.GiveFeedbackEventArgs)
    - System.Windows.Forms.Control.InvokeGotFocus(System.Windows.Forms.Control,System.EventArgs)
    - System.Windows.Forms.Control.OnGotFocus(System.EventArgs)
    - System.Windows.Forms.Control.OnHelpRequested(System.Windows.Forms.HelpEventArgs)
    - System.Windows.Forms.Control.OnInvalidated(System.Windows.Forms.InvalidateEventArgs)
    - System.Windows.Forms.Control.OnKeyDown(System.Windows.Forms.KeyEventArgs)
    - System.Windows.Forms.Control.OnKeyPress(System.Windows.Forms.KeyPressEventArgs)
    - System.Windows.Forms.Control.OnKeyUp(System.Windows.Forms.KeyEventArgs)
    - System.Windows.Forms.Control.OnLeave(System.EventArgs)
    - System.Windows.Forms.Control.InvokeLostFocus(System.Windows.Forms.Control,System.EventArgs)
    - System.Windows.Forms.Control.OnLostFocus(System.EventArgs)
    - System.Windows.Forms.Control.OnMarginChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseDoubleClick(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMouseClick(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMouseCaptureChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseDown(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMouseEnter(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseLeave(System.EventArgs)
    - System.Windows.Forms.Control.OnDpiChangedBeforeParent(System.EventArgs)
    - System.Windows.Forms.Control.OnDpiChangedAfterParent(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseHover(System.EventArgs)
    - System.Windows.Forms.Control.OnMouseMove(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMouseUp(System.Windows.Forms.MouseEventArgs)
    - System.Windows.Forms.Control.OnMove(System.EventArgs)
    - System.Windows.Forms.Control.OnQueryContinueDrag(System.Windows.Forms.QueryContinueDragEventArgs)
    - System.Windows.Forms.Control.OnRegionChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnPreviewKeyDown(System.Windows.Forms.PreviewKeyDownEventArgs)
    - System.Windows.Forms.Control.OnSizeChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnChangeUICues(System.Windows.Forms.UICuesEventArgs)
    - System.Windows.Forms.Control.OnSystemColorsChanged(System.EventArgs)
    - System.Windows.Forms.Control.OnValidating(System.ComponentModel.CancelEventArgs)
    - System.Windows.Forms.Control.OnValidated(System.EventArgs)
    - System.Windows.Forms.Control.RescaleConstantsForDpi(System.Int32,System.Int32)
    - System.Windows.Forms.Control.PerformLayout
    - System.Windows.Forms.Control.PerformLayout(System.Windows.Forms.Control,System.String)
    - System.Windows.Forms.Control.PointToClient(System.Drawing.Point)
    - System.Windows.Forms.Control.PointToScreen(System.Drawing.Point)
    - System.Windows.Forms.Control.PreProcessMessage(System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.PreProcessControlMessage(System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.ProcessKeyEventArgs(System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.ProcessKeyMessage(System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.RaiseDragEvent(System.Object,System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.RaisePaintEvent(System.Object,System.Windows.Forms.PaintEventArgs)
    - System.Windows.Forms.Control.RecreateHandle
    - System.Windows.Forms.Control.RectangleToClient(System.Drawing.Rectangle)
    - System.Windows.Forms.Control.RectangleToScreen(System.Drawing.Rectangle)
    - System.Windows.Forms.Control.ReflectMessage(System.IntPtr,System.Windows.Forms.Message@)
    - System.Windows.Forms.Control.Refresh
    - System.Windows.Forms.Control.ResetMouseEventArgs
    - System.Windows.Forms.Control.ResetText
    - System.Windows.Forms.Control.ResumeLayout
    - System.Windows.Forms.Control.ResumeLayout(System.Boolean)
    - System.Windows.Forms.Control.Scale(System.Drawing.SizeF)
    - System.Windows.Forms.Control.Select
    - System.Windows.Forms.Control.SelectNextControl(System.Windows.Forms.Control,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
    - System.Windows.Forms.Control.SendToBack
    - System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32)
    - System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
    - System.Windows.Forms.Control.SizeFromClientSize(System.Drawing.Size)
    - System.Windows.Forms.Control.SetStyle(System.Windows.Forms.ControlStyles,System.Boolean)
    - System.Windows.Forms.Control.SetTopLevel(System.Boolean)
    - System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.HorizontalAlignment)
    - System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.LeftRightAlignment)
    - System.Windows.Forms.Control.RtlTranslateAlignment(System.Drawing.ContentAlignment)
    - System.Windows.Forms.Control.RtlTranslateHorizontal(System.Windows.Forms.HorizontalAlignment)
    - System.Windows.Forms.Control.RtlTranslateLeftRight(System.Windows.Forms.LeftRightAlignment)
    - System.Windows.Forms.Control.RtlTranslateContent(System.Drawing.ContentAlignment)
    - System.Windows.Forms.Control.Show
    - System.Windows.Forms.Control.SuspendLayout
    - System.Windows.Forms.Control.Update
    - System.Windows.Forms.Control.UpdateBounds
    - System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32)
    - System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
    - System.Windows.Forms.Control.UpdateZOrder
    - System.Windows.Forms.Control.UpdateStyles
    - System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragEnter(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragOver(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragLeave(System.EventArgs)
    - System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragDrop(System.Windows.Forms.DragEventArgs)
    - System.Windows.Forms.Control.OnImeModeChanged(System.EventArgs)
    - System.Windows.Forms.Control.AccessibilityObject
    - System.Windows.Forms.Control.AccessibleDefaultActionDescription
    - System.Windows.Forms.Control.AccessibleDescription
    - System.Windows.Forms.Control.AccessibleName
    - System.Windows.Forms.Control.AccessibleRole
    - System.Windows.Forms.Control.AllowDrop
    - System.Windows.Forms.Control.Anchor
    - System.Windows.Forms.Control.AutoScrollOffset
    - System.Windows.Forms.Control.LayoutEngine
    - System.Windows.Forms.Control.BackgroundImage
    - System.Windows.Forms.Control.BackgroundImageLayout
    - System.Windows.Forms.Control.Bottom
    - System.Windows.Forms.Control.Bounds
    - System.Windows.Forms.Control.CanFocus
    - System.Windows.Forms.Control.CanRaiseEvents
    - System.Windows.Forms.Control.CanSelect
    - System.Windows.Forms.Control.Capture
    - System.Windows.Forms.Control.CausesValidation
    - System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls
    - System.Windows.Forms.Control.ClientRectangle
    - System.Windows.Forms.Control.CompanyName
    - System.Windows.Forms.Control.ContainsFocus
    - System.Windows.Forms.Control.ContextMenu
    - System.Windows.Forms.Control.ContextMenuStrip
    - System.Windows.Forms.Control.Controls
    - System.Windows.Forms.Control.Created
    - System.Windows.Forms.Control.Cursor
    - System.Windows.Forms.Control.DataBindings
    - System.Windows.Forms.Control.DefaultBackColor
    - System.Windows.Forms.Control.DefaultCursor
    - System.Windows.Forms.Control.DefaultFont
    - System.Windows.Forms.Control.DefaultForeColor
    - System.Windows.Forms.Control.DefaultMargin
    - System.Windows.Forms.Control.DefaultMaximumSize
    - System.Windows.Forms.Control.DefaultMinimumSize
    - System.Windows.Forms.Control.DefaultPadding
    - System.Windows.Forms.Control.DeviceDpi
    - System.Windows.Forms.Control.IsDisposed
    - System.Windows.Forms.Control.Disposing
    - System.Windows.Forms.Control.Dock
    - System.Windows.Forms.Control.DoubleBuffered
    - System.Windows.Forms.Control.Enabled
    - System.Windows.Forms.Control.Focused
    - System.Windows.Forms.Control.Font
    - System.Windows.Forms.Control.FontHeight
    - System.Windows.Forms.Control.ForeColor
    - System.Windows.Forms.Control.Handle
    - System.Windows.Forms.Control.HasChildren
    - System.Windows.Forms.Control.Height
    - System.Windows.Forms.Control.IsHandleCreated
    - System.Windows.Forms.Control.InvokeRequired
    - System.Windows.Forms.Control.IsAccessible
    - System.Windows.Forms.Control.IsMirrored
    - System.Windows.Forms.Control.Left
    - System.Windows.Forms.Control.Margin
    - System.Windows.Forms.Control.ModifierKeys
    - System.Windows.Forms.Control.MouseButtons
    - System.Windows.Forms.Control.MousePosition
    - System.Windows.Forms.Control.Name
    - System.Windows.Forms.Control.Parent
    - System.Windows.Forms.Control.ProductName
    - System.Windows.Forms.Control.ProductVersion
    - System.Windows.Forms.Control.RecreatingHandle
    - System.Windows.Forms.Control.Region
    - System.Windows.Forms.Control.RenderRightToLeft
    - System.Windows.Forms.Control.ResizeRedraw
    - System.Windows.Forms.Control.Right
    - System.Windows.Forms.Control.RightToLeft
    - System.Windows.Forms.Control.ScaleChildren
    - System.Windows.Forms.Control.Site
    - System.Windows.Forms.Control.TabIndex
    - System.Windows.Forms.Control.TabStop
    - System.Windows.Forms.Control.Tag
    - System.Windows.Forms.Control.Top
    - System.Windows.Forms.Control.TopLevelControl
    - System.Windows.Forms.Control.ShowKeyboardCues
    - System.Windows.Forms.Control.ShowFocusCues
    - System.Windows.Forms.Control.UseWaitCursor
    - System.Windows.Forms.Control.Visible
    - System.Windows.Forms.Control.Width
    - System.Windows.Forms.Control.PreferredSize
    - System.Windows.Forms.Control.Padding
    - System.Windows.Forms.Control.ImeMode
    - System.Windows.Forms.Control.ImeModeBase
    - System.Windows.Forms.Control.PropagatingImeMode
    - System.Windows.Forms.Control.BackColorChanged
    - System.Windows.Forms.Control.BackgroundImageChanged
    - System.Windows.Forms.Control.BackgroundImageLayoutChanged
    - System.Windows.Forms.Control.BindingContextChanged
    - System.Windows.Forms.Control.CausesValidationChanged
    - System.Windows.Forms.Control.ClientSizeChanged
    - System.Windows.Forms.Control.ContextMenuChanged
    - System.Windows.Forms.Control.ContextMenuStripChanged
    - System.Windows.Forms.Control.CursorChanged
    - System.Windows.Forms.Control.DockChanged
    - System.Windows.Forms.Control.EnabledChanged
    - System.Windows.Forms.Control.FontChanged
    - System.Windows.Forms.Control.ForeColorChanged
    - System.Windows.Forms.Control.LocationChanged
    - System.Windows.Forms.Control.MarginChanged
    - System.Windows.Forms.Control.RegionChanged
    - System.Windows.Forms.Control.RightToLeftChanged
    - System.Windows.Forms.Control.SizeChanged
    - System.Windows.Forms.Control.TabIndexChanged
    - System.Windows.Forms.Control.TabStopChanged
    - System.Windows.Forms.Control.TextChanged
    - System.Windows.Forms.Control.VisibleChanged
    - System.Windows.Forms.Control.Click
    - System.Windows.Forms.Control.ControlAdded
    - System.Windows.Forms.Control.ControlRemoved
    - System.Windows.Forms.Control.DragDrop
    - System.Windows.Forms.Control.DragEnter
    - System.Windows.Forms.Control.DragOver
    - System.Windows.Forms.Control.DragLeave
    - System.Windows.Forms.Control.GiveFeedback
    - System.Windows.Forms.Control.HandleCreated
    - System.Windows.Forms.Control.HandleDestroyed
    - System.Windows.Forms.Control.HelpRequested
    - System.Windows.Forms.Control.Invalidated
    - System.Windows.Forms.Control.PaddingChanged
    - System.Windows.Forms.Control.Paint
    - System.Windows.Forms.Control.QueryContinueDrag
    - System.Windows.Forms.Control.QueryAccessibilityHelp
    - System.Windows.Forms.Control.DoubleClick
    - System.Windows.Forms.Control.Enter
    - System.Windows.Forms.Control.GotFocus
    - System.Windows.Forms.Control.KeyDown
    - System.Windows.Forms.Control.KeyPress
    - System.Windows.Forms.Control.KeyUp
    - System.Windows.Forms.Control.Layout
    - System.Windows.Forms.Control.Leave
    - System.Windows.Forms.Control.LostFocus
    - System.Windows.Forms.Control.MouseClick
    - System.Windows.Forms.Control.MouseDoubleClick
    - System.Windows.Forms.Control.MouseCaptureChanged
    - System.Windows.Forms.Control.MouseDown
    - System.Windows.Forms.Control.MouseEnter
    - System.Windows.Forms.Control.MouseLeave
    - System.Windows.Forms.Control.DpiChangedBeforeParent
    - System.Windows.Forms.Control.DpiChangedAfterParent
    - System.Windows.Forms.Control.MouseHover
    - System.Windows.Forms.Control.MouseMove
    - System.Windows.Forms.Control.MouseUp
    - System.Windows.Forms.Control.MouseWheel
    - System.Windows.Forms.Control.Move
    - System.Windows.Forms.Control.PreviewKeyDown
    - System.Windows.Forms.Control.Resize
    - System.Windows.Forms.Control.ChangeUICues
    - System.Windows.Forms.Control.StyleChanged
    - System.Windows.Forms.Control.SystemColorsChanged
    - System.Windows.Forms.Control.Validating
    - System.Windows.Forms.Control.Validated
    - System.Windows.Forms.Control.ParentChanged
    - System.Windows.Forms.Control.ImeModeChanged
    - System.ComponentModel.Component.Dispose
    - System.ComponentModel.Component.GetService(System.Type)
    - System.ComponentModel.Component.Events
    - System.ComponentModel.Component.Container
    - System.ComponentModel.Component.DesignMode
    - System.ComponentModel.Component.Disposed
    - System.MarshalByRefObject.MemberwiseClone(System.Boolean)
    - System.MarshalByRefObject.GetLifetimeService
    - System.MarshalByRefObject.InitializeLifetimeService
    - System.MarshalByRefObject.CreateObjRef(System.Type)
    - System.Object.Equals(System.Object)
    - System.Object.Equals(System.Object,System.Object)
    - System.Object.ReferenceEquals(System.Object,System.Object)
    - System.Object.GetHashCode
    - System.Object.GetType
    - System.Object.MemberwiseClone
    modifiers:
      CSharp:
      - public
      - class
      VB:
      - Public
      - Class
    items:
    - id: WyświetlanieDanych.Form2.Name1
      commentId: P:WyświetlanieDanych.Form2.Name1
      language: CSharp
      name:
        CSharp: Name1
        VB: Name1
      nameWithType:
        CSharp: Form2.Name1
        VB: Form2.Name1
      qualifiedName:
        CSharp: WyświetlanieDanych.Form2.Name1
        VB: WyświetlanieDanych.Form2.Name1
      type: Property
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form2.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: Name1
        path: Forms/Form2.cs
        startLine: 12
      syntax:
        content:
          CSharp: public string Name1 { get; set; }
          VB: Public Property Name1 As String
        parameters: []
        return:
          type: System.String
      overload: WyświetlanieDanych.Form2.Name1*
      modifiers:
        CSharp:
        - public
        - get
        - set
        VB:
        - Public
    - id: WyświetlanieDanych.Form2.Name2
      commentId: P:WyświetlanieDanych.Form2.Name2
      language: CSharp
      name:
        CSharp: Name2
        VB: Name2
      nameWithType:
        CSharp: Form2.Name2
        VB: Form2.Name2
      qualifiedName:
        CSharp: WyświetlanieDanych.Form2.Name2
        VB: WyświetlanieDanych.Form2.Name2
      type: Property
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form2.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: Name2
        path: Forms/Form2.cs
        startLine: 13
      syntax:
        content:
          CSharp: public string Name2 { get; set; }
          VB: Public Property Name2 As String
        parameters: []
        return:
          type: System.String
      overload: WyświetlanieDanych.Form2.Name2*
      modifiers:
        CSharp:
        - public
        - get
        - set
        VB:
        - Public
    - id: WyświetlanieDanych.Form2.Name3
      commentId: P:WyświetlanieDanych.Form2.Name3
      language: CSharp
      name:
        CSharp: Name3
        VB: Name3
      nameWithType:
        CSharp: Form2.Name3
        VB: Form2.Name3
      qualifiedName:
        CSharp: WyświetlanieDanych.Form2.Name3
        VB: WyświetlanieDanych.Form2.Name3
      type: Property
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form2.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: Name3
        path: Forms/Form2.cs
        startLine: 14
      syntax:
        content:
          CSharp: public string Name3 { get; set; }
          VB: Public Property Name3 As String
        parameters: []
        return:
          type: System.String
      overload: WyświetlanieDanych.Form2.Name3*
      modifiers:
        CSharp:
        - public
        - get
        - set
        VB:
        - Public
    - id: WyświetlanieDanych.Form2.#ctor
      commentId: M:WyświetlanieDanych.Form2.#ctor
      language: CSharp
      name:
        CSharp: Form2()
        VB: Form2()
      nameWithType:
        CSharp: Form2.Form2()
        VB: Form2.Form2()
      qualifiedName:
        CSharp: WyświetlanieDanych.Form2.Form2()
        VB: WyświetlanieDanych.Form2.Form2()
      type: Constructor
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form2.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: .ctor
        path: Forms/Form2.cs
        startLine: 18
      syntax:
        content:
          CSharp: public Form2()
          VB: Public Sub New
      overload: WyświetlanieDanych.Form2.#ctor*
      modifiers:
        CSharp:
        - public
        VB:
        - Public
    - id: WyświetlanieDanych.Form2.Dispose(System.Boolean)
      commentId: M:WyświetlanieDanych.Form2.Dispose(System.Boolean)
      language: CSharp
      name:
        CSharp: Dispose(Boolean)
        VB: Dispose(Boolean)
      nameWithType:
        CSharp: Form2.Dispose(Boolean)
        VB: Form2.Dispose(Boolean)
      qualifiedName:
        CSharp: WyświetlanieDanych.Form2.Dispose(System.Boolean)
        VB: WyświetlanieDanych.Form2.Dispose(System.Boolean)
      type: Method
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form2.Designer.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: Dispose
        path: Forms/Form2.Designer.cs
        startLine: 13
      summary: "\nClean up any resources being used.\n"
      example: []
      syntax:
        content:
          CSharp: protected override void Dispose(bool disposing)
          VB: Protected Overrides Sub Dispose(disposing As Boolean)
        parameters:
        - id: disposing
          type: System.Boolean
          description: true if managed resources should be disposed; otherwise, false.
      overload: WyświetlanieDanych.Form2.Dispose*
      overridden: System.Windows.Forms.Form.Dispose(System.Boolean)
      modifiers:
        CSharp:
        - protected
        - override
        VB:
        - Protected
        - Overrides
    - id: WyświetlanieDanych.Form2.circularProgressBar1
      commentId: F:WyświetlanieDanych.Form2.circularProgressBar1
      language: CSharp
      name:
        CSharp: circularProgressBar1
        VB: circularProgressBar1
      nameWithType:
        CSharp: Form2.circularProgressBar1
        VB: Form2.circularProgressBar1
      qualifiedName:
        CSharp: WyświetlanieDanych.Form2.circularProgressBar1
        VB: WyświetlanieDanych.Form2.circularProgressBar1
      type: Field
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form2.Designer.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: circularProgressBar1
        path: Forms/Form2.Designer.cs
        startLine: 195
      syntax:
        content:
          CSharp: public CircularProgressBar.CircularProgressBar circularProgressBar1
          VB: Public circularProgressBar1 As CircularProgressBar.CircularProgressBar
        return:
          type: CircularProgressBar.CircularProgressBar
      modifiers:
        CSharp:
        - public
        VB:
        - Public
    - id: WyświetlanieDanych.Form2.trackBar1
      commentId: F:WyświetlanieDanych.Form2.trackBar1
      language: CSharp
      name:
        CSharp: trackBar1
        VB: trackBar1
      nameWithType:
        CSharp: Form2.trackBar1
        VB: Form2.trackBar1
      qualifiedName:
        CSharp: WyświetlanieDanych.Form2.trackBar1
        VB: WyświetlanieDanych.Form2.trackBar1
      type: Field
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form2.Designer.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: trackBar1
        path: Forms/Form2.Designer.cs
        startLine: 196
      syntax:
        content:
          CSharp: public TrackBar trackBar1
          VB: Public trackBar1 As TrackBar
        return:
          type: System.Windows.Forms.TrackBar
      modifiers:
        CSharp:
        - public
        VB:
        - Public
    - id: WyświetlanieDanych.Form2.chart1
      commentId: F:WyświetlanieDanych.Form2.chart1
      language: CSharp
      name:
        CSharp: chart1
        VB: chart1
      nameWithType:
        CSharp: Form2.chart1
        VB: Form2.chart1
      qualifiedName:
        CSharp: WyświetlanieDanych.Form2.chart1
        VB: WyświetlanieDanych.Form2.chart1
      type: Field
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Forms/Form2.Designer.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: chart1
        path: Forms/Form2.Designer.cs
        startLine: 197
      syntax:
        content:
          CSharp: public Chart chart1
          VB: Public chart1 As Chart
        return:
          type: System.Windows.Forms.DataVisualization.Charting.Chart
      modifiers:
        CSharp:
        - public
        VB:
        - Public
  - id: WyświetlanieDanych.OdbieranieDanych
    commentId: T:WyświetlanieDanych.OdbieranieDanych
    language: CSharp
    name:
      CSharp: OdbieranieDanych
      VB: OdbieranieDanych
    nameWithType:
      CSharp: OdbieranieDanych
      VB: OdbieranieDanych
    qualifiedName:
      CSharp: WyświetlanieDanych.OdbieranieDanych
      VB: WyświetlanieDanych.OdbieranieDanych
    type: Class
    assemblies:
    - WyświetlanieDanych
    namespace: WyświetlanieDanych
    source:
      remote:
        path: Forms/WyświetlanieDanych/KomponentOdbieranie/OdbieranieDanych.cs
        branch: pawel_final
        repo: https://github.com/mateuszigbt/komponenty
      id: OdbieranieDanych
      path: KomponentOdbieranie/OdbieranieDanych.cs
      startLine: 9
    summary: "\nKlasa odpowiedzialna za odbieranych danych z arduino. \n"
    example: []
    syntax:
      content:
        CSharp: public class OdbieranieDanych
        VB: Public Class OdbieranieDanych
    inheritance:
    - System.Object
    inheritedMembers:
    - System.Object.ToString
    - System.Object.Equals(System.Object)
    - System.Object.Equals(System.Object,System.Object)
    - System.Object.ReferenceEquals(System.Object,System.Object)
    - System.Object.GetHashCode
    - System.Object.GetType
    - System.Object.MemberwiseClone
    modifiers:
      CSharp:
      - public
      - class
      VB:
      - Public
      - Class
    items:
    - id: WyświetlanieDanych.OdbieranieDanych.Wartosci
      commentId: P:WyświetlanieDanych.OdbieranieDanych.Wartosci
      language: CSharp
      name:
        CSharp: Wartosci
        VB: Wartosci
      nameWithType:
        CSharp: OdbieranieDanych.Wartosci
        VB: OdbieranieDanych.Wartosci
      qualifiedName:
        CSharp: WyświetlanieDanych.OdbieranieDanych.Wartosci
        VB: WyświetlanieDanych.OdbieranieDanych.Wartosci
      type: Property
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/KomponentOdbieranie/OdbieranieDanych.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: Wartosci
        path: KomponentOdbieranie/OdbieranieDanych.cs
        startLine: 14
      example: []
      syntax:
        content:
          CSharp: public static List<string> Wartosci { get; set; }
          VB: Public Shared Property Wartosci As List(Of String)
        parameters: []
        return:
          type: System.Collections.Generic.List{System.String}
          description: Przypisane dane z prywatnej listy
      overload: WyświetlanieDanych.OdbieranieDanych.Wartosci*
      modifiers:
        CSharp:
        - public
        - static
        - get
        - set
        VB:
        - Public
        - Shared
    - id: WyświetlanieDanych.OdbieranieDanych.dateTime
      commentId: P:WyświetlanieDanych.OdbieranieDanych.dateTime
      language: CSharp
      name:
        CSharp: dateTime
        VB: dateTime
      nameWithType:
        CSharp: OdbieranieDanych.dateTime
        VB: OdbieranieDanych.dateTime
      qualifiedName:
        CSharp: WyświetlanieDanych.OdbieranieDanych.dateTime
        VB: WyświetlanieDanych.OdbieranieDanych.dateTime
      type: Property
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/KomponentOdbieranie/OdbieranieDanych.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: dateTime
        path: KomponentOdbieranie/OdbieranieDanych.cs
        startLine: 22
      example: []
      syntax:
        content:
          CSharp: public static DateTime dateTime { get; set; }
          VB: Public Shared Property dateTime As Date
        parameters: []
        return:
          type: System.DateTime
          description: Pobiera obiekt ustawiony na bieżącą DateTime datę i godzinę na tym komputerze, wyrażony jako czas lokalny
      overload: WyświetlanieDanych.OdbieranieDanych.dateTime*
      modifiers:
        CSharp:
        - public
        - static
        - get
        - set
        VB:
        - Public
        - Shared
    - id: WyświetlanieDanych.OdbieranieDanych.PortName
      commentId: P:WyświetlanieDanych.OdbieranieDanych.PortName
      language: CSharp
      name:
        CSharp: PortName
        VB: PortName
      nameWithType:
        CSharp: OdbieranieDanych.PortName
        VB: OdbieranieDanych.PortName
      qualifiedName:
        CSharp: WyświetlanieDanych.OdbieranieDanych.PortName
        VB: WyświetlanieDanych.OdbieranieDanych.PortName
      type: Property
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/KomponentOdbieranie/OdbieranieDanych.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: PortName
        path: KomponentOdbieranie/OdbieranieDanych.cs
        startLine: 24
      example: []
      syntax:
        content:
          CSharp: public string PortName { get; set; }
          VB: Public Property PortName As String
        parameters: []
        return:
          type: System.String
          description: PortName = portname
      overload: WyświetlanieDanych.OdbieranieDanych.PortName*
      modifiers:
        CSharp:
        - public
        - get
        - set
        VB:
        - Public
    - id: WyświetlanieDanych.OdbieranieDanych.#ctor(System.String)
      commentId: M:WyświetlanieDanych.OdbieranieDanych.#ctor(System.String)
      language: CSharp
      name:
        CSharp: OdbieranieDanych(String)
        VB: OdbieranieDanych(String)
      nameWithType:
        CSharp: OdbieranieDanych.OdbieranieDanych(String)
        VB: OdbieranieDanych.OdbieranieDanych(String)
      qualifiedName:
        CSharp: WyświetlanieDanych.OdbieranieDanych.OdbieranieDanych(System.String)
        VB: WyświetlanieDanych.OdbieranieDanych.OdbieranieDanych(System.String)
      type: Constructor
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/KomponentOdbieranie/OdbieranieDanych.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: .ctor
        path: KomponentOdbieranie/OdbieranieDanych.cs
        startLine: 29
      summary: "\n\n"
      example: []
      syntax:
        content:
          CSharp: public OdbieranieDanych(string portname)
          VB: Public Sub New(portname As String)
        parameters:
        - id: portname
          type: System.String
          description: Konstruktor zawiera portName odpowiedzialny za przypisanie konkretnego COM.
      overload: WyświetlanieDanych.OdbieranieDanych.#ctor*
      modifiers:
        CSharp:
        - public
        VB:
        - Public
    - id: WyświetlanieDanych.OdbieranieDanych.DataReceived
      commentId: E:WyświetlanieDanych.OdbieranieDanych.DataReceived
      language: CSharp
      name:
        CSharp: DataReceived
        VB: DataReceived
      nameWithType:
        CSharp: OdbieranieDanych.DataReceived
        VB: OdbieranieDanych.DataReceived
      qualifiedName:
        CSharp: WyświetlanieDanych.OdbieranieDanych.DataReceived
        VB: WyświetlanieDanych.OdbieranieDanych.DataReceived
      type: Event
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/KomponentOdbieranie/OdbieranieDanych.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: DataReceived
        path: KomponentOdbieranie/OdbieranieDanych.cs
        startLine: 58
      example: []
      syntax:
        content:
          CSharp: public event EventHandler DataReceived
          VB: Public Event DataReceived As EventHandler
        return:
          type: System.EventHandler
          description: Metoda przypisana do delegata EventHandler jest wywoływana w metodzie serialPort_DataRecived
      modifiers:
        CSharp:
        - public
        VB:
        - Public
    - id: WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived(System.Object,System.IO.Ports.SerialDataReceivedEventArgs)
      commentId: M:WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived(System.Object,System.IO.Ports.SerialDataReceivedEventArgs)
      language: CSharp
      name:
        CSharp: serialPort_DataRecived(Object, SerialDataReceivedEventArgs)
        VB: serialPort_DataRecived(Object, SerialDataReceivedEventArgs)
      nameWithType:
        CSharp: OdbieranieDanych.serialPort_DataRecived(Object, SerialDataReceivedEventArgs)
        VB: OdbieranieDanych.serialPort_DataRecived(Object, SerialDataReceivedEventArgs)
      qualifiedName:
        CSharp: WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived(System.Object, System.IO.Ports.SerialDataReceivedEventArgs)
        VB: WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived(System.Object, System.IO.Ports.SerialDataReceivedEventArgs)
      type: Method
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/KomponentOdbieranie/OdbieranieDanych.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: serialPort_DataRecived
        path: KomponentOdbieranie/OdbieranieDanych.cs
        startLine: 75
      summary: "\n\n"
      example:
      - "\nTen przykład pokazuje jak są przypisywane dane z arduino do listy oraz wykonania delegata w wątku\n<pre><code>for (int i =0; a.Length; i++)\n    {\n        wartosci.Add(a[i]);\n        Console.WriteLine(a[i]);\n    }\nhandler?.Invoke(this, e)</code></pre>\n"
      syntax:
        content:
          CSharp: public void serialPort_DataRecived(object sender, SerialDataReceivedEventArgs e)
          VB: Public Sub serialPort_DataRecived(sender As Object, e As SerialDataReceivedEventArgs)
        parameters:
        - id: sender
          type: System.Object
          description: Źródło zdarzenia
        - id: e
          type: System.IO.Ports.SerialDataReceivedEventArgs
          description: Obiekt, który nie zawiera żadnych danych zdarzenia
      overload: WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived*
      modifiers:
        CSharp:
        - public
        VB:
        - Public
  - id: WyświetlanieDanych.Program
    commentId: T:WyświetlanieDanych.Program
    language: CSharp
    name:
      CSharp: Program
      VB: Program
    nameWithType:
      CSharp: Program
      VB: Program
    qualifiedName:
      CSharp: WyświetlanieDanych.Program
      VB: WyświetlanieDanych.Program
    type: Class
    assemblies:
    - WyświetlanieDanych
    namespace: WyświetlanieDanych
    source:
      remote:
        path: Forms/WyświetlanieDanych/Program.cs
        branch: pawel_final
        repo: https://github.com/mateuszigbt/komponenty
      id: Program
      path: Program.cs
      startLine: 11
    syntax:
      content:
        CSharp: public static class Program
        VB: Public Module Program
    inheritance:
    - System.Object
    inheritedMembers:
    - System.Object.ToString
    - System.Object.Equals(System.Object)
    - System.Object.Equals(System.Object,System.Object)
    - System.Object.ReferenceEquals(System.Object,System.Object)
    - System.Object.GetHashCode
    - System.Object.GetType
    - System.Object.MemberwiseClone
    modifiers:
      CSharp:
      - public
      - static
      - class
      VB:
      - Public
      - Module
    items:
    - id: WyświetlanieDanych.Program.Main
      commentId: M:WyświetlanieDanych.Program.Main
      language: CSharp
      name:
        CSharp: Main()
        VB: Main()
      nameWithType:
        CSharp: Program.Main()
        VB: Program.Main()
      qualifiedName:
        CSharp: WyświetlanieDanych.Program.Main()
        VB: WyświetlanieDanych.Program.Main()
      type: Method
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych
      source:
        remote:
          path: Forms/WyświetlanieDanych/Program.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: Main
        path: Program.cs
        startLine: 25
      summary: "\nGłówny punkt wejścia dla aplikacji oraz serializacja\n"
      example:
      - "\nSerializacja\n<pre><code>Stream str1 = new FileStream(@&quot;example.txt&quot;, FileMode.Open, FileAccess.Read);\nIFormatter format = new BinaryFormatter();\nform1 = (Form1) format.Deserialize(str1);\nstr1.Close();</code></pre>\n"
      syntax:
        content:
          CSharp: >-
            [STAThread]

            public static void Main()
          VB: >-
            <STAThread>

            Public Shared Sub Main
      overload: WyświetlanieDanych.Program.Main*
      attributes:
      - type: System.STAThreadAttribute
        ctor: System.STAThreadAttribute.#ctor
        arguments: []
      modifiers:
        CSharp:
        - public
        - static
        VB:
        - Public
        - Shared
- id: WyświetlanieDanych.KomponentOdbieranie
  commentId: N:WyświetlanieDanych.KomponentOdbieranie
  language: CSharp
  name:
    CSharp: WyświetlanieDanych.KomponentOdbieranie
    VB: WyświetlanieDanych.KomponentOdbieranie
  nameWithType:
    CSharp: WyświetlanieDanych.KomponentOdbieranie
    VB: WyświetlanieDanych.KomponentOdbieranie
  qualifiedName:
    CSharp: WyświetlanieDanych.KomponentOdbieranie
    VB: WyświetlanieDanych.KomponentOdbieranie
  type: Namespace
  assemblies:
  - WyświetlanieDanych
  modifiers: {}
  items:
  - id: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
    commentId: T:WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
    language: CSharp
    name:
      CSharp: Run_odbieranie
      VB: Run_odbieranie
    nameWithType:
      CSharp: Run_odbieranie
      VB: Run_odbieranie
    qualifiedName:
      CSharp: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
      VB: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
    type: Class
    assemblies:
    - WyświetlanieDanych
    namespace: WyświetlanieDanych.KomponentOdbieranie
    source:
      remote:
        path: Forms/WyświetlanieDanych/KomponentOdbieranie/Run-odbieranie.cs
        branch: pawel_final
        repo: https://github.com/mateuszigbt/komponenty
      id: Run_odbieranie
      path: KomponentOdbieranie/Run-odbieranie.cs
      startLine: 8
    summary: "\nKlasa odpowiedzialna za wywołanie danych w konsoli.\n"
    example: []
    syntax:
      content:
        CSharp: public static class Run_odbieranie
        VB: Public Module Run_odbieranie
    inheritance:
    - System.Object
    inheritedMembers:
    - System.Object.ToString
    - System.Object.Equals(System.Object)
    - System.Object.Equals(System.Object,System.Object)
    - System.Object.ReferenceEquals(System.Object,System.Object)
    - System.Object.GetHashCode
    - System.Object.GetType
    - System.Object.MemberwiseClone
    modifiers:
      CSharp:
      - public
      - static
      - class
      VB:
      - Public
      - Module
    items:
    - id: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main
      commentId: M:WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main
      language: CSharp
      name:
        CSharp: Main()
        VB: Main()
      nameWithType:
        CSharp: Run_odbieranie.Main()
        VB: Run_odbieranie.Main()
      qualifiedName:
        CSharp: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main()
        VB: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main()
      type: Method
      assemblies:
      - WyświetlanieDanych
      namespace: WyświetlanieDanych.KomponentOdbieranie
      source:
        remote:
          path: Forms/WyświetlanieDanych/KomponentOdbieranie/Run-odbieranie.cs
          branch: pawel_final
          repo: https://github.com/mateuszigbt/komponenty
        id: Main
        path: KomponentOdbieranie/Run-odbieranie.cs
        startLine: 28
      summary: "\nMetoda pobiera zmienną wartosc z klasy OdbieranieDanych\n"
      example:
      - "\nTen przyklad pokazuje jak są wyświetlane dane poprzez pobieranie danych z obiektu. Pętla while ma wartość true aby wyświetlać dane w nieskończoność. Foreach pozwala na wykaz danych z listy które przybrał. Delay został użyty aby opóźnić wyświetlanie danych. \n<pre><code>OdbieranieDanych dane = new OdbieranieDanych(&quot;Przypisany COM&quot;);\nwhile (true)\n{\nforeach(var item in OdbieranieDanych.Wartosci)\n{\nConsole.WriteLine(item);\n}\nTask.Delay(1000).Wait();\n}</code></pre>\n"
      syntax:
        content:
          CSharp: >-
            [STAThread]

            public static void Main()
          VB: >-
            <STAThread>

            Public Shared Sub Main
      overload: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main*
      attributes:
      - type: System.STAThreadAttribute
        ctor: System.STAThreadAttribute.#ctor
        arguments: []
      modifiers:
        CSharp:
        - public
        - static
        VB:
        - Public
        - Shared
references:
  System.Windows.Forms:
    name:
      CSharp:
      - name: System.Windows.Forms
        nameWithType: System.Windows.Forms
        qualifiedName: System.Windows.Forms
        isExternal: true
      VB:
      - name: System.Windows.Forms
        nameWithType: System.Windows.Forms
        qualifiedName: System.Windows.Forms
    isDefinition: true
    commentId: N:System.Windows.Forms
  System.Windows.Forms.Form:
    name:
      CSharp:
      - id: System.Windows.Forms.Form
        name: Form
        nameWithType: Form
        qualifiedName: System.Windows.Forms.Form
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form
        name: Form
        nameWithType: Form
        qualifiedName: System.Windows.Forms.Form
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.Form
  System.Windows.Forms.Form.SetVisibleCore(System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.SetVisibleCore(System.Boolean)
        name: SetVisibleCore
        nameWithType: Form.SetVisibleCore
        qualifiedName: System.Windows.Forms.Form.SetVisibleCore
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.SetVisibleCore(System.Boolean)
        name: SetVisibleCore
        nameWithType: Form.SetVisibleCore
        qualifiedName: System.Windows.Forms.Form.SetVisibleCore
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.SetVisibleCore(System.Boolean)
  System.Windows.Forms.Form.Activate:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Activate
        name: Activate
        nameWithType: Form.Activate
        qualifiedName: System.Windows.Forms.Form.Activate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.Activate
        name: Activate
        nameWithType: Form.Activate
        qualifiedName: System.Windows.Forms.Form.Activate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.Activate
  System.Windows.Forms.Form.ActivateMdiChild(System.Windows.Forms.Form):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ActivateMdiChild(System.Windows.Forms.Form)
        name: ActivateMdiChild
        nameWithType: Form.ActivateMdiChild
        qualifiedName: System.Windows.Forms.Form.ActivateMdiChild
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Form
        name: Form
        nameWithType: Form
        qualifiedName: System.Windows.Forms.Form
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ActivateMdiChild(System.Windows.Forms.Form)
        name: ActivateMdiChild
        nameWithType: Form.ActivateMdiChild
        qualifiedName: System.Windows.Forms.Form.ActivateMdiChild
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Form
        name: Form
        nameWithType: Form
        qualifiedName: System.Windows.Forms.Form
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ActivateMdiChild(System.Windows.Forms.Form)
  System.Windows.Forms.Form.AddOwnedForm(System.Windows.Forms.Form):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AddOwnedForm(System.Windows.Forms.Form)
        name: AddOwnedForm
        nameWithType: Form.AddOwnedForm
        qualifiedName: System.Windows.Forms.Form.AddOwnedForm
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Form
        name: Form
        nameWithType: Form
        qualifiedName: System.Windows.Forms.Form
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.AddOwnedForm(System.Windows.Forms.Form)
        name: AddOwnedForm
        nameWithType: Form.AddOwnedForm
        qualifiedName: System.Windows.Forms.Form.AddOwnedForm
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Form
        name: Form
        nameWithType: Form
        qualifiedName: System.Windows.Forms.Form
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.AddOwnedForm(System.Windows.Forms.Form)
  System.Windows.Forms.Form.AdjustFormScrollbars(System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AdjustFormScrollbars(System.Boolean)
        name: AdjustFormScrollbars
        nameWithType: Form.AdjustFormScrollbars
        qualifiedName: System.Windows.Forms.Form.AdjustFormScrollbars
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.AdjustFormScrollbars(System.Boolean)
        name: AdjustFormScrollbars
        nameWithType: Form.AdjustFormScrollbars
        qualifiedName: System.Windows.Forms.Form.AdjustFormScrollbars
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.AdjustFormScrollbars(System.Boolean)
  System.Windows.Forms.Form.Close:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Close
        name: Close
        nameWithType: Form.Close
        qualifiedName: System.Windows.Forms.Form.Close
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.Close
        name: Close
        nameWithType: Form.Close
        qualifiedName: System.Windows.Forms.Form.Close
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.Close
  System.Windows.Forms.Form.CreateControlsInstance:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.CreateControlsInstance
        name: CreateControlsInstance
        nameWithType: Form.CreateControlsInstance
        qualifiedName: System.Windows.Forms.Form.CreateControlsInstance
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.CreateControlsInstance
        name: CreateControlsInstance
        nameWithType: Form.CreateControlsInstance
        qualifiedName: System.Windows.Forms.Form.CreateControlsInstance
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.CreateControlsInstance
  System.Windows.Forms.Form.CreateHandle:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.CreateHandle
        name: CreateHandle
        nameWithType: Form.CreateHandle
        qualifiedName: System.Windows.Forms.Form.CreateHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.CreateHandle
        name: CreateHandle
        nameWithType: Form.CreateHandle
        qualifiedName: System.Windows.Forms.Form.CreateHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.CreateHandle
  System.Windows.Forms.Form.DefWndProc(System.Windows.Forms.Message@):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.DefWndProc(System.Windows.Forms.Message@)
        name: DefWndProc
        nameWithType: Form.DefWndProc
        qualifiedName: System.Windows.Forms.Form.DefWndProc
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.DefWndProc(System.Windows.Forms.Message@)
        name: DefWndProc
        nameWithType: Form.DefWndProc
        qualifiedName: System.Windows.Forms.Form.DefWndProc
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.DefWndProc(System.Windows.Forms.Message@)
  System.Windows.Forms.Form.ProcessMnemonic(System.Char):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ProcessMnemonic(System.Char)
        name: ProcessMnemonic
        nameWithType: Form.ProcessMnemonic
        qualifiedName: System.Windows.Forms.Form.ProcessMnemonic
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Char
        name: Char
        nameWithType: Char
        qualifiedName: System.Char
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ProcessMnemonic(System.Char)
        name: ProcessMnemonic
        nameWithType: Form.ProcessMnemonic
        qualifiedName: System.Windows.Forms.Form.ProcessMnemonic
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Char
        name: Char
        nameWithType: Char
        qualifiedName: System.Char
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ProcessMnemonic(System.Char)
  System.Windows.Forms.Form.CenterToParent:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.CenterToParent
        name: CenterToParent
        nameWithType: Form.CenterToParent
        qualifiedName: System.Windows.Forms.Form.CenterToParent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.CenterToParent
        name: CenterToParent
        nameWithType: Form.CenterToParent
        qualifiedName: System.Windows.Forms.Form.CenterToParent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.CenterToParent
  System.Windows.Forms.Form.CenterToScreen:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.CenterToScreen
        name: CenterToScreen
        nameWithType: Form.CenterToScreen
        qualifiedName: System.Windows.Forms.Form.CenterToScreen
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.CenterToScreen
        name: CenterToScreen
        nameWithType: Form.CenterToScreen
        qualifiedName: System.Windows.Forms.Form.CenterToScreen
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.CenterToScreen
  System.Windows.Forms.Form.LayoutMdi(System.Windows.Forms.MdiLayout):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.LayoutMdi(System.Windows.Forms.MdiLayout)
        name: LayoutMdi
        nameWithType: Form.LayoutMdi
        qualifiedName: System.Windows.Forms.Form.LayoutMdi
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MdiLayout
        name: MdiLayout
        nameWithType: MdiLayout
        qualifiedName: System.Windows.Forms.MdiLayout
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.LayoutMdi(System.Windows.Forms.MdiLayout)
        name: LayoutMdi
        nameWithType: Form.LayoutMdi
        qualifiedName: System.Windows.Forms.Form.LayoutMdi
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MdiLayout
        name: MdiLayout
        nameWithType: MdiLayout
        qualifiedName: System.Windows.Forms.MdiLayout
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.LayoutMdi(System.Windows.Forms.MdiLayout)
  System.Windows.Forms.Form.OnActivated(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnActivated(System.EventArgs)
        name: OnActivated
        nameWithType: Form.OnActivated
        qualifiedName: System.Windows.Forms.Form.OnActivated
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnActivated(System.EventArgs)
        name: OnActivated
        nameWithType: Form.OnActivated
        qualifiedName: System.Windows.Forms.Form.OnActivated
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnActivated(System.EventArgs)
  System.Windows.Forms.Form.OnBackgroundImageChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnBackgroundImageChanged(System.EventArgs)
        name: OnBackgroundImageChanged
        nameWithType: Form.OnBackgroundImageChanged
        qualifiedName: System.Windows.Forms.Form.OnBackgroundImageChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnBackgroundImageChanged(System.EventArgs)
        name: OnBackgroundImageChanged
        nameWithType: Form.OnBackgroundImageChanged
        qualifiedName: System.Windows.Forms.Form.OnBackgroundImageChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnBackgroundImageChanged(System.EventArgs)
  System.Windows.Forms.Form.OnBackgroundImageLayoutChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnBackgroundImageLayoutChanged(System.EventArgs)
        name: OnBackgroundImageLayoutChanged
        nameWithType: Form.OnBackgroundImageLayoutChanged
        qualifiedName: System.Windows.Forms.Form.OnBackgroundImageLayoutChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnBackgroundImageLayoutChanged(System.EventArgs)
        name: OnBackgroundImageLayoutChanged
        nameWithType: Form.OnBackgroundImageLayoutChanged
        qualifiedName: System.Windows.Forms.Form.OnBackgroundImageLayoutChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnBackgroundImageLayoutChanged(System.EventArgs)
  System.Windows.Forms.Form.OnClosing(System.ComponentModel.CancelEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnClosing(System.ComponentModel.CancelEventArgs)
        name: OnClosing
        nameWithType: Form.OnClosing
        qualifiedName: System.Windows.Forms.Form.OnClosing
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.ComponentModel.CancelEventArgs
        name: CancelEventArgs
        nameWithType: CancelEventArgs
        qualifiedName: System.ComponentModel.CancelEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnClosing(System.ComponentModel.CancelEventArgs)
        name: OnClosing
        nameWithType: Form.OnClosing
        qualifiedName: System.Windows.Forms.Form.OnClosing
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.ComponentModel.CancelEventArgs
        name: CancelEventArgs
        nameWithType: CancelEventArgs
        qualifiedName: System.ComponentModel.CancelEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnClosing(System.ComponentModel.CancelEventArgs)
  System.Windows.Forms.Form.OnClosed(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnClosed(System.EventArgs)
        name: OnClosed
        nameWithType: Form.OnClosed
        qualifiedName: System.Windows.Forms.Form.OnClosed
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnClosed(System.EventArgs)
        name: OnClosed
        nameWithType: Form.OnClosed
        qualifiedName: System.Windows.Forms.Form.OnClosed
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnClosed(System.EventArgs)
  System.Windows.Forms.Form.OnFormClosing(System.Windows.Forms.FormClosingEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnFormClosing(System.Windows.Forms.FormClosingEventArgs)
        name: OnFormClosing
        nameWithType: Form.OnFormClosing
        qualifiedName: System.Windows.Forms.Form.OnFormClosing
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.FormClosingEventArgs
        name: FormClosingEventArgs
        nameWithType: FormClosingEventArgs
        qualifiedName: System.Windows.Forms.FormClosingEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnFormClosing(System.Windows.Forms.FormClosingEventArgs)
        name: OnFormClosing
        nameWithType: Form.OnFormClosing
        qualifiedName: System.Windows.Forms.Form.OnFormClosing
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.FormClosingEventArgs
        name: FormClosingEventArgs
        nameWithType: FormClosingEventArgs
        qualifiedName: System.Windows.Forms.FormClosingEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnFormClosing(System.Windows.Forms.FormClosingEventArgs)
  System.Windows.Forms.Form.OnFormClosed(System.Windows.Forms.FormClosedEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnFormClosed(System.Windows.Forms.FormClosedEventArgs)
        name: OnFormClosed
        nameWithType: Form.OnFormClosed
        qualifiedName: System.Windows.Forms.Form.OnFormClosed
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.FormClosedEventArgs
        name: FormClosedEventArgs
        nameWithType: FormClosedEventArgs
        qualifiedName: System.Windows.Forms.FormClosedEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnFormClosed(System.Windows.Forms.FormClosedEventArgs)
        name: OnFormClosed
        nameWithType: Form.OnFormClosed
        qualifiedName: System.Windows.Forms.Form.OnFormClosed
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.FormClosedEventArgs
        name: FormClosedEventArgs
        nameWithType: FormClosedEventArgs
        qualifiedName: System.Windows.Forms.FormClosedEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnFormClosed(System.Windows.Forms.FormClosedEventArgs)
  System.Windows.Forms.Form.OnCreateControl:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnCreateControl
        name: OnCreateControl
        nameWithType: Form.OnCreateControl
        qualifiedName: System.Windows.Forms.Form.OnCreateControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnCreateControl
        name: OnCreateControl
        nameWithType: Form.OnCreateControl
        qualifiedName: System.Windows.Forms.Form.OnCreateControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnCreateControl
  System.Windows.Forms.Form.OnDeactivate(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnDeactivate(System.EventArgs)
        name: OnDeactivate
        nameWithType: Form.OnDeactivate
        qualifiedName: System.Windows.Forms.Form.OnDeactivate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnDeactivate(System.EventArgs)
        name: OnDeactivate
        nameWithType: Form.OnDeactivate
        qualifiedName: System.Windows.Forms.Form.OnDeactivate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnDeactivate(System.EventArgs)
  System.Windows.Forms.Form.OnEnabledChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnEnabledChanged(System.EventArgs)
        name: OnEnabledChanged
        nameWithType: Form.OnEnabledChanged
        qualifiedName: System.Windows.Forms.Form.OnEnabledChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnEnabledChanged(System.EventArgs)
        name: OnEnabledChanged
        nameWithType: Form.OnEnabledChanged
        qualifiedName: System.Windows.Forms.Form.OnEnabledChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnEnabledChanged(System.EventArgs)
  System.Windows.Forms.Form.OnEnter(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnEnter(System.EventArgs)
        name: OnEnter
        nameWithType: Form.OnEnter
        qualifiedName: System.Windows.Forms.Form.OnEnter
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnEnter(System.EventArgs)
        name: OnEnter
        nameWithType: Form.OnEnter
        qualifiedName: System.Windows.Forms.Form.OnEnter
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnEnter(System.EventArgs)
  System.Windows.Forms.Form.OnFontChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnFontChanged(System.EventArgs)
        name: OnFontChanged
        nameWithType: Form.OnFontChanged
        qualifiedName: System.Windows.Forms.Form.OnFontChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnFontChanged(System.EventArgs)
        name: OnFontChanged
        nameWithType: Form.OnFontChanged
        qualifiedName: System.Windows.Forms.Form.OnFontChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnFontChanged(System.EventArgs)
  System.Windows.Forms.Form.OnHandleCreated(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnHandleCreated(System.EventArgs)
        name: OnHandleCreated
        nameWithType: Form.OnHandleCreated
        qualifiedName: System.Windows.Forms.Form.OnHandleCreated
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnHandleCreated(System.EventArgs)
        name: OnHandleCreated
        nameWithType: Form.OnHandleCreated
        qualifiedName: System.Windows.Forms.Form.OnHandleCreated
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnHandleCreated(System.EventArgs)
  System.Windows.Forms.Form.OnHandleDestroyed(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnHandleDestroyed(System.EventArgs)
        name: OnHandleDestroyed
        nameWithType: Form.OnHandleDestroyed
        qualifiedName: System.Windows.Forms.Form.OnHandleDestroyed
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnHandleDestroyed(System.EventArgs)
        name: OnHandleDestroyed
        nameWithType: Form.OnHandleDestroyed
        qualifiedName: System.Windows.Forms.Form.OnHandleDestroyed
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnHandleDestroyed(System.EventArgs)
  System.Windows.Forms.Form.OnHelpButtonClicked(System.ComponentModel.CancelEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnHelpButtonClicked(System.ComponentModel.CancelEventArgs)
        name: OnHelpButtonClicked
        nameWithType: Form.OnHelpButtonClicked
        qualifiedName: System.Windows.Forms.Form.OnHelpButtonClicked
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.ComponentModel.CancelEventArgs
        name: CancelEventArgs
        nameWithType: CancelEventArgs
        qualifiedName: System.ComponentModel.CancelEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnHelpButtonClicked(System.ComponentModel.CancelEventArgs)
        name: OnHelpButtonClicked
        nameWithType: Form.OnHelpButtonClicked
        qualifiedName: System.Windows.Forms.Form.OnHelpButtonClicked
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.ComponentModel.CancelEventArgs
        name: CancelEventArgs
        nameWithType: CancelEventArgs
        qualifiedName: System.ComponentModel.CancelEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnHelpButtonClicked(System.ComponentModel.CancelEventArgs)
  System.Windows.Forms.Form.OnLayout(System.Windows.Forms.LayoutEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnLayout(System.Windows.Forms.LayoutEventArgs)
        name: OnLayout
        nameWithType: Form.OnLayout
        qualifiedName: System.Windows.Forms.Form.OnLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.LayoutEventArgs
        name: LayoutEventArgs
        nameWithType: LayoutEventArgs
        qualifiedName: System.Windows.Forms.LayoutEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnLayout(System.Windows.Forms.LayoutEventArgs)
        name: OnLayout
        nameWithType: Form.OnLayout
        qualifiedName: System.Windows.Forms.Form.OnLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.LayoutEventArgs
        name: LayoutEventArgs
        nameWithType: LayoutEventArgs
        qualifiedName: System.Windows.Forms.LayoutEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnLayout(System.Windows.Forms.LayoutEventArgs)
  System.Windows.Forms.Form.OnLoad(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnLoad(System.EventArgs)
        name: OnLoad
        nameWithType: Form.OnLoad
        qualifiedName: System.Windows.Forms.Form.OnLoad
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnLoad(System.EventArgs)
        name: OnLoad
        nameWithType: Form.OnLoad
        qualifiedName: System.Windows.Forms.Form.OnLoad
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnLoad(System.EventArgs)
  System.Windows.Forms.Form.OnMaximizedBoundsChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnMaximizedBoundsChanged(System.EventArgs)
        name: OnMaximizedBoundsChanged
        nameWithType: Form.OnMaximizedBoundsChanged
        qualifiedName: System.Windows.Forms.Form.OnMaximizedBoundsChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnMaximizedBoundsChanged(System.EventArgs)
        name: OnMaximizedBoundsChanged
        nameWithType: Form.OnMaximizedBoundsChanged
        qualifiedName: System.Windows.Forms.Form.OnMaximizedBoundsChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnMaximizedBoundsChanged(System.EventArgs)
  System.Windows.Forms.Form.OnMaximumSizeChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnMaximumSizeChanged(System.EventArgs)
        name: OnMaximumSizeChanged
        nameWithType: Form.OnMaximumSizeChanged
        qualifiedName: System.Windows.Forms.Form.OnMaximumSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnMaximumSizeChanged(System.EventArgs)
        name: OnMaximumSizeChanged
        nameWithType: Form.OnMaximumSizeChanged
        qualifiedName: System.Windows.Forms.Form.OnMaximumSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnMaximumSizeChanged(System.EventArgs)
  System.Windows.Forms.Form.OnMinimumSizeChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnMinimumSizeChanged(System.EventArgs)
        name: OnMinimumSizeChanged
        nameWithType: Form.OnMinimumSizeChanged
        qualifiedName: System.Windows.Forms.Form.OnMinimumSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnMinimumSizeChanged(System.EventArgs)
        name: OnMinimumSizeChanged
        nameWithType: Form.OnMinimumSizeChanged
        qualifiedName: System.Windows.Forms.Form.OnMinimumSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnMinimumSizeChanged(System.EventArgs)
  System.Windows.Forms.Form.OnInputLanguageChanged(System.Windows.Forms.InputLanguageChangedEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnInputLanguageChanged(System.Windows.Forms.InputLanguageChangedEventArgs)
        name: OnInputLanguageChanged
        nameWithType: Form.OnInputLanguageChanged
        qualifiedName: System.Windows.Forms.Form.OnInputLanguageChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.InputLanguageChangedEventArgs
        name: InputLanguageChangedEventArgs
        nameWithType: InputLanguageChangedEventArgs
        qualifiedName: System.Windows.Forms.InputLanguageChangedEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnInputLanguageChanged(System.Windows.Forms.InputLanguageChangedEventArgs)
        name: OnInputLanguageChanged
        nameWithType: Form.OnInputLanguageChanged
        qualifiedName: System.Windows.Forms.Form.OnInputLanguageChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.InputLanguageChangedEventArgs
        name: InputLanguageChangedEventArgs
        nameWithType: InputLanguageChangedEventArgs
        qualifiedName: System.Windows.Forms.InputLanguageChangedEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnInputLanguageChanged(System.Windows.Forms.InputLanguageChangedEventArgs)
  System.Windows.Forms.Form.OnInputLanguageChanging(System.Windows.Forms.InputLanguageChangingEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnInputLanguageChanging(System.Windows.Forms.InputLanguageChangingEventArgs)
        name: OnInputLanguageChanging
        nameWithType: Form.OnInputLanguageChanging
        qualifiedName: System.Windows.Forms.Form.OnInputLanguageChanging
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.InputLanguageChangingEventArgs
        name: InputLanguageChangingEventArgs
        nameWithType: InputLanguageChangingEventArgs
        qualifiedName: System.Windows.Forms.InputLanguageChangingEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnInputLanguageChanging(System.Windows.Forms.InputLanguageChangingEventArgs)
        name: OnInputLanguageChanging
        nameWithType: Form.OnInputLanguageChanging
        qualifiedName: System.Windows.Forms.Form.OnInputLanguageChanging
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.InputLanguageChangingEventArgs
        name: InputLanguageChangingEventArgs
        nameWithType: InputLanguageChangingEventArgs
        qualifiedName: System.Windows.Forms.InputLanguageChangingEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnInputLanguageChanging(System.Windows.Forms.InputLanguageChangingEventArgs)
  System.Windows.Forms.Form.OnVisibleChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnVisibleChanged(System.EventArgs)
        name: OnVisibleChanged
        nameWithType: Form.OnVisibleChanged
        qualifiedName: System.Windows.Forms.Form.OnVisibleChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnVisibleChanged(System.EventArgs)
        name: OnVisibleChanged
        nameWithType: Form.OnVisibleChanged
        qualifiedName: System.Windows.Forms.Form.OnVisibleChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnVisibleChanged(System.EventArgs)
  System.Windows.Forms.Form.OnMdiChildActivate(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnMdiChildActivate(System.EventArgs)
        name: OnMdiChildActivate
        nameWithType: Form.OnMdiChildActivate
        qualifiedName: System.Windows.Forms.Form.OnMdiChildActivate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnMdiChildActivate(System.EventArgs)
        name: OnMdiChildActivate
        nameWithType: Form.OnMdiChildActivate
        qualifiedName: System.Windows.Forms.Form.OnMdiChildActivate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnMdiChildActivate(System.EventArgs)
  System.Windows.Forms.Form.OnMenuStart(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnMenuStart(System.EventArgs)
        name: OnMenuStart
        nameWithType: Form.OnMenuStart
        qualifiedName: System.Windows.Forms.Form.OnMenuStart
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnMenuStart(System.EventArgs)
        name: OnMenuStart
        nameWithType: Form.OnMenuStart
        qualifiedName: System.Windows.Forms.Form.OnMenuStart
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnMenuStart(System.EventArgs)
  System.Windows.Forms.Form.OnMenuComplete(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnMenuComplete(System.EventArgs)
        name: OnMenuComplete
        nameWithType: Form.OnMenuComplete
        qualifiedName: System.Windows.Forms.Form.OnMenuComplete
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnMenuComplete(System.EventArgs)
        name: OnMenuComplete
        nameWithType: Form.OnMenuComplete
        qualifiedName: System.Windows.Forms.Form.OnMenuComplete
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnMenuComplete(System.EventArgs)
  System.Windows.Forms.Form.OnPaint(System.Windows.Forms.PaintEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnPaint(System.Windows.Forms.PaintEventArgs)
        name: OnPaint
        nameWithType: Form.OnPaint
        qualifiedName: System.Windows.Forms.Form.OnPaint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnPaint(System.Windows.Forms.PaintEventArgs)
        name: OnPaint
        nameWithType: Form.OnPaint
        qualifiedName: System.Windows.Forms.Form.OnPaint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnPaint(System.Windows.Forms.PaintEventArgs)
  System.Windows.Forms.Form.OnResize(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnResize(System.EventArgs)
        name: OnResize
        nameWithType: Form.OnResize
        qualifiedName: System.Windows.Forms.Form.OnResize
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnResize(System.EventArgs)
        name: OnResize
        nameWithType: Form.OnResize
        qualifiedName: System.Windows.Forms.Form.OnResize
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnResize(System.EventArgs)
  System.Windows.Forms.Form.OnDpiChanged(System.Windows.Forms.DpiChangedEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnDpiChanged(System.Windows.Forms.DpiChangedEventArgs)
        name: OnDpiChanged
        nameWithType: Form.OnDpiChanged
        qualifiedName: System.Windows.Forms.Form.OnDpiChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DpiChangedEventArgs
        name: DpiChangedEventArgs
        nameWithType: DpiChangedEventArgs
        qualifiedName: System.Windows.Forms.DpiChangedEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnDpiChanged(System.Windows.Forms.DpiChangedEventArgs)
        name: OnDpiChanged
        nameWithType: Form.OnDpiChanged
        qualifiedName: System.Windows.Forms.Form.OnDpiChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DpiChangedEventArgs
        name: DpiChangedEventArgs
        nameWithType: DpiChangedEventArgs
        qualifiedName: System.Windows.Forms.DpiChangedEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnDpiChanged(System.Windows.Forms.DpiChangedEventArgs)
  System.Windows.Forms.Form.OnGetDpiScaledSize(System.Int32,System.Int32,System.Drawing.Size@):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnGetDpiScaledSize(System.Int32,System.Int32,System.Drawing.Size@)
        name: OnGetDpiScaledSize
        nameWithType: Form.OnGetDpiScaledSize
        qualifiedName: System.Windows.Forms.Form.OnGetDpiScaledSize
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Drawing.Size
        name: Size
        nameWithType: Size
        qualifiedName: System.Drawing.Size
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnGetDpiScaledSize(System.Int32,System.Int32,System.Drawing.Size@)
        name: OnGetDpiScaledSize
        nameWithType: Form.OnGetDpiScaledSize
        qualifiedName: System.Windows.Forms.Form.OnGetDpiScaledSize
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Drawing.Size
        name: Size
        nameWithType: Size
        qualifiedName: System.Drawing.Size
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnGetDpiScaledSize(System.Int32,System.Int32,System.Drawing.Size@)
  System.Windows.Forms.Form.OnRightToLeftLayoutChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnRightToLeftLayoutChanged(System.EventArgs)
        name: OnRightToLeftLayoutChanged
        nameWithType: Form.OnRightToLeftLayoutChanged
        qualifiedName: System.Windows.Forms.Form.OnRightToLeftLayoutChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnRightToLeftLayoutChanged(System.EventArgs)
        name: OnRightToLeftLayoutChanged
        nameWithType: Form.OnRightToLeftLayoutChanged
        qualifiedName: System.Windows.Forms.Form.OnRightToLeftLayoutChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnRightToLeftLayoutChanged(System.EventArgs)
  System.Windows.Forms.Form.OnShown(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnShown(System.EventArgs)
        name: OnShown
        nameWithType: Form.OnShown
        qualifiedName: System.Windows.Forms.Form.OnShown
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnShown(System.EventArgs)
        name: OnShown
        nameWithType: Form.OnShown
        qualifiedName: System.Windows.Forms.Form.OnShown
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnShown(System.EventArgs)
  System.Windows.Forms.Form.OnTextChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnTextChanged(System.EventArgs)
        name: OnTextChanged
        nameWithType: Form.OnTextChanged
        qualifiedName: System.Windows.Forms.Form.OnTextChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnTextChanged(System.EventArgs)
        name: OnTextChanged
        nameWithType: Form.OnTextChanged
        qualifiedName: System.Windows.Forms.Form.OnTextChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnTextChanged(System.EventArgs)
  System.Windows.Forms.Form.ProcessCmdKey(System.Windows.Forms.Message@,System.Windows.Forms.Keys):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ProcessCmdKey(System.Windows.Forms.Message@,System.Windows.Forms.Keys)
        name: ProcessCmdKey
        nameWithType: Form.ProcessCmdKey
        qualifiedName: System.Windows.Forms.Form.ProcessCmdKey
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.Keys
        name: Keys
        nameWithType: Keys
        qualifiedName: System.Windows.Forms.Keys
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ProcessCmdKey(System.Windows.Forms.Message@,System.Windows.Forms.Keys)
        name: ProcessCmdKey
        nameWithType: Form.ProcessCmdKey
        qualifiedName: System.Windows.Forms.Form.ProcessCmdKey
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.Keys
        name: Keys
        nameWithType: Keys
        qualifiedName: System.Windows.Forms.Keys
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ProcessCmdKey(System.Windows.Forms.Message@,System.Windows.Forms.Keys)
  System.Windows.Forms.Form.ProcessDialogKey(System.Windows.Forms.Keys):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ProcessDialogKey(System.Windows.Forms.Keys)
        name: ProcessDialogKey
        nameWithType: Form.ProcessDialogKey
        qualifiedName: System.Windows.Forms.Form.ProcessDialogKey
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Keys
        name: Keys
        nameWithType: Keys
        qualifiedName: System.Windows.Forms.Keys
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ProcessDialogKey(System.Windows.Forms.Keys)
        name: ProcessDialogKey
        nameWithType: Form.ProcessDialogKey
        qualifiedName: System.Windows.Forms.Form.ProcessDialogKey
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Keys
        name: Keys
        nameWithType: Keys
        qualifiedName: System.Windows.Forms.Keys
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ProcessDialogKey(System.Windows.Forms.Keys)
  System.Windows.Forms.Form.ProcessDialogChar(System.Char):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ProcessDialogChar(System.Char)
        name: ProcessDialogChar
        nameWithType: Form.ProcessDialogChar
        qualifiedName: System.Windows.Forms.Form.ProcessDialogChar
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Char
        name: Char
        nameWithType: Char
        qualifiedName: System.Char
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ProcessDialogChar(System.Char)
        name: ProcessDialogChar
        nameWithType: Form.ProcessDialogChar
        qualifiedName: System.Windows.Forms.Form.ProcessDialogChar
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Char
        name: Char
        nameWithType: Char
        qualifiedName: System.Char
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ProcessDialogChar(System.Char)
  System.Windows.Forms.Form.ProcessKeyPreview(System.Windows.Forms.Message@):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ProcessKeyPreview(System.Windows.Forms.Message@)
        name: ProcessKeyPreview
        nameWithType: Form.ProcessKeyPreview
        qualifiedName: System.Windows.Forms.Form.ProcessKeyPreview
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ProcessKeyPreview(System.Windows.Forms.Message@)
        name: ProcessKeyPreview
        nameWithType: Form.ProcessKeyPreview
        qualifiedName: System.Windows.Forms.Form.ProcessKeyPreview
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ProcessKeyPreview(System.Windows.Forms.Message@)
  System.Windows.Forms.Form.ProcessTabKey(System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ProcessTabKey(System.Boolean)
        name: ProcessTabKey
        nameWithType: Form.ProcessTabKey
        qualifiedName: System.Windows.Forms.Form.ProcessTabKey
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ProcessTabKey(System.Boolean)
        name: ProcessTabKey
        nameWithType: Form.ProcessTabKey
        qualifiedName: System.Windows.Forms.Form.ProcessTabKey
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ProcessTabKey(System.Boolean)
  System.Windows.Forms.Form.RemoveOwnedForm(System.Windows.Forms.Form):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.RemoveOwnedForm(System.Windows.Forms.Form)
        name: RemoveOwnedForm
        nameWithType: Form.RemoveOwnedForm
        qualifiedName: System.Windows.Forms.Form.RemoveOwnedForm
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Form
        name: Form
        nameWithType: Form
        qualifiedName: System.Windows.Forms.Form
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.RemoveOwnedForm(System.Windows.Forms.Form)
        name: RemoveOwnedForm
        nameWithType: Form.RemoveOwnedForm
        qualifiedName: System.Windows.Forms.Form.RemoveOwnedForm
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Form
        name: Form
        nameWithType: Form
        qualifiedName: System.Windows.Forms.Form
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.RemoveOwnedForm(System.Windows.Forms.Form)
  System.Windows.Forms.Form.Select(System.Boolean,System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Select(System.Boolean,System.Boolean)
        name: Select
        nameWithType: Form.Select
        qualifiedName: System.Windows.Forms.Form.Select
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.Select(System.Boolean,System.Boolean)
        name: Select
        nameWithType: Form.Select
        qualifiedName: System.Windows.Forms.Form.Select
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.Select(System.Boolean,System.Boolean)
  System.Windows.Forms.Form.GetScaledBounds(System.Drawing.Rectangle,System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.GetScaledBounds(System.Drawing.Rectangle,System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
        name: GetScaledBounds
        nameWithType: Form.GetScaledBounds
        qualifiedName: System.Windows.Forms.Form.GetScaledBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Drawing.SizeF
        name: SizeF
        nameWithType: SizeF
        qualifiedName: System.Drawing.SizeF
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.BoundsSpecified
        name: BoundsSpecified
        nameWithType: BoundsSpecified
        qualifiedName: System.Windows.Forms.BoundsSpecified
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.GetScaledBounds(System.Drawing.Rectangle,System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
        name: GetScaledBounds
        nameWithType: Form.GetScaledBounds
        qualifiedName: System.Windows.Forms.Form.GetScaledBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Drawing.SizeF
        name: SizeF
        nameWithType: SizeF
        qualifiedName: System.Drawing.SizeF
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.BoundsSpecified
        name: BoundsSpecified
        nameWithType: BoundsSpecified
        qualifiedName: System.Windows.Forms.BoundsSpecified
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.GetScaledBounds(System.Drawing.Rectangle,System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
  System.Windows.Forms.Form.ScaleControl(System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ScaleControl(System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
        name: ScaleControl
        nameWithType: Form.ScaleControl
        qualifiedName: System.Windows.Forms.Form.ScaleControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.SizeF
        name: SizeF
        nameWithType: SizeF
        qualifiedName: System.Drawing.SizeF
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.BoundsSpecified
        name: BoundsSpecified
        nameWithType: BoundsSpecified
        qualifiedName: System.Windows.Forms.BoundsSpecified
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ScaleControl(System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
        name: ScaleControl
        nameWithType: Form.ScaleControl
        qualifiedName: System.Windows.Forms.Form.ScaleControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.SizeF
        name: SizeF
        nameWithType: SizeF
        qualifiedName: System.Drawing.SizeF
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.BoundsSpecified
        name: BoundsSpecified
        nameWithType: BoundsSpecified
        qualifiedName: System.Windows.Forms.BoundsSpecified
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ScaleControl(System.Drawing.SizeF,System.Windows.Forms.BoundsSpecified)
  ? System.Windows.Forms.Form.SetBoundsCore(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
  : name:
      CSharp:
      - id: System.Windows.Forms.Form.SetBoundsCore(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
        name: SetBoundsCore
        nameWithType: Form.SetBoundsCore
        qualifiedName: System.Windows.Forms.Form.SetBoundsCore
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.BoundsSpecified
        name: BoundsSpecified
        nameWithType: BoundsSpecified
        qualifiedName: System.Windows.Forms.BoundsSpecified
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.SetBoundsCore(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
        name: SetBoundsCore
        nameWithType: Form.SetBoundsCore
        qualifiedName: System.Windows.Forms.Form.SetBoundsCore
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.BoundsSpecified
        name: BoundsSpecified
        nameWithType: BoundsSpecified
        qualifiedName: System.Windows.Forms.BoundsSpecified
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.SetBoundsCore(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
  System.Windows.Forms.Form.SetClientSizeCore(System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.SetClientSizeCore(System.Int32,System.Int32)
        name: SetClientSizeCore
        nameWithType: Form.SetClientSizeCore
        qualifiedName: System.Windows.Forms.Form.SetClientSizeCore
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.SetClientSizeCore(System.Int32,System.Int32)
        name: SetClientSizeCore
        nameWithType: Form.SetClientSizeCore
        qualifiedName: System.Windows.Forms.Form.SetClientSizeCore
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.SetClientSizeCore(System.Int32,System.Int32)
  System.Windows.Forms.Form.SetDesktopBounds(System.Int32,System.Int32,System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.SetDesktopBounds(System.Int32,System.Int32,System.Int32,System.Int32)
        name: SetDesktopBounds
        nameWithType: Form.SetDesktopBounds
        qualifiedName: System.Windows.Forms.Form.SetDesktopBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.SetDesktopBounds(System.Int32,System.Int32,System.Int32,System.Int32)
        name: SetDesktopBounds
        nameWithType: Form.SetDesktopBounds
        qualifiedName: System.Windows.Forms.Form.SetDesktopBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.SetDesktopBounds(System.Int32,System.Int32,System.Int32,System.Int32)
  System.Windows.Forms.Form.SetDesktopLocation(System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.SetDesktopLocation(System.Int32,System.Int32)
        name: SetDesktopLocation
        nameWithType: Form.SetDesktopLocation
        qualifiedName: System.Windows.Forms.Form.SetDesktopLocation
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.SetDesktopLocation(System.Int32,System.Int32)
        name: SetDesktopLocation
        nameWithType: Form.SetDesktopLocation
        qualifiedName: System.Windows.Forms.Form.SetDesktopLocation
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.SetDesktopLocation(System.Int32,System.Int32)
  System.Windows.Forms.Form.Show(System.Windows.Forms.IWin32Window):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Show(System.Windows.Forms.IWin32Window)
        name: Show
        nameWithType: Form.Show
        qualifiedName: System.Windows.Forms.Form.Show
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.IWin32Window
        name: IWin32Window
        nameWithType: IWin32Window
        qualifiedName: System.Windows.Forms.IWin32Window
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.Show(System.Windows.Forms.IWin32Window)
        name: Show
        nameWithType: Form.Show
        qualifiedName: System.Windows.Forms.Form.Show
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.IWin32Window
        name: IWin32Window
        nameWithType: IWin32Window
        qualifiedName: System.Windows.Forms.IWin32Window
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.Show(System.Windows.Forms.IWin32Window)
  System.Windows.Forms.Form.ShowDialog:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ShowDialog
        name: ShowDialog
        nameWithType: Form.ShowDialog
        qualifiedName: System.Windows.Forms.Form.ShowDialog
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ShowDialog
        name: ShowDialog
        nameWithType: Form.ShowDialog
        qualifiedName: System.Windows.Forms.Form.ShowDialog
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ShowDialog
  System.Windows.Forms.Form.ShowDialog(System.Windows.Forms.IWin32Window):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ShowDialog(System.Windows.Forms.IWin32Window)
        name: ShowDialog
        nameWithType: Form.ShowDialog
        qualifiedName: System.Windows.Forms.Form.ShowDialog
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.IWin32Window
        name: IWin32Window
        nameWithType: IWin32Window
        qualifiedName: System.Windows.Forms.IWin32Window
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ShowDialog(System.Windows.Forms.IWin32Window)
        name: ShowDialog
        nameWithType: Form.ShowDialog
        qualifiedName: System.Windows.Forms.Form.ShowDialog
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.IWin32Window
        name: IWin32Window
        nameWithType: IWin32Window
        qualifiedName: System.Windows.Forms.IWin32Window
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ShowDialog(System.Windows.Forms.IWin32Window)
  System.Windows.Forms.Form.ToString:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ToString
        name: ToString
        nameWithType: Form.ToString
        qualifiedName: System.Windows.Forms.Form.ToString
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ToString
        name: ToString
        nameWithType: Form.ToString
        qualifiedName: System.Windows.Forms.Form.ToString
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ToString
  System.Windows.Forms.Form.UpdateDefaultButton:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.UpdateDefaultButton
        name: UpdateDefaultButton
        nameWithType: Form.UpdateDefaultButton
        qualifiedName: System.Windows.Forms.Form.UpdateDefaultButton
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.UpdateDefaultButton
        name: UpdateDefaultButton
        nameWithType: Form.UpdateDefaultButton
        qualifiedName: System.Windows.Forms.Form.UpdateDefaultButton
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.UpdateDefaultButton
  System.Windows.Forms.Form.OnResizeBegin(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnResizeBegin(System.EventArgs)
        name: OnResizeBegin
        nameWithType: Form.OnResizeBegin
        qualifiedName: System.Windows.Forms.Form.OnResizeBegin
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnResizeBegin(System.EventArgs)
        name: OnResizeBegin
        nameWithType: Form.OnResizeBegin
        qualifiedName: System.Windows.Forms.Form.OnResizeBegin
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnResizeBegin(System.EventArgs)
  System.Windows.Forms.Form.OnResizeEnd(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnResizeEnd(System.EventArgs)
        name: OnResizeEnd
        nameWithType: Form.OnResizeEnd
        qualifiedName: System.Windows.Forms.Form.OnResizeEnd
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnResizeEnd(System.EventArgs)
        name: OnResizeEnd
        nameWithType: Form.OnResizeEnd
        qualifiedName: System.Windows.Forms.Form.OnResizeEnd
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnResizeEnd(System.EventArgs)
  System.Windows.Forms.Form.OnStyleChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OnStyleChanged(System.EventArgs)
        name: OnStyleChanged
        nameWithType: Form.OnStyleChanged
        qualifiedName: System.Windows.Forms.Form.OnStyleChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.OnStyleChanged(System.EventArgs)
        name: OnStyleChanged
        nameWithType: Form.OnStyleChanged
        qualifiedName: System.Windows.Forms.Form.OnStyleChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.OnStyleChanged(System.EventArgs)
  System.Windows.Forms.Form.ValidateChildren:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ValidateChildren
        name: ValidateChildren
        nameWithType: Form.ValidateChildren
        qualifiedName: System.Windows.Forms.Form.ValidateChildren
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ValidateChildren
        name: ValidateChildren
        nameWithType: Form.ValidateChildren
        qualifiedName: System.Windows.Forms.Form.ValidateChildren
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ValidateChildren
  System.Windows.Forms.Form.ValidateChildren(System.Windows.Forms.ValidationConstraints):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ValidateChildren(System.Windows.Forms.ValidationConstraints)
        name: ValidateChildren
        nameWithType: Form.ValidateChildren
        qualifiedName: System.Windows.Forms.Form.ValidateChildren
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ValidationConstraints
        name: ValidationConstraints
        nameWithType: ValidationConstraints
        qualifiedName: System.Windows.Forms.ValidationConstraints
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.ValidateChildren(System.Windows.Forms.ValidationConstraints)
        name: ValidateChildren
        nameWithType: Form.ValidateChildren
        qualifiedName: System.Windows.Forms.Form.ValidateChildren
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ValidationConstraints
        name: ValidationConstraints
        nameWithType: ValidationConstraints
        qualifiedName: System.Windows.Forms.ValidationConstraints
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.ValidateChildren(System.Windows.Forms.ValidationConstraints)
  System.Windows.Forms.Form.WndProc(System.Windows.Forms.Message@):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.WndProc(System.Windows.Forms.Message@)
        name: WndProc
        nameWithType: Form.WndProc
        qualifiedName: System.Windows.Forms.Form.WndProc
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.WndProc(System.Windows.Forms.Message@)
        name: WndProc
        nameWithType: Form.WndProc
        qualifiedName: System.Windows.Forms.Form.WndProc
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.WndProc(System.Windows.Forms.Message@)
  System.Windows.Forms.Form.AcceptButton:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AcceptButton
        name: AcceptButton
        nameWithType: Form.AcceptButton
        qualifiedName: System.Windows.Forms.Form.AcceptButton
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.AcceptButton
        name: AcceptButton
        nameWithType: Form.AcceptButton
        qualifiedName: System.Windows.Forms.Form.AcceptButton
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.AcceptButton
  System.Windows.Forms.Form.ActiveForm:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ActiveForm
        name: ActiveForm
        nameWithType: Form.ActiveForm
        qualifiedName: System.Windows.Forms.Form.ActiveForm
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ActiveForm
        name: ActiveForm
        nameWithType: Form.ActiveForm
        qualifiedName: System.Windows.Forms.Form.ActiveForm
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.ActiveForm
  System.Windows.Forms.Form.ActiveMdiChild:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ActiveMdiChild
        name: ActiveMdiChild
        nameWithType: Form.ActiveMdiChild
        qualifiedName: System.Windows.Forms.Form.ActiveMdiChild
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ActiveMdiChild
        name: ActiveMdiChild
        nameWithType: Form.ActiveMdiChild
        qualifiedName: System.Windows.Forms.Form.ActiveMdiChild
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.ActiveMdiChild
  System.Windows.Forms.Form.AllowTransparency:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AllowTransparency
        name: AllowTransparency
        nameWithType: Form.AllowTransparency
        qualifiedName: System.Windows.Forms.Form.AllowTransparency
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.AllowTransparency
        name: AllowTransparency
        nameWithType: Form.AllowTransparency
        qualifiedName: System.Windows.Forms.Form.AllowTransparency
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.AllowTransparency
  System.Windows.Forms.Form.AutoScroll:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AutoScroll
        name: AutoScroll
        nameWithType: Form.AutoScroll
        qualifiedName: System.Windows.Forms.Form.AutoScroll
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.AutoScroll
        name: AutoScroll
        nameWithType: Form.AutoScroll
        qualifiedName: System.Windows.Forms.Form.AutoScroll
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.AutoScroll
  System.Windows.Forms.Form.AutoSize:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AutoSize
        name: AutoSize
        nameWithType: Form.AutoSize
        qualifiedName: System.Windows.Forms.Form.AutoSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.AutoSize
        name: AutoSize
        nameWithType: Form.AutoSize
        qualifiedName: System.Windows.Forms.Form.AutoSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.AutoSize
  System.Windows.Forms.Form.AutoSizeMode:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AutoSizeMode
        name: AutoSizeMode
        nameWithType: Form.AutoSizeMode
        qualifiedName: System.Windows.Forms.Form.AutoSizeMode
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.AutoSizeMode
        name: AutoSizeMode
        nameWithType: Form.AutoSizeMode
        qualifiedName: System.Windows.Forms.Form.AutoSizeMode
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.AutoSizeMode
  System.Windows.Forms.Form.AutoValidate:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AutoValidate
        name: AutoValidate
        nameWithType: Form.AutoValidate
        qualifiedName: System.Windows.Forms.Form.AutoValidate
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.AutoValidate
        name: AutoValidate
        nameWithType: Form.AutoValidate
        qualifiedName: System.Windows.Forms.Form.AutoValidate
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.AutoValidate
  System.Windows.Forms.Form.BackColor:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.BackColor
        name: BackColor
        nameWithType: Form.BackColor
        qualifiedName: System.Windows.Forms.Form.BackColor
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.BackColor
        name: BackColor
        nameWithType: Form.BackColor
        qualifiedName: System.Windows.Forms.Form.BackColor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.BackColor
  System.Windows.Forms.Form.FormBorderStyle:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.FormBorderStyle
        name: FormBorderStyle
        nameWithType: Form.FormBorderStyle
        qualifiedName: System.Windows.Forms.Form.FormBorderStyle
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.FormBorderStyle
        name: FormBorderStyle
        nameWithType: Form.FormBorderStyle
        qualifiedName: System.Windows.Forms.Form.FormBorderStyle
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.FormBorderStyle
  System.Windows.Forms.Form.CancelButton:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.CancelButton
        name: CancelButton
        nameWithType: Form.CancelButton
        qualifiedName: System.Windows.Forms.Form.CancelButton
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.CancelButton
        name: CancelButton
        nameWithType: Form.CancelButton
        qualifiedName: System.Windows.Forms.Form.CancelButton
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.CancelButton
  System.Windows.Forms.Form.ClientSize:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ClientSize
        name: ClientSize
        nameWithType: Form.ClientSize
        qualifiedName: System.Windows.Forms.Form.ClientSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ClientSize
        name: ClientSize
        nameWithType: Form.ClientSize
        qualifiedName: System.Windows.Forms.Form.ClientSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.ClientSize
  System.Windows.Forms.Form.ControlBox:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ControlBox
        name: ControlBox
        nameWithType: Form.ControlBox
        qualifiedName: System.Windows.Forms.Form.ControlBox
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ControlBox
        name: ControlBox
        nameWithType: Form.ControlBox
        qualifiedName: System.Windows.Forms.Form.ControlBox
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.ControlBox
  System.Windows.Forms.Form.CreateParams:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.CreateParams
        name: CreateParams
        nameWithType: Form.CreateParams
        qualifiedName: System.Windows.Forms.Form.CreateParams
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.CreateParams
        name: CreateParams
        nameWithType: Form.CreateParams
        qualifiedName: System.Windows.Forms.Form.CreateParams
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.CreateParams
  System.Windows.Forms.Form.DefaultImeMode:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.DefaultImeMode
        name: DefaultImeMode
        nameWithType: Form.DefaultImeMode
        qualifiedName: System.Windows.Forms.Form.DefaultImeMode
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.DefaultImeMode
        name: DefaultImeMode
        nameWithType: Form.DefaultImeMode
        qualifiedName: System.Windows.Forms.Form.DefaultImeMode
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.DefaultImeMode
  System.Windows.Forms.Form.DefaultSize:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.DefaultSize
        name: DefaultSize
        nameWithType: Form.DefaultSize
        qualifiedName: System.Windows.Forms.Form.DefaultSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.DefaultSize
        name: DefaultSize
        nameWithType: Form.DefaultSize
        qualifiedName: System.Windows.Forms.Form.DefaultSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.DefaultSize
  System.Windows.Forms.Form.DesktopBounds:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.DesktopBounds
        name: DesktopBounds
        nameWithType: Form.DesktopBounds
        qualifiedName: System.Windows.Forms.Form.DesktopBounds
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.DesktopBounds
        name: DesktopBounds
        nameWithType: Form.DesktopBounds
        qualifiedName: System.Windows.Forms.Form.DesktopBounds
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.DesktopBounds
  System.Windows.Forms.Form.DesktopLocation:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.DesktopLocation
        name: DesktopLocation
        nameWithType: Form.DesktopLocation
        qualifiedName: System.Windows.Forms.Form.DesktopLocation
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.DesktopLocation
        name: DesktopLocation
        nameWithType: Form.DesktopLocation
        qualifiedName: System.Windows.Forms.Form.DesktopLocation
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.DesktopLocation
  System.Windows.Forms.Form.DialogResult:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.DialogResult
        name: DialogResult
        nameWithType: Form.DialogResult
        qualifiedName: System.Windows.Forms.Form.DialogResult
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.DialogResult
        name: DialogResult
        nameWithType: Form.DialogResult
        qualifiedName: System.Windows.Forms.Form.DialogResult
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.DialogResult
  System.Windows.Forms.Form.HelpButton:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.HelpButton
        name: HelpButton
        nameWithType: Form.HelpButton
        qualifiedName: System.Windows.Forms.Form.HelpButton
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.HelpButton
        name: HelpButton
        nameWithType: Form.HelpButton
        qualifiedName: System.Windows.Forms.Form.HelpButton
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.HelpButton
  System.Windows.Forms.Form.Icon:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Icon
        name: Icon
        nameWithType: Form.Icon
        qualifiedName: System.Windows.Forms.Form.Icon
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Icon
        name: Icon
        nameWithType: Form.Icon
        qualifiedName: System.Windows.Forms.Form.Icon
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.Icon
  System.Windows.Forms.Form.IsMdiChild:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.IsMdiChild
        name: IsMdiChild
        nameWithType: Form.IsMdiChild
        qualifiedName: System.Windows.Forms.Form.IsMdiChild
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.IsMdiChild
        name: IsMdiChild
        nameWithType: Form.IsMdiChild
        qualifiedName: System.Windows.Forms.Form.IsMdiChild
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.IsMdiChild
  System.Windows.Forms.Form.IsMdiContainer:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.IsMdiContainer
        name: IsMdiContainer
        nameWithType: Form.IsMdiContainer
        qualifiedName: System.Windows.Forms.Form.IsMdiContainer
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.IsMdiContainer
        name: IsMdiContainer
        nameWithType: Form.IsMdiContainer
        qualifiedName: System.Windows.Forms.Form.IsMdiContainer
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.IsMdiContainer
  System.Windows.Forms.Form.IsRestrictedWindow:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.IsRestrictedWindow
        name: IsRestrictedWindow
        nameWithType: Form.IsRestrictedWindow
        qualifiedName: System.Windows.Forms.Form.IsRestrictedWindow
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.IsRestrictedWindow
        name: IsRestrictedWindow
        nameWithType: Form.IsRestrictedWindow
        qualifiedName: System.Windows.Forms.Form.IsRestrictedWindow
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.IsRestrictedWindow
  System.Windows.Forms.Form.KeyPreview:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.KeyPreview
        name: KeyPreview
        nameWithType: Form.KeyPreview
        qualifiedName: System.Windows.Forms.Form.KeyPreview
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.KeyPreview
        name: KeyPreview
        nameWithType: Form.KeyPreview
        qualifiedName: System.Windows.Forms.Form.KeyPreview
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.KeyPreview
  System.Windows.Forms.Form.Location:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Location
        name: Location
        nameWithType: Form.Location
        qualifiedName: System.Windows.Forms.Form.Location
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Location
        name: Location
        nameWithType: Form.Location
        qualifiedName: System.Windows.Forms.Form.Location
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.Location
  System.Windows.Forms.Form.MaximizedBounds:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MaximizedBounds
        name: MaximizedBounds
        nameWithType: Form.MaximizedBounds
        qualifiedName: System.Windows.Forms.Form.MaximizedBounds
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MaximizedBounds
        name: MaximizedBounds
        nameWithType: Form.MaximizedBounds
        qualifiedName: System.Windows.Forms.Form.MaximizedBounds
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MaximizedBounds
  System.Windows.Forms.Form.MaximumSize:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MaximumSize
        name: MaximumSize
        nameWithType: Form.MaximumSize
        qualifiedName: System.Windows.Forms.Form.MaximumSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MaximumSize
        name: MaximumSize
        nameWithType: Form.MaximumSize
        qualifiedName: System.Windows.Forms.Form.MaximumSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MaximumSize
  System.Windows.Forms.Form.MainMenuStrip:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MainMenuStrip
        name: MainMenuStrip
        nameWithType: Form.MainMenuStrip
        qualifiedName: System.Windows.Forms.Form.MainMenuStrip
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MainMenuStrip
        name: MainMenuStrip
        nameWithType: Form.MainMenuStrip
        qualifiedName: System.Windows.Forms.Form.MainMenuStrip
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MainMenuStrip
  System.Windows.Forms.Form.Menu:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Menu
        name: Menu
        nameWithType: Form.Menu
        qualifiedName: System.Windows.Forms.Form.Menu
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Menu
        name: Menu
        nameWithType: Form.Menu
        qualifiedName: System.Windows.Forms.Form.Menu
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.Menu
  System.Windows.Forms.Form.MinimumSize:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MinimumSize
        name: MinimumSize
        nameWithType: Form.MinimumSize
        qualifiedName: System.Windows.Forms.Form.MinimumSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MinimumSize
        name: MinimumSize
        nameWithType: Form.MinimumSize
        qualifiedName: System.Windows.Forms.Form.MinimumSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MinimumSize
  System.Windows.Forms.Form.MaximizeBox:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MaximizeBox
        name: MaximizeBox
        nameWithType: Form.MaximizeBox
        qualifiedName: System.Windows.Forms.Form.MaximizeBox
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MaximizeBox
        name: MaximizeBox
        nameWithType: Form.MaximizeBox
        qualifiedName: System.Windows.Forms.Form.MaximizeBox
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MaximizeBox
  System.Windows.Forms.Form.MdiChildren:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MdiChildren
        name: MdiChildren
        nameWithType: Form.MdiChildren
        qualifiedName: System.Windows.Forms.Form.MdiChildren
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MdiChildren
        name: MdiChildren
        nameWithType: Form.MdiChildren
        qualifiedName: System.Windows.Forms.Form.MdiChildren
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MdiChildren
  System.Windows.Forms.Form.MdiParent:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MdiParent
        name: MdiParent
        nameWithType: Form.MdiParent
        qualifiedName: System.Windows.Forms.Form.MdiParent
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MdiParent
        name: MdiParent
        nameWithType: Form.MdiParent
        qualifiedName: System.Windows.Forms.Form.MdiParent
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MdiParent
  System.Windows.Forms.Form.MergedMenu:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MergedMenu
        name: MergedMenu
        nameWithType: Form.MergedMenu
        qualifiedName: System.Windows.Forms.Form.MergedMenu
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MergedMenu
        name: MergedMenu
        nameWithType: Form.MergedMenu
        qualifiedName: System.Windows.Forms.Form.MergedMenu
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MergedMenu
  System.Windows.Forms.Form.MinimizeBox:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MinimizeBox
        name: MinimizeBox
        nameWithType: Form.MinimizeBox
        qualifiedName: System.Windows.Forms.Form.MinimizeBox
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MinimizeBox
        name: MinimizeBox
        nameWithType: Form.MinimizeBox
        qualifiedName: System.Windows.Forms.Form.MinimizeBox
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.MinimizeBox
  System.Windows.Forms.Form.Modal:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Modal
        name: Modal
        nameWithType: Form.Modal
        qualifiedName: System.Windows.Forms.Form.Modal
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Modal
        name: Modal
        nameWithType: Form.Modal
        qualifiedName: System.Windows.Forms.Form.Modal
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.Modal
  System.Windows.Forms.Form.Opacity:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Opacity
        name: Opacity
        nameWithType: Form.Opacity
        qualifiedName: System.Windows.Forms.Form.Opacity
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Opacity
        name: Opacity
        nameWithType: Form.Opacity
        qualifiedName: System.Windows.Forms.Form.Opacity
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.Opacity
  System.Windows.Forms.Form.OwnedForms:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.OwnedForms
        name: OwnedForms
        nameWithType: Form.OwnedForms
        qualifiedName: System.Windows.Forms.Form.OwnedForms
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.OwnedForms
        name: OwnedForms
        nameWithType: Form.OwnedForms
        qualifiedName: System.Windows.Forms.Form.OwnedForms
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.OwnedForms
  System.Windows.Forms.Form.Owner:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Owner
        name: Owner
        nameWithType: Form.Owner
        qualifiedName: System.Windows.Forms.Form.Owner
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Owner
        name: Owner
        nameWithType: Form.Owner
        qualifiedName: System.Windows.Forms.Form.Owner
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.Owner
  System.Windows.Forms.Form.RestoreBounds:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.RestoreBounds
        name: RestoreBounds
        nameWithType: Form.RestoreBounds
        qualifiedName: System.Windows.Forms.Form.RestoreBounds
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.RestoreBounds
        name: RestoreBounds
        nameWithType: Form.RestoreBounds
        qualifiedName: System.Windows.Forms.Form.RestoreBounds
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.RestoreBounds
  System.Windows.Forms.Form.RightToLeftLayout:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.RightToLeftLayout
        name: RightToLeftLayout
        nameWithType: Form.RightToLeftLayout
        qualifiedName: System.Windows.Forms.Form.RightToLeftLayout
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.RightToLeftLayout
        name: RightToLeftLayout
        nameWithType: Form.RightToLeftLayout
        qualifiedName: System.Windows.Forms.Form.RightToLeftLayout
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.RightToLeftLayout
  System.Windows.Forms.Form.ShowInTaskbar:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ShowInTaskbar
        name: ShowInTaskbar
        nameWithType: Form.ShowInTaskbar
        qualifiedName: System.Windows.Forms.Form.ShowInTaskbar
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ShowInTaskbar
        name: ShowInTaskbar
        nameWithType: Form.ShowInTaskbar
        qualifiedName: System.Windows.Forms.Form.ShowInTaskbar
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.ShowInTaskbar
  System.Windows.Forms.Form.ShowIcon:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ShowIcon
        name: ShowIcon
        nameWithType: Form.ShowIcon
        qualifiedName: System.Windows.Forms.Form.ShowIcon
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ShowIcon
        name: ShowIcon
        nameWithType: Form.ShowIcon
        qualifiedName: System.Windows.Forms.Form.ShowIcon
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.ShowIcon
  System.Windows.Forms.Form.ShowWithoutActivation:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ShowWithoutActivation
        name: ShowWithoutActivation
        nameWithType: Form.ShowWithoutActivation
        qualifiedName: System.Windows.Forms.Form.ShowWithoutActivation
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ShowWithoutActivation
        name: ShowWithoutActivation
        nameWithType: Form.ShowWithoutActivation
        qualifiedName: System.Windows.Forms.Form.ShowWithoutActivation
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.ShowWithoutActivation
  System.Windows.Forms.Form.Size:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Size
        name: Size
        nameWithType: Form.Size
        qualifiedName: System.Windows.Forms.Form.Size
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Size
        name: Size
        nameWithType: Form.Size
        qualifiedName: System.Windows.Forms.Form.Size
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.Size
  System.Windows.Forms.Form.SizeGripStyle:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.SizeGripStyle
        name: SizeGripStyle
        nameWithType: Form.SizeGripStyle
        qualifiedName: System.Windows.Forms.Form.SizeGripStyle
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.SizeGripStyle
        name: SizeGripStyle
        nameWithType: Form.SizeGripStyle
        qualifiedName: System.Windows.Forms.Form.SizeGripStyle
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.SizeGripStyle
  System.Windows.Forms.Form.StartPosition:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.StartPosition
        name: StartPosition
        nameWithType: Form.StartPosition
        qualifiedName: System.Windows.Forms.Form.StartPosition
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.StartPosition
        name: StartPosition
        nameWithType: Form.StartPosition
        qualifiedName: System.Windows.Forms.Form.StartPosition
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.StartPosition
  System.Windows.Forms.Form.Text:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Text
        name: Text
        nameWithType: Form.Text
        qualifiedName: System.Windows.Forms.Form.Text
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Text
        name: Text
        nameWithType: Form.Text
        qualifiedName: System.Windows.Forms.Form.Text
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.Text
  System.Windows.Forms.Form.TopLevel:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.TopLevel
        name: TopLevel
        nameWithType: Form.TopLevel
        qualifiedName: System.Windows.Forms.Form.TopLevel
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.TopLevel
        name: TopLevel
        nameWithType: Form.TopLevel
        qualifiedName: System.Windows.Forms.Form.TopLevel
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.TopLevel
  System.Windows.Forms.Form.TopMost:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.TopMost
        name: TopMost
        nameWithType: Form.TopMost
        qualifiedName: System.Windows.Forms.Form.TopMost
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.TopMost
        name: TopMost
        nameWithType: Form.TopMost
        qualifiedName: System.Windows.Forms.Form.TopMost
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.TopMost
  System.Windows.Forms.Form.TransparencyKey:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.TransparencyKey
        name: TransparencyKey
        nameWithType: Form.TransparencyKey
        qualifiedName: System.Windows.Forms.Form.TransparencyKey
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.TransparencyKey
        name: TransparencyKey
        nameWithType: Form.TransparencyKey
        qualifiedName: System.Windows.Forms.Form.TransparencyKey
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.TransparencyKey
  System.Windows.Forms.Form.WindowState:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.WindowState
        name: WindowState
        nameWithType: Form.WindowState
        qualifiedName: System.Windows.Forms.Form.WindowState
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.WindowState
        name: WindowState
        nameWithType: Form.WindowState
        qualifiedName: System.Windows.Forms.Form.WindowState
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: P:System.Windows.Forms.Form.WindowState
  System.Windows.Forms.Form.AutoSizeChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AutoSizeChanged
        name: AutoSizeChanged
        nameWithType: Form.AutoSizeChanged
        qualifiedName: System.Windows.Forms.Form.AutoSizeChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.AutoSizeChanged
        name: AutoSizeChanged
        nameWithType: Form.AutoSizeChanged
        qualifiedName: System.Windows.Forms.Form.AutoSizeChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.AutoSizeChanged
  System.Windows.Forms.Form.AutoValidateChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.AutoValidateChanged
        name: AutoValidateChanged
        nameWithType: Form.AutoValidateChanged
        qualifiedName: System.Windows.Forms.Form.AutoValidateChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.AutoValidateChanged
        name: AutoValidateChanged
        nameWithType: Form.AutoValidateChanged
        qualifiedName: System.Windows.Forms.Form.AutoValidateChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.AutoValidateChanged
  System.Windows.Forms.Form.HelpButtonClicked:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.HelpButtonClicked
        name: HelpButtonClicked
        nameWithType: Form.HelpButtonClicked
        qualifiedName: System.Windows.Forms.Form.HelpButtonClicked
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.HelpButtonClicked
        name: HelpButtonClicked
        nameWithType: Form.HelpButtonClicked
        qualifiedName: System.Windows.Forms.Form.HelpButtonClicked
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.HelpButtonClicked
  System.Windows.Forms.Form.MaximizedBoundsChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MaximizedBoundsChanged
        name: MaximizedBoundsChanged
        nameWithType: Form.MaximizedBoundsChanged
        qualifiedName: System.Windows.Forms.Form.MaximizedBoundsChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MaximizedBoundsChanged
        name: MaximizedBoundsChanged
        nameWithType: Form.MaximizedBoundsChanged
        qualifiedName: System.Windows.Forms.Form.MaximizedBoundsChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.MaximizedBoundsChanged
  System.Windows.Forms.Form.MaximumSizeChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MaximumSizeChanged
        name: MaximumSizeChanged
        nameWithType: Form.MaximumSizeChanged
        qualifiedName: System.Windows.Forms.Form.MaximumSizeChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MaximumSizeChanged
        name: MaximumSizeChanged
        nameWithType: Form.MaximumSizeChanged
        qualifiedName: System.Windows.Forms.Form.MaximumSizeChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.MaximumSizeChanged
  System.Windows.Forms.Form.MinimumSizeChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MinimumSizeChanged
        name: MinimumSizeChanged
        nameWithType: Form.MinimumSizeChanged
        qualifiedName: System.Windows.Forms.Form.MinimumSizeChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MinimumSizeChanged
        name: MinimumSizeChanged
        nameWithType: Form.MinimumSizeChanged
        qualifiedName: System.Windows.Forms.Form.MinimumSizeChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.MinimumSizeChanged
  System.Windows.Forms.Form.Activated:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Activated
        name: Activated
        nameWithType: Form.Activated
        qualifiedName: System.Windows.Forms.Form.Activated
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Activated
        name: Activated
        nameWithType: Form.Activated
        qualifiedName: System.Windows.Forms.Form.Activated
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.Activated
  System.Windows.Forms.Form.Deactivate:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Deactivate
        name: Deactivate
        nameWithType: Form.Deactivate
        qualifiedName: System.Windows.Forms.Form.Deactivate
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Deactivate
        name: Deactivate
        nameWithType: Form.Deactivate
        qualifiedName: System.Windows.Forms.Form.Deactivate
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.Deactivate
  System.Windows.Forms.Form.FormClosing:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.FormClosing
        name: FormClosing
        nameWithType: Form.FormClosing
        qualifiedName: System.Windows.Forms.Form.FormClosing
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.FormClosing
        name: FormClosing
        nameWithType: Form.FormClosing
        qualifiedName: System.Windows.Forms.Form.FormClosing
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.FormClosing
  System.Windows.Forms.Form.FormClosed:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.FormClosed
        name: FormClosed
        nameWithType: Form.FormClosed
        qualifiedName: System.Windows.Forms.Form.FormClosed
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.FormClosed
        name: FormClosed
        nameWithType: Form.FormClosed
        qualifiedName: System.Windows.Forms.Form.FormClosed
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.FormClosed
  System.Windows.Forms.Form.Load:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Load
        name: Load
        nameWithType: Form.Load
        qualifiedName: System.Windows.Forms.Form.Load
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Load
        name: Load
        nameWithType: Form.Load
        qualifiedName: System.Windows.Forms.Form.Load
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.Load
  System.Windows.Forms.Form.MdiChildActivate:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MdiChildActivate
        name: MdiChildActivate
        nameWithType: Form.MdiChildActivate
        qualifiedName: System.Windows.Forms.Form.MdiChildActivate
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MdiChildActivate
        name: MdiChildActivate
        nameWithType: Form.MdiChildActivate
        qualifiedName: System.Windows.Forms.Form.MdiChildActivate
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.MdiChildActivate
  System.Windows.Forms.Form.MenuComplete:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MenuComplete
        name: MenuComplete
        nameWithType: Form.MenuComplete
        qualifiedName: System.Windows.Forms.Form.MenuComplete
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MenuComplete
        name: MenuComplete
        nameWithType: Form.MenuComplete
        qualifiedName: System.Windows.Forms.Form.MenuComplete
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.MenuComplete
  System.Windows.Forms.Form.MenuStart:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.MenuStart
        name: MenuStart
        nameWithType: Form.MenuStart
        qualifiedName: System.Windows.Forms.Form.MenuStart
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.MenuStart
        name: MenuStart
        nameWithType: Form.MenuStart
        qualifiedName: System.Windows.Forms.Form.MenuStart
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.MenuStart
  System.Windows.Forms.Form.InputLanguageChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.InputLanguageChanged
        name: InputLanguageChanged
        nameWithType: Form.InputLanguageChanged
        qualifiedName: System.Windows.Forms.Form.InputLanguageChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.InputLanguageChanged
        name: InputLanguageChanged
        nameWithType: Form.InputLanguageChanged
        qualifiedName: System.Windows.Forms.Form.InputLanguageChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.InputLanguageChanged
  System.Windows.Forms.Form.InputLanguageChanging:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.InputLanguageChanging
        name: InputLanguageChanging
        nameWithType: Form.InputLanguageChanging
        qualifiedName: System.Windows.Forms.Form.InputLanguageChanging
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.InputLanguageChanging
        name: InputLanguageChanging
        nameWithType: Form.InputLanguageChanging
        qualifiedName: System.Windows.Forms.Form.InputLanguageChanging
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.InputLanguageChanging
  System.Windows.Forms.Form.RightToLeftLayoutChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.RightToLeftLayoutChanged
        name: RightToLeftLayoutChanged
        nameWithType: Form.RightToLeftLayoutChanged
        qualifiedName: System.Windows.Forms.Form.RightToLeftLayoutChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.RightToLeftLayoutChanged
        name: RightToLeftLayoutChanged
        nameWithType: Form.RightToLeftLayoutChanged
        qualifiedName: System.Windows.Forms.Form.RightToLeftLayoutChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.RightToLeftLayoutChanged
  System.Windows.Forms.Form.Shown:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Shown
        name: Shown
        nameWithType: Form.Shown
        qualifiedName: System.Windows.Forms.Form.Shown
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.Shown
        name: Shown
        nameWithType: Form.Shown
        qualifiedName: System.Windows.Forms.Form.Shown
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.Shown
  System.Windows.Forms.Form.DpiChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.DpiChanged
        name: DpiChanged
        nameWithType: Form.DpiChanged
        qualifiedName: System.Windows.Forms.Form.DpiChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.DpiChanged
        name: DpiChanged
        nameWithType: Form.DpiChanged
        qualifiedName: System.Windows.Forms.Form.DpiChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.DpiChanged
  System.Windows.Forms.Form.ResizeBegin:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ResizeBegin
        name: ResizeBegin
        nameWithType: Form.ResizeBegin
        qualifiedName: System.Windows.Forms.Form.ResizeBegin
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ResizeBegin
        name: ResizeBegin
        nameWithType: Form.ResizeBegin
        qualifiedName: System.Windows.Forms.Form.ResizeBegin
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.ResizeBegin
  System.Windows.Forms.Form.ResizeEnd:
    name:
      CSharp:
      - id: System.Windows.Forms.Form.ResizeEnd
        name: ResizeEnd
        nameWithType: Form.ResizeEnd
        qualifiedName: System.Windows.Forms.Form.ResizeEnd
        isExternal: true
      VB:
      - id: System.Windows.Forms.Form.ResizeEnd
        name: ResizeEnd
        nameWithType: Form.ResizeEnd
        qualifiedName: System.Windows.Forms.Form.ResizeEnd
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: E:System.Windows.Forms.Form.ResizeEnd
  System.Windows.Forms.ContainerControl:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl
        name: ContainerControl
        nameWithType: ContainerControl
        qualifiedName: System.Windows.Forms.ContainerControl
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl
        name: ContainerControl
        nameWithType: ContainerControl
        qualifiedName: System.Windows.Forms.ContainerControl
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.ContainerControl
  System.Windows.Forms.ContainerControl.System#Windows#Forms#IContainerControl#ActivateControl(System.Windows.Forms.Control):
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.System#Windows#Forms#IContainerControl#ActivateControl(System.Windows.Forms.Control)
        name: IContainerControl.ActivateControl
        nameWithType: ContainerControl.IContainerControl.ActivateControl
        qualifiedName: System.Windows.Forms.ContainerControl.System.Windows.Forms.IContainerControl.ActivateControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ContainerControl.System#Windows#Forms#IContainerControl#ActivateControl(System.Windows.Forms.Control)
        name: System.Windows.Forms.IContainerControl.ActivateControl
        nameWithType: ContainerControl.System.Windows.Forms.IContainerControl.ActivateControl
        qualifiedName: System.Windows.Forms.ContainerControl.System.Windows.Forms.IContainerControl.ActivateControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: M:System.Windows.Forms.ContainerControl.System#Windows#Forms#IContainerControl#ActivateControl(System.Windows.Forms.Control)
  System.Windows.Forms.ContainerControl.OnAutoValidateChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.OnAutoValidateChanged(System.EventArgs)
        name: OnAutoValidateChanged
        nameWithType: ContainerControl.OnAutoValidateChanged
        qualifiedName: System.Windows.Forms.ContainerControl.OnAutoValidateChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ContainerControl.OnAutoValidateChanged(System.EventArgs)
        name: OnAutoValidateChanged
        nameWithType: ContainerControl.OnAutoValidateChanged
        qualifiedName: System.Windows.Forms.ContainerControl.OnAutoValidateChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: M:System.Windows.Forms.ContainerControl.OnAutoValidateChanged(System.EventArgs)
  System.Windows.Forms.ContainerControl.OnParentChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.OnParentChanged(System.EventArgs)
        name: OnParentChanged
        nameWithType: ContainerControl.OnParentChanged
        qualifiedName: System.Windows.Forms.ContainerControl.OnParentChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ContainerControl.OnParentChanged(System.EventArgs)
        name: OnParentChanged
        nameWithType: ContainerControl.OnParentChanged
        qualifiedName: System.Windows.Forms.ContainerControl.OnParentChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: M:System.Windows.Forms.ContainerControl.OnParentChanged(System.EventArgs)
  System.Windows.Forms.ContainerControl.PerformAutoScale:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.PerformAutoScale
        name: PerformAutoScale
        nameWithType: ContainerControl.PerformAutoScale
        qualifiedName: System.Windows.Forms.ContainerControl.PerformAutoScale
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ContainerControl.PerformAutoScale
        name: PerformAutoScale
        nameWithType: ContainerControl.PerformAutoScale
        qualifiedName: System.Windows.Forms.ContainerControl.PerformAutoScale
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: M:System.Windows.Forms.ContainerControl.PerformAutoScale
  System.Windows.Forms.ContainerControl.Validate:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.Validate
        name: Validate
        nameWithType: ContainerControl.Validate
        qualifiedName: System.Windows.Forms.ContainerControl.Validate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ContainerControl.Validate
        name: Validate
        nameWithType: ContainerControl.Validate
        qualifiedName: System.Windows.Forms.ContainerControl.Validate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: M:System.Windows.Forms.ContainerControl.Validate
  System.Windows.Forms.ContainerControl.Validate(System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.Validate(System.Boolean)
        name: Validate
        nameWithType: ContainerControl.Validate
        qualifiedName: System.Windows.Forms.ContainerControl.Validate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ContainerControl.Validate(System.Boolean)
        name: Validate
        nameWithType: ContainerControl.Validate
        qualifiedName: System.Windows.Forms.ContainerControl.Validate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: M:System.Windows.Forms.ContainerControl.Validate(System.Boolean)
  System.Windows.Forms.ContainerControl.AutoScaleDimensions:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.AutoScaleDimensions
        name: AutoScaleDimensions
        nameWithType: ContainerControl.AutoScaleDimensions
        qualifiedName: System.Windows.Forms.ContainerControl.AutoScaleDimensions
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl.AutoScaleDimensions
        name: AutoScaleDimensions
        nameWithType: ContainerControl.AutoScaleDimensions
        qualifiedName: System.Windows.Forms.ContainerControl.AutoScaleDimensions
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: P:System.Windows.Forms.ContainerControl.AutoScaleDimensions
  System.Windows.Forms.ContainerControl.AutoScaleFactor:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.AutoScaleFactor
        name: AutoScaleFactor
        nameWithType: ContainerControl.AutoScaleFactor
        qualifiedName: System.Windows.Forms.ContainerControl.AutoScaleFactor
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl.AutoScaleFactor
        name: AutoScaleFactor
        nameWithType: ContainerControl.AutoScaleFactor
        qualifiedName: System.Windows.Forms.ContainerControl.AutoScaleFactor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: P:System.Windows.Forms.ContainerControl.AutoScaleFactor
  System.Windows.Forms.ContainerControl.AutoScaleMode:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.AutoScaleMode
        name: AutoScaleMode
        nameWithType: ContainerControl.AutoScaleMode
        qualifiedName: System.Windows.Forms.ContainerControl.AutoScaleMode
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl.AutoScaleMode
        name: AutoScaleMode
        nameWithType: ContainerControl.AutoScaleMode
        qualifiedName: System.Windows.Forms.ContainerControl.AutoScaleMode
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: P:System.Windows.Forms.ContainerControl.AutoScaleMode
  System.Windows.Forms.ContainerControl.BindingContext:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.BindingContext
        name: BindingContext
        nameWithType: ContainerControl.BindingContext
        qualifiedName: System.Windows.Forms.ContainerControl.BindingContext
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl.BindingContext
        name: BindingContext
        nameWithType: ContainerControl.BindingContext
        qualifiedName: System.Windows.Forms.ContainerControl.BindingContext
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: P:System.Windows.Forms.ContainerControl.BindingContext
  System.Windows.Forms.ContainerControl.CanEnableIme:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.CanEnableIme
        name: CanEnableIme
        nameWithType: ContainerControl.CanEnableIme
        qualifiedName: System.Windows.Forms.ContainerControl.CanEnableIme
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl.CanEnableIme
        name: CanEnableIme
        nameWithType: ContainerControl.CanEnableIme
        qualifiedName: System.Windows.Forms.ContainerControl.CanEnableIme
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: P:System.Windows.Forms.ContainerControl.CanEnableIme
  System.Windows.Forms.ContainerControl.ActiveControl:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.ActiveControl
        name: ActiveControl
        nameWithType: ContainerControl.ActiveControl
        qualifiedName: System.Windows.Forms.ContainerControl.ActiveControl
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl.ActiveControl
        name: ActiveControl
        nameWithType: ContainerControl.ActiveControl
        qualifiedName: System.Windows.Forms.ContainerControl.ActiveControl
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: P:System.Windows.Forms.ContainerControl.ActiveControl
  System.Windows.Forms.ContainerControl.CurrentAutoScaleDimensions:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.CurrentAutoScaleDimensions
        name: CurrentAutoScaleDimensions
        nameWithType: ContainerControl.CurrentAutoScaleDimensions
        qualifiedName: System.Windows.Forms.ContainerControl.CurrentAutoScaleDimensions
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl.CurrentAutoScaleDimensions
        name: CurrentAutoScaleDimensions
        nameWithType: ContainerControl.CurrentAutoScaleDimensions
        qualifiedName: System.Windows.Forms.ContainerControl.CurrentAutoScaleDimensions
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: P:System.Windows.Forms.ContainerControl.CurrentAutoScaleDimensions
  System.Windows.Forms.ContainerControl.ParentForm:
    name:
      CSharp:
      - id: System.Windows.Forms.ContainerControl.ParentForm
        name: ParentForm
        nameWithType: ContainerControl.ParentForm
        qualifiedName: System.Windows.Forms.ContainerControl.ParentForm
        isExternal: true
      VB:
      - id: System.Windows.Forms.ContainerControl.ParentForm
        name: ParentForm
        nameWithType: ContainerControl.ParentForm
        qualifiedName: System.Windows.Forms.ContainerControl.ParentForm
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ContainerControl
    commentId: P:System.Windows.Forms.ContainerControl.ParentForm
  System.Windows.Forms.ScrollableControl:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl
        name: ScrollableControl
        nameWithType: ScrollableControl
        qualifiedName: System.Windows.Forms.ScrollableControl
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl
        name: ScrollableControl
        nameWithType: ScrollableControl
        qualifiedName: System.Windows.Forms.ScrollableControl
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.ScrollableControl
  System.Windows.Forms.ScrollableControl.ScrollStateAutoScrolling:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateAutoScrolling
        name: ScrollStateAutoScrolling
        nameWithType: ScrollableControl.ScrollStateAutoScrolling
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateAutoScrolling
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateAutoScrolling
        name: ScrollStateAutoScrolling
        nameWithType: ScrollableControl.ScrollStateAutoScrolling
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateAutoScrolling
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: F:System.Windows.Forms.ScrollableControl.ScrollStateAutoScrolling
  System.Windows.Forms.ScrollableControl.ScrollStateHScrollVisible:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateHScrollVisible
        name: ScrollStateHScrollVisible
        nameWithType: ScrollableControl.ScrollStateHScrollVisible
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateHScrollVisible
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateHScrollVisible
        name: ScrollStateHScrollVisible
        nameWithType: ScrollableControl.ScrollStateHScrollVisible
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateHScrollVisible
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: F:System.Windows.Forms.ScrollableControl.ScrollStateHScrollVisible
  System.Windows.Forms.ScrollableControl.ScrollStateVScrollVisible:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateVScrollVisible
        name: ScrollStateVScrollVisible
        nameWithType: ScrollableControl.ScrollStateVScrollVisible
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateVScrollVisible
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateVScrollVisible
        name: ScrollStateVScrollVisible
        nameWithType: ScrollableControl.ScrollStateVScrollVisible
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateVScrollVisible
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: F:System.Windows.Forms.ScrollableControl.ScrollStateVScrollVisible
  System.Windows.Forms.ScrollableControl.ScrollStateUserHasScrolled:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateUserHasScrolled
        name: ScrollStateUserHasScrolled
        nameWithType: ScrollableControl.ScrollStateUserHasScrolled
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateUserHasScrolled
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateUserHasScrolled
        name: ScrollStateUserHasScrolled
        nameWithType: ScrollableControl.ScrollStateUserHasScrolled
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateUserHasScrolled
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: F:System.Windows.Forms.ScrollableControl.ScrollStateUserHasScrolled
  System.Windows.Forms.ScrollableControl.ScrollStateFullDrag:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateFullDrag
        name: ScrollStateFullDrag
        nameWithType: ScrollableControl.ScrollStateFullDrag
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateFullDrag
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.ScrollStateFullDrag
        name: ScrollStateFullDrag
        nameWithType: ScrollableControl.ScrollStateFullDrag
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollStateFullDrag
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: F:System.Windows.Forms.ScrollableControl.ScrollStateFullDrag
  System.Windows.Forms.ScrollableControl.GetScrollState(System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.GetScrollState(System.Int32)
        name: GetScrollState
        nameWithType: ScrollableControl.GetScrollState
        qualifiedName: System.Windows.Forms.ScrollableControl.GetScrollState
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.GetScrollState(System.Int32)
        name: GetScrollState
        nameWithType: ScrollableControl.GetScrollState
        qualifiedName: System.Windows.Forms.ScrollableControl.GetScrollState
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.GetScrollState(System.Int32)
  System.Windows.Forms.ScrollableControl.OnMouseWheel(System.Windows.Forms.MouseEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.OnMouseWheel(System.Windows.Forms.MouseEventArgs)
        name: OnMouseWheel
        nameWithType: ScrollableControl.OnMouseWheel
        qualifiedName: System.Windows.Forms.ScrollableControl.OnMouseWheel
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.OnMouseWheel(System.Windows.Forms.MouseEventArgs)
        name: OnMouseWheel
        nameWithType: ScrollableControl.OnMouseWheel
        qualifiedName: System.Windows.Forms.ScrollableControl.OnMouseWheel
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.OnMouseWheel(System.Windows.Forms.MouseEventArgs)
  System.Windows.Forms.ScrollableControl.OnRightToLeftChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.OnRightToLeftChanged(System.EventArgs)
        name: OnRightToLeftChanged
        nameWithType: ScrollableControl.OnRightToLeftChanged
        qualifiedName: System.Windows.Forms.ScrollableControl.OnRightToLeftChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.OnRightToLeftChanged(System.EventArgs)
        name: OnRightToLeftChanged
        nameWithType: ScrollableControl.OnRightToLeftChanged
        qualifiedName: System.Windows.Forms.ScrollableControl.OnRightToLeftChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.OnRightToLeftChanged(System.EventArgs)
  System.Windows.Forms.ScrollableControl.OnPaintBackground(System.Windows.Forms.PaintEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.OnPaintBackground(System.Windows.Forms.PaintEventArgs)
        name: OnPaintBackground
        nameWithType: ScrollableControl.OnPaintBackground
        qualifiedName: System.Windows.Forms.ScrollableControl.OnPaintBackground
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.OnPaintBackground(System.Windows.Forms.PaintEventArgs)
        name: OnPaintBackground
        nameWithType: ScrollableControl.OnPaintBackground
        qualifiedName: System.Windows.Forms.ScrollableControl.OnPaintBackground
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.OnPaintBackground(System.Windows.Forms.PaintEventArgs)
  System.Windows.Forms.ScrollableControl.OnPaddingChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.OnPaddingChanged(System.EventArgs)
        name: OnPaddingChanged
        nameWithType: ScrollableControl.OnPaddingChanged
        qualifiedName: System.Windows.Forms.ScrollableControl.OnPaddingChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.OnPaddingChanged(System.EventArgs)
        name: OnPaddingChanged
        nameWithType: ScrollableControl.OnPaddingChanged
        qualifiedName: System.Windows.Forms.ScrollableControl.OnPaddingChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.OnPaddingChanged(System.EventArgs)
  System.Windows.Forms.ScrollableControl.SetDisplayRectLocation(System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.SetDisplayRectLocation(System.Int32,System.Int32)
        name: SetDisplayRectLocation
        nameWithType: ScrollableControl.SetDisplayRectLocation
        qualifiedName: System.Windows.Forms.ScrollableControl.SetDisplayRectLocation
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.SetDisplayRectLocation(System.Int32,System.Int32)
        name: SetDisplayRectLocation
        nameWithType: ScrollableControl.SetDisplayRectLocation
        qualifiedName: System.Windows.Forms.ScrollableControl.SetDisplayRectLocation
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.SetDisplayRectLocation(System.Int32,System.Int32)
  System.Windows.Forms.ScrollableControl.ScrollControlIntoView(System.Windows.Forms.Control):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.ScrollControlIntoView(System.Windows.Forms.Control)
        name: ScrollControlIntoView
        nameWithType: ScrollableControl.ScrollControlIntoView
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollControlIntoView
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.ScrollControlIntoView(System.Windows.Forms.Control)
        name: ScrollControlIntoView
        nameWithType: ScrollableControl.ScrollControlIntoView
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollControlIntoView
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.ScrollControlIntoView(System.Windows.Forms.Control)
  System.Windows.Forms.ScrollableControl.ScrollToControl(System.Windows.Forms.Control):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.ScrollToControl(System.Windows.Forms.Control)
        name: ScrollToControl
        nameWithType: ScrollableControl.ScrollToControl
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollToControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.ScrollToControl(System.Windows.Forms.Control)
        name: ScrollToControl
        nameWithType: ScrollableControl.ScrollToControl
        qualifiedName: System.Windows.Forms.ScrollableControl.ScrollToControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.ScrollToControl(System.Windows.Forms.Control)
  System.Windows.Forms.ScrollableControl.OnScroll(System.Windows.Forms.ScrollEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.OnScroll(System.Windows.Forms.ScrollEventArgs)
        name: OnScroll
        nameWithType: ScrollableControl.OnScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.OnScroll
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ScrollEventArgs
        name: ScrollEventArgs
        nameWithType: ScrollEventArgs
        qualifiedName: System.Windows.Forms.ScrollEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.OnScroll(System.Windows.Forms.ScrollEventArgs)
        name: OnScroll
        nameWithType: ScrollableControl.OnScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.OnScroll
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ScrollEventArgs
        name: ScrollEventArgs
        nameWithType: ScrollEventArgs
        qualifiedName: System.Windows.Forms.ScrollEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.OnScroll(System.Windows.Forms.ScrollEventArgs)
  System.Windows.Forms.ScrollableControl.SetAutoScrollMargin(System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.SetAutoScrollMargin(System.Int32,System.Int32)
        name: SetAutoScrollMargin
        nameWithType: ScrollableControl.SetAutoScrollMargin
        qualifiedName: System.Windows.Forms.ScrollableControl.SetAutoScrollMargin
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.SetAutoScrollMargin(System.Int32,System.Int32)
        name: SetAutoScrollMargin
        nameWithType: ScrollableControl.SetAutoScrollMargin
        qualifiedName: System.Windows.Forms.ScrollableControl.SetAutoScrollMargin
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.SetAutoScrollMargin(System.Int32,System.Int32)
  System.Windows.Forms.ScrollableControl.SetScrollState(System.Int32,System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.SetScrollState(System.Int32,System.Boolean)
        name: SetScrollState
        nameWithType: ScrollableControl.SetScrollState
        qualifiedName: System.Windows.Forms.ScrollableControl.SetScrollState
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.ScrollableControl.SetScrollState(System.Int32,System.Boolean)
        name: SetScrollState
        nameWithType: ScrollableControl.SetScrollState
        qualifiedName: System.Windows.Forms.ScrollableControl.SetScrollState
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: M:System.Windows.Forms.ScrollableControl.SetScrollState(System.Int32,System.Boolean)
  System.Windows.Forms.ScrollableControl.AutoScrollMargin:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.AutoScrollMargin
        name: AutoScrollMargin
        nameWithType: ScrollableControl.AutoScrollMargin
        qualifiedName: System.Windows.Forms.ScrollableControl.AutoScrollMargin
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.AutoScrollMargin
        name: AutoScrollMargin
        nameWithType: ScrollableControl.AutoScrollMargin
        qualifiedName: System.Windows.Forms.ScrollableControl.AutoScrollMargin
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: P:System.Windows.Forms.ScrollableControl.AutoScrollMargin
  System.Windows.Forms.ScrollableControl.AutoScrollPosition:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.AutoScrollPosition
        name: AutoScrollPosition
        nameWithType: ScrollableControl.AutoScrollPosition
        qualifiedName: System.Windows.Forms.ScrollableControl.AutoScrollPosition
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.AutoScrollPosition
        name: AutoScrollPosition
        nameWithType: ScrollableControl.AutoScrollPosition
        qualifiedName: System.Windows.Forms.ScrollableControl.AutoScrollPosition
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: P:System.Windows.Forms.ScrollableControl.AutoScrollPosition
  System.Windows.Forms.ScrollableControl.AutoScrollMinSize:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.AutoScrollMinSize
        name: AutoScrollMinSize
        nameWithType: ScrollableControl.AutoScrollMinSize
        qualifiedName: System.Windows.Forms.ScrollableControl.AutoScrollMinSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.AutoScrollMinSize
        name: AutoScrollMinSize
        nameWithType: ScrollableControl.AutoScrollMinSize
        qualifiedName: System.Windows.Forms.ScrollableControl.AutoScrollMinSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: P:System.Windows.Forms.ScrollableControl.AutoScrollMinSize
  System.Windows.Forms.ScrollableControl.DisplayRectangle:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.DisplayRectangle
        name: DisplayRectangle
        nameWithType: ScrollableControl.DisplayRectangle
        qualifiedName: System.Windows.Forms.ScrollableControl.DisplayRectangle
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.DisplayRectangle
        name: DisplayRectangle
        nameWithType: ScrollableControl.DisplayRectangle
        qualifiedName: System.Windows.Forms.ScrollableControl.DisplayRectangle
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: P:System.Windows.Forms.ScrollableControl.DisplayRectangle
  System.Windows.Forms.ScrollableControl.HScroll:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.HScroll
        name: HScroll
        nameWithType: ScrollableControl.HScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.HScroll
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.HScroll
        name: HScroll
        nameWithType: ScrollableControl.HScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.HScroll
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: P:System.Windows.Forms.ScrollableControl.HScroll
  System.Windows.Forms.ScrollableControl.HorizontalScroll:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.HorizontalScroll
        name: HorizontalScroll
        nameWithType: ScrollableControl.HorizontalScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.HorizontalScroll
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.HorizontalScroll
        name: HorizontalScroll
        nameWithType: ScrollableControl.HorizontalScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.HorizontalScroll
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: P:System.Windows.Forms.ScrollableControl.HorizontalScroll
  System.Windows.Forms.ScrollableControl.VScroll:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.VScroll
        name: VScroll
        nameWithType: ScrollableControl.VScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.VScroll
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.VScroll
        name: VScroll
        nameWithType: ScrollableControl.VScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.VScroll
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: P:System.Windows.Forms.ScrollableControl.VScroll
  System.Windows.Forms.ScrollableControl.VerticalScroll:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.VerticalScroll
        name: VerticalScroll
        nameWithType: ScrollableControl.VerticalScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.VerticalScroll
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.VerticalScroll
        name: VerticalScroll
        nameWithType: ScrollableControl.VerticalScroll
        qualifiedName: System.Windows.Forms.ScrollableControl.VerticalScroll
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: P:System.Windows.Forms.ScrollableControl.VerticalScroll
  System.Windows.Forms.ScrollableControl.Scroll:
    name:
      CSharp:
      - id: System.Windows.Forms.ScrollableControl.Scroll
        name: Scroll
        nameWithType: ScrollableControl.Scroll
        qualifiedName: System.Windows.Forms.ScrollableControl.Scroll
        isExternal: true
      VB:
      - id: System.Windows.Forms.ScrollableControl.Scroll
        name: Scroll
        nameWithType: ScrollableControl.Scroll
        qualifiedName: System.Windows.Forms.ScrollableControl.Scroll
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.ScrollableControl
    commentId: E:System.Windows.Forms.ScrollableControl.Scroll
  System.Windows.Forms.Control:
    name:
      CSharp:
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.Control
  System.Windows.Forms.Control.GetAccessibilityObjectById(System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetAccessibilityObjectById(System.Int32)
        name: GetAccessibilityObjectById
        nameWithType: Control.GetAccessibilityObjectById
        qualifiedName: System.Windows.Forms.Control.GetAccessibilityObjectById
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetAccessibilityObjectById(System.Int32)
        name: GetAccessibilityObjectById
        nameWithType: Control.GetAccessibilityObjectById
        qualifiedName: System.Windows.Forms.Control.GetAccessibilityObjectById
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetAccessibilityObjectById(System.Int32)
  System.Windows.Forms.Control.SetAutoSizeMode(System.Windows.Forms.AutoSizeMode):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SetAutoSizeMode(System.Windows.Forms.AutoSizeMode)
        name: SetAutoSizeMode
        nameWithType: Control.SetAutoSizeMode
        qualifiedName: System.Windows.Forms.Control.SetAutoSizeMode
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.AutoSizeMode
        name: AutoSizeMode
        nameWithType: AutoSizeMode
        qualifiedName: System.Windows.Forms.AutoSizeMode
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SetAutoSizeMode(System.Windows.Forms.AutoSizeMode)
        name: SetAutoSizeMode
        nameWithType: Control.SetAutoSizeMode
        qualifiedName: System.Windows.Forms.Control.SetAutoSizeMode
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.AutoSizeMode
        name: AutoSizeMode
        nameWithType: AutoSizeMode
        qualifiedName: System.Windows.Forms.AutoSizeMode
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SetAutoSizeMode(System.Windows.Forms.AutoSizeMode)
  System.Windows.Forms.Control.GetAutoSizeMode:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetAutoSizeMode
        name: GetAutoSizeMode
        nameWithType: Control.GetAutoSizeMode
        qualifiedName: System.Windows.Forms.Control.GetAutoSizeMode
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetAutoSizeMode
        name: GetAutoSizeMode
        nameWithType: Control.GetAutoSizeMode
        qualifiedName: System.Windows.Forms.Control.GetAutoSizeMode
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetAutoSizeMode
  System.Windows.Forms.Control.GetPreferredSize(System.Drawing.Size):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetPreferredSize(System.Drawing.Size)
        name: GetPreferredSize
        nameWithType: Control.GetPreferredSize
        qualifiedName: System.Windows.Forms.Control.GetPreferredSize
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Size
        name: Size
        nameWithType: Size
        qualifiedName: System.Drawing.Size
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetPreferredSize(System.Drawing.Size)
        name: GetPreferredSize
        nameWithType: Control.GetPreferredSize
        qualifiedName: System.Windows.Forms.Control.GetPreferredSize
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Size
        name: Size
        nameWithType: Size
        qualifiedName: System.Drawing.Size
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetPreferredSize(System.Drawing.Size)
  System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32)
        name: AccessibilityNotifyClients
        nameWithType: Control.AccessibilityNotifyClients
        qualifiedName: System.Windows.Forms.Control.AccessibilityNotifyClients
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.AccessibleEvents
        name: AccessibleEvents
        nameWithType: AccessibleEvents
        qualifiedName: System.Windows.Forms.AccessibleEvents
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32)
        name: AccessibilityNotifyClients
        nameWithType: Control.AccessibilityNotifyClients
        qualifiedName: System.Windows.Forms.Control.AccessibilityNotifyClients
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.AccessibleEvents
        name: AccessibleEvents
        nameWithType: AccessibleEvents
        qualifiedName: System.Windows.Forms.AccessibleEvents
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32)
  System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32,System.Int32)
        name: AccessibilityNotifyClients
        nameWithType: Control.AccessibilityNotifyClients
        qualifiedName: System.Windows.Forms.Control.AccessibilityNotifyClients
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.AccessibleEvents
        name: AccessibleEvents
        nameWithType: AccessibleEvents
        qualifiedName: System.Windows.Forms.AccessibleEvents
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32,System.Int32)
        name: AccessibilityNotifyClients
        nameWithType: Control.AccessibilityNotifyClients
        qualifiedName: System.Windows.Forms.Control.AccessibilityNotifyClients
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.AccessibleEvents
        name: AccessibleEvents
        nameWithType: AccessibleEvents
        qualifiedName: System.Windows.Forms.AccessibleEvents
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.AccessibilityNotifyClients(System.Windows.Forms.AccessibleEvents,System.Int32,System.Int32)
  System.Windows.Forms.Control.BeginInvoke(System.Delegate):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BeginInvoke(System.Delegate)
        name: BeginInvoke
        nameWithType: Control.BeginInvoke
        qualifiedName: System.Windows.Forms.Control.BeginInvoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Delegate
        name: Delegate
        nameWithType: Delegate
        qualifiedName: System.Delegate
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.BeginInvoke(System.Delegate)
        name: BeginInvoke
        nameWithType: Control.BeginInvoke
        qualifiedName: System.Windows.Forms.Control.BeginInvoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Delegate
        name: Delegate
        nameWithType: Delegate
        qualifiedName: System.Delegate
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.BeginInvoke(System.Delegate)
  System.Windows.Forms.Control.BeginInvoke(System.Delegate,System.Object[]):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BeginInvoke(System.Delegate,System.Object[])
        name: BeginInvoke
        nameWithType: Control.BeginInvoke
        qualifiedName: System.Windows.Forms.Control.BeginInvoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Delegate
        name: Delegate
        nameWithType: Delegate
        qualifiedName: System.Delegate
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: '[]'
        nameWithType: '[]'
        qualifiedName: '[]'
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.BeginInvoke(System.Delegate,System.Object[])
        name: BeginInvoke
        nameWithType: Control.BeginInvoke
        qualifiedName: System.Windows.Forms.Control.BeginInvoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Delegate
        name: Delegate
        nameWithType: Delegate
        qualifiedName: System.Delegate
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ()
        nameWithType: ()
        qualifiedName: ()
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.BeginInvoke(System.Delegate,System.Object[])
  System.Windows.Forms.Control.BringToFront:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BringToFront
        name: BringToFront
        nameWithType: Control.BringToFront
        qualifiedName: System.Windows.Forms.Control.BringToFront
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.BringToFront
        name: BringToFront
        nameWithType: Control.BringToFront
        qualifiedName: System.Windows.Forms.Control.BringToFront
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.BringToFront
  System.Windows.Forms.Control.Contains(System.Windows.Forms.Control):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Contains(System.Windows.Forms.Control)
        name: Contains
        nameWithType: Control.Contains
        qualifiedName: System.Windows.Forms.Control.Contains
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Contains(System.Windows.Forms.Control)
        name: Contains
        nameWithType: Control.Contains
        qualifiedName: System.Windows.Forms.Control.Contains
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Contains(System.Windows.Forms.Control)
  System.Windows.Forms.Control.CreateAccessibilityInstance:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CreateAccessibilityInstance
        name: CreateAccessibilityInstance
        nameWithType: Control.CreateAccessibilityInstance
        qualifiedName: System.Windows.Forms.Control.CreateAccessibilityInstance
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.CreateAccessibilityInstance
        name: CreateAccessibilityInstance
        nameWithType: Control.CreateAccessibilityInstance
        qualifiedName: System.Windows.Forms.Control.CreateAccessibilityInstance
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.CreateAccessibilityInstance
  System.Windows.Forms.Control.CreateGraphics:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CreateGraphics
        name: CreateGraphics
        nameWithType: Control.CreateGraphics
        qualifiedName: System.Windows.Forms.Control.CreateGraphics
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.CreateGraphics
        name: CreateGraphics
        nameWithType: Control.CreateGraphics
        qualifiedName: System.Windows.Forms.Control.CreateGraphics
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.CreateGraphics
  System.Windows.Forms.Control.CreateControl:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CreateControl
        name: CreateControl
        nameWithType: Control.CreateControl
        qualifiedName: System.Windows.Forms.Control.CreateControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.CreateControl
        name: CreateControl
        nameWithType: Control.CreateControl
        qualifiedName: System.Windows.Forms.Control.CreateControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.CreateControl
  System.Windows.Forms.Control.DestroyHandle:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DestroyHandle
        name: DestroyHandle
        nameWithType: Control.DestroyHandle
        qualifiedName: System.Windows.Forms.Control.DestroyHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.DestroyHandle
        name: DestroyHandle
        nameWithType: Control.DestroyHandle
        qualifiedName: System.Windows.Forms.Control.DestroyHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.DestroyHandle
  System.Windows.Forms.Control.DoDragDrop(System.Object,System.Windows.Forms.DragDropEffects):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DoDragDrop(System.Object,System.Windows.Forms.DragDropEffects)
        name: DoDragDrop
        nameWithType: Control.DoDragDrop
        qualifiedName: System.Windows.Forms.Control.DoDragDrop
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.DragDropEffects
        name: DragDropEffects
        nameWithType: DragDropEffects
        qualifiedName: System.Windows.Forms.DragDropEffects
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.DoDragDrop(System.Object,System.Windows.Forms.DragDropEffects)
        name: DoDragDrop
        nameWithType: Control.DoDragDrop
        qualifiedName: System.Windows.Forms.Control.DoDragDrop
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.DragDropEffects
        name: DragDropEffects
        nameWithType: DragDropEffects
        qualifiedName: System.Windows.Forms.DragDropEffects
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.DoDragDrop(System.Object,System.Windows.Forms.DragDropEffects)
  System.Windows.Forms.Control.DrawToBitmap(System.Drawing.Bitmap,System.Drawing.Rectangle):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DrawToBitmap(System.Drawing.Bitmap,System.Drawing.Rectangle)
        name: DrawToBitmap
        nameWithType: Control.DrawToBitmap
        qualifiedName: System.Windows.Forms.Control.DrawToBitmap
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Bitmap
        name: Bitmap
        nameWithType: Bitmap
        qualifiedName: System.Drawing.Bitmap
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.DrawToBitmap(System.Drawing.Bitmap,System.Drawing.Rectangle)
        name: DrawToBitmap
        nameWithType: Control.DrawToBitmap
        qualifiedName: System.Windows.Forms.Control.DrawToBitmap
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Bitmap
        name: Bitmap
        nameWithType: Bitmap
        qualifiedName: System.Drawing.Bitmap
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.DrawToBitmap(System.Drawing.Bitmap,System.Drawing.Rectangle)
  System.Windows.Forms.Control.EndInvoke(System.IAsyncResult):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.EndInvoke(System.IAsyncResult)
        name: EndInvoke
        nameWithType: Control.EndInvoke
        qualifiedName: System.Windows.Forms.Control.EndInvoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.IAsyncResult
        name: IAsyncResult
        nameWithType: IAsyncResult
        qualifiedName: System.IAsyncResult
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.EndInvoke(System.IAsyncResult)
        name: EndInvoke
        nameWithType: Control.EndInvoke
        qualifiedName: System.Windows.Forms.Control.EndInvoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.IAsyncResult
        name: IAsyncResult
        nameWithType: IAsyncResult
        qualifiedName: System.IAsyncResult
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.EndInvoke(System.IAsyncResult)
  System.Windows.Forms.Control.FindForm:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.FindForm
        name: FindForm
        nameWithType: Control.FindForm
        qualifiedName: System.Windows.Forms.Control.FindForm
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.FindForm
        name: FindForm
        nameWithType: Control.FindForm
        qualifiedName: System.Windows.Forms.Control.FindForm
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.FindForm
  System.Windows.Forms.Control.GetTopLevel:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetTopLevel
        name: GetTopLevel
        nameWithType: Control.GetTopLevel
        qualifiedName: System.Windows.Forms.Control.GetTopLevel
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetTopLevel
        name: GetTopLevel
        nameWithType: Control.GetTopLevel
        qualifiedName: System.Windows.Forms.Control.GetTopLevel
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetTopLevel
  System.Windows.Forms.Control.RaiseKeyEvent(System.Object,System.Windows.Forms.KeyEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RaiseKeyEvent(System.Object,System.Windows.Forms.KeyEventArgs)
        name: RaiseKeyEvent
        nameWithType: Control.RaiseKeyEvent
        qualifiedName: System.Windows.Forms.Control.RaiseKeyEvent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.KeyEventArgs
        name: KeyEventArgs
        nameWithType: KeyEventArgs
        qualifiedName: System.Windows.Forms.KeyEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RaiseKeyEvent(System.Object,System.Windows.Forms.KeyEventArgs)
        name: RaiseKeyEvent
        nameWithType: Control.RaiseKeyEvent
        qualifiedName: System.Windows.Forms.Control.RaiseKeyEvent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.KeyEventArgs
        name: KeyEventArgs
        nameWithType: KeyEventArgs
        qualifiedName: System.Windows.Forms.KeyEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RaiseKeyEvent(System.Object,System.Windows.Forms.KeyEventArgs)
  System.Windows.Forms.Control.RaiseMouseEvent(System.Object,System.Windows.Forms.MouseEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RaiseMouseEvent(System.Object,System.Windows.Forms.MouseEventArgs)
        name: RaiseMouseEvent
        nameWithType: Control.RaiseMouseEvent
        qualifiedName: System.Windows.Forms.Control.RaiseMouseEvent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RaiseMouseEvent(System.Object,System.Windows.Forms.MouseEventArgs)
        name: RaiseMouseEvent
        nameWithType: Control.RaiseMouseEvent
        qualifiedName: System.Windows.Forms.Control.RaiseMouseEvent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RaiseMouseEvent(System.Object,System.Windows.Forms.MouseEventArgs)
  System.Windows.Forms.Control.Focus:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Focus
        name: Focus
        nameWithType: Control.Focus
        qualifiedName: System.Windows.Forms.Control.Focus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Focus
        name: Focus
        nameWithType: Control.Focus
        qualifiedName: System.Windows.Forms.Control.Focus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Focus
  System.Windows.Forms.Control.FromChildHandle(System.IntPtr):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.FromChildHandle(System.IntPtr)
        name: FromChildHandle
        nameWithType: Control.FromChildHandle
        qualifiedName: System.Windows.Forms.Control.FromChildHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.IntPtr
        name: IntPtr
        nameWithType: IntPtr
        qualifiedName: System.IntPtr
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.FromChildHandle(System.IntPtr)
        name: FromChildHandle
        nameWithType: Control.FromChildHandle
        qualifiedName: System.Windows.Forms.Control.FromChildHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.IntPtr
        name: IntPtr
        nameWithType: IntPtr
        qualifiedName: System.IntPtr
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.FromChildHandle(System.IntPtr)
  System.Windows.Forms.Control.FromHandle(System.IntPtr):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.FromHandle(System.IntPtr)
        name: FromHandle
        nameWithType: Control.FromHandle
        qualifiedName: System.Windows.Forms.Control.FromHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.IntPtr
        name: IntPtr
        nameWithType: IntPtr
        qualifiedName: System.IntPtr
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.FromHandle(System.IntPtr)
        name: FromHandle
        nameWithType: Control.FromHandle
        qualifiedName: System.Windows.Forms.Control.FromHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.IntPtr
        name: IntPtr
        nameWithType: IntPtr
        qualifiedName: System.IntPtr
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.FromHandle(System.IntPtr)
  System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point,System.Windows.Forms.GetChildAtPointSkip):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point,System.Windows.Forms.GetChildAtPointSkip)
        name: GetChildAtPoint
        nameWithType: Control.GetChildAtPoint
        qualifiedName: System.Windows.Forms.Control.GetChildAtPoint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Point
        name: Point
        nameWithType: Point
        qualifiedName: System.Drawing.Point
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.GetChildAtPointSkip
        name: GetChildAtPointSkip
        nameWithType: GetChildAtPointSkip
        qualifiedName: System.Windows.Forms.GetChildAtPointSkip
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point,System.Windows.Forms.GetChildAtPointSkip)
        name: GetChildAtPoint
        nameWithType: Control.GetChildAtPoint
        qualifiedName: System.Windows.Forms.Control.GetChildAtPoint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Point
        name: Point
        nameWithType: Point
        qualifiedName: System.Drawing.Point
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.GetChildAtPointSkip
        name: GetChildAtPointSkip
        nameWithType: GetChildAtPointSkip
        qualifiedName: System.Windows.Forms.GetChildAtPointSkip
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point,System.Windows.Forms.GetChildAtPointSkip)
  System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point)
        name: GetChildAtPoint
        nameWithType: Control.GetChildAtPoint
        qualifiedName: System.Windows.Forms.Control.GetChildAtPoint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Point
        name: Point
        nameWithType: Point
        qualifiedName: System.Drawing.Point
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point)
        name: GetChildAtPoint
        nameWithType: Control.GetChildAtPoint
        qualifiedName: System.Windows.Forms.Control.GetChildAtPoint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Point
        name: Point
        nameWithType: Point
        qualifiedName: System.Drawing.Point
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetChildAtPoint(System.Drawing.Point)
  System.Windows.Forms.Control.GetContainerControl:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetContainerControl
        name: GetContainerControl
        nameWithType: Control.GetContainerControl
        qualifiedName: System.Windows.Forms.Control.GetContainerControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetContainerControl
        name: GetContainerControl
        nameWithType: Control.GetContainerControl
        qualifiedName: System.Windows.Forms.Control.GetContainerControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetContainerControl
  System.Windows.Forms.Control.GetNextControl(System.Windows.Forms.Control,System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetNextControl(System.Windows.Forms.Control,System.Boolean)
        name: GetNextControl
        nameWithType: Control.GetNextControl
        qualifiedName: System.Windows.Forms.Control.GetNextControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetNextControl(System.Windows.Forms.Control,System.Boolean)
        name: GetNextControl
        nameWithType: Control.GetNextControl
        qualifiedName: System.Windows.Forms.Control.GetNextControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetNextControl(System.Windows.Forms.Control,System.Boolean)
  System.Windows.Forms.Control.GetStyle(System.Windows.Forms.ControlStyles):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GetStyle(System.Windows.Forms.ControlStyles)
        name: GetStyle
        nameWithType: Control.GetStyle
        qualifiedName: System.Windows.Forms.Control.GetStyle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ControlStyles
        name: ControlStyles
        nameWithType: ControlStyles
        qualifiedName: System.Windows.Forms.ControlStyles
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.GetStyle(System.Windows.Forms.ControlStyles)
        name: GetStyle
        nameWithType: Control.GetStyle
        qualifiedName: System.Windows.Forms.Control.GetStyle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ControlStyles
        name: ControlStyles
        nameWithType: ControlStyles
        qualifiedName: System.Windows.Forms.ControlStyles
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.GetStyle(System.Windows.Forms.ControlStyles)
  System.Windows.Forms.Control.Hide:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Hide
        name: Hide
        nameWithType: Control.Hide
        qualifiedName: System.Windows.Forms.Control.Hide
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Hide
        name: Hide
        nameWithType: Control.Hide
        qualifiedName: System.Windows.Forms.Control.Hide
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Hide
  System.Windows.Forms.Control.InitLayout:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.InitLayout
        name: InitLayout
        nameWithType: Control.InitLayout
        qualifiedName: System.Windows.Forms.Control.InitLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.InitLayout
        name: InitLayout
        nameWithType: Control.InitLayout
        qualifiedName: System.Windows.Forms.Control.InitLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.InitLayout
  System.Windows.Forms.Control.Invalidate(System.Drawing.Region):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invalidate(System.Drawing.Region)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Region
        name: Region
        nameWithType: Region
        qualifiedName: System.Drawing.Region
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Invalidate(System.Drawing.Region)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Region
        name: Region
        nameWithType: Region
        qualifiedName: System.Drawing.Region
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Invalidate(System.Drawing.Region)
  System.Windows.Forms.Control.Invalidate(System.Drawing.Region,System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invalidate(System.Drawing.Region,System.Boolean)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Region
        name: Region
        nameWithType: Region
        qualifiedName: System.Drawing.Region
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Invalidate(System.Drawing.Region,System.Boolean)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Region
        name: Region
        nameWithType: Region
        qualifiedName: System.Drawing.Region
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Invalidate(System.Drawing.Region,System.Boolean)
  System.Windows.Forms.Control.Invalidate:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invalidate
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Invalidate
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Invalidate
  System.Windows.Forms.Control.Invalidate(System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invalidate(System.Boolean)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Invalidate(System.Boolean)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Invalidate(System.Boolean)
  System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle)
  System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle,System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle,System.Boolean)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle,System.Boolean)
        name: Invalidate
        nameWithType: Control.Invalidate
        qualifiedName: System.Windows.Forms.Control.Invalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Invalidate(System.Drawing.Rectangle,System.Boolean)
  System.Windows.Forms.Control.Invoke(System.Delegate):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invoke(System.Delegate)
        name: Invoke
        nameWithType: Control.Invoke
        qualifiedName: System.Windows.Forms.Control.Invoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Delegate
        name: Delegate
        nameWithType: Delegate
        qualifiedName: System.Delegate
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Invoke(System.Delegate)
        name: Invoke
        nameWithType: Control.Invoke
        qualifiedName: System.Windows.Forms.Control.Invoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Delegate
        name: Delegate
        nameWithType: Delegate
        qualifiedName: System.Delegate
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Invoke(System.Delegate)
  System.Windows.Forms.Control.Invoke(System.Delegate,System.Object[]):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invoke(System.Delegate,System.Object[])
        name: Invoke
        nameWithType: Control.Invoke
        qualifiedName: System.Windows.Forms.Control.Invoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Delegate
        name: Delegate
        nameWithType: Delegate
        qualifiedName: System.Delegate
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: '[]'
        nameWithType: '[]'
        qualifiedName: '[]'
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Invoke(System.Delegate,System.Object[])
        name: Invoke
        nameWithType: Control.Invoke
        qualifiedName: System.Windows.Forms.Control.Invoke
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Delegate
        name: Delegate
        nameWithType: Delegate
        qualifiedName: System.Delegate
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ()
        nameWithType: ()
        qualifiedName: ()
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Invoke(System.Delegate,System.Object[])
  System.Windows.Forms.Control.InvokePaint(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.InvokePaint(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
        name: InvokePaint
        nameWithType: Control.InvokePaint
        qualifiedName: System.Windows.Forms.Control.InvokePaint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.InvokePaint(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
        name: InvokePaint
        nameWithType: Control.InvokePaint
        qualifiedName: System.Windows.Forms.Control.InvokePaint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.InvokePaint(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
  System.Windows.Forms.Control.InvokePaintBackground(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.InvokePaintBackground(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
        name: InvokePaintBackground
        nameWithType: Control.InvokePaintBackground
        qualifiedName: System.Windows.Forms.Control.InvokePaintBackground
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.InvokePaintBackground(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
        name: InvokePaintBackground
        nameWithType: Control.InvokePaintBackground
        qualifiedName: System.Windows.Forms.Control.InvokePaintBackground
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.InvokePaintBackground(System.Windows.Forms.Control,System.Windows.Forms.PaintEventArgs)
  System.Windows.Forms.Control.IsKeyLocked(System.Windows.Forms.Keys):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.IsKeyLocked(System.Windows.Forms.Keys)
        name: IsKeyLocked
        nameWithType: Control.IsKeyLocked
        qualifiedName: System.Windows.Forms.Control.IsKeyLocked
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Keys
        name: Keys
        nameWithType: Keys
        qualifiedName: System.Windows.Forms.Keys
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.IsKeyLocked(System.Windows.Forms.Keys)
        name: IsKeyLocked
        nameWithType: Control.IsKeyLocked
        qualifiedName: System.Windows.Forms.Control.IsKeyLocked
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Keys
        name: Keys
        nameWithType: Keys
        qualifiedName: System.Windows.Forms.Keys
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.IsKeyLocked(System.Windows.Forms.Keys)
  System.Windows.Forms.Control.IsInputChar(System.Char):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.IsInputChar(System.Char)
        name: IsInputChar
        nameWithType: Control.IsInputChar
        qualifiedName: System.Windows.Forms.Control.IsInputChar
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Char
        name: Char
        nameWithType: Char
        qualifiedName: System.Char
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.IsInputChar(System.Char)
        name: IsInputChar
        nameWithType: Control.IsInputChar
        qualifiedName: System.Windows.Forms.Control.IsInputChar
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Char
        name: Char
        nameWithType: Char
        qualifiedName: System.Char
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.IsInputChar(System.Char)
  System.Windows.Forms.Control.IsInputKey(System.Windows.Forms.Keys):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.IsInputKey(System.Windows.Forms.Keys)
        name: IsInputKey
        nameWithType: Control.IsInputKey
        qualifiedName: System.Windows.Forms.Control.IsInputKey
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Keys
        name: Keys
        nameWithType: Keys
        qualifiedName: System.Windows.Forms.Keys
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.IsInputKey(System.Windows.Forms.Keys)
        name: IsInputKey
        nameWithType: Control.IsInputKey
        qualifiedName: System.Windows.Forms.Control.IsInputKey
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Keys
        name: Keys
        nameWithType: Keys
        qualifiedName: System.Windows.Forms.Keys
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.IsInputKey(System.Windows.Forms.Keys)
  System.Windows.Forms.Control.IsMnemonic(System.Char,System.String):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.IsMnemonic(System.Char,System.String)
        name: IsMnemonic
        nameWithType: Control.IsMnemonic
        qualifiedName: System.Windows.Forms.Control.IsMnemonic
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Char
        name: Char
        nameWithType: Char
        qualifiedName: System.Char
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.String
        name: String
        nameWithType: String
        qualifiedName: System.String
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.IsMnemonic(System.Char,System.String)
        name: IsMnemonic
        nameWithType: Control.IsMnemonic
        qualifiedName: System.Windows.Forms.Control.IsMnemonic
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Char
        name: Char
        nameWithType: Char
        qualifiedName: System.Char
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.String
        name: String
        nameWithType: String
        qualifiedName: System.String
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.IsMnemonic(System.Char,System.String)
  System.Windows.Forms.Control.LogicalToDeviceUnits(System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.LogicalToDeviceUnits(System.Int32)
        name: LogicalToDeviceUnits
        nameWithType: Control.LogicalToDeviceUnits
        qualifiedName: System.Windows.Forms.Control.LogicalToDeviceUnits
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.LogicalToDeviceUnits(System.Int32)
        name: LogicalToDeviceUnits
        nameWithType: Control.LogicalToDeviceUnits
        qualifiedName: System.Windows.Forms.Control.LogicalToDeviceUnits
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.LogicalToDeviceUnits(System.Int32)
  System.Windows.Forms.Control.ScaleBitmapLogicalToDevice(System.Drawing.Bitmap@):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ScaleBitmapLogicalToDevice(System.Drawing.Bitmap@)
        name: ScaleBitmapLogicalToDevice
        nameWithType: Control.ScaleBitmapLogicalToDevice
        qualifiedName: System.Windows.Forms.Control.ScaleBitmapLogicalToDevice
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Bitmap
        name: Bitmap
        nameWithType: Bitmap
        qualifiedName: System.Drawing.Bitmap
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.ScaleBitmapLogicalToDevice(System.Drawing.Bitmap@)
        name: ScaleBitmapLogicalToDevice
        nameWithType: Control.ScaleBitmapLogicalToDevice
        qualifiedName: System.Windows.Forms.Control.ScaleBitmapLogicalToDevice
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Bitmap
        name: Bitmap
        nameWithType: Bitmap
        qualifiedName: System.Drawing.Bitmap
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.ScaleBitmapLogicalToDevice(System.Drawing.Bitmap@)
  System.Windows.Forms.Control.NotifyInvalidate(System.Drawing.Rectangle):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.NotifyInvalidate(System.Drawing.Rectangle)
        name: NotifyInvalidate
        nameWithType: Control.NotifyInvalidate
        qualifiedName: System.Windows.Forms.Control.NotifyInvalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.NotifyInvalidate(System.Drawing.Rectangle)
        name: NotifyInvalidate
        nameWithType: Control.NotifyInvalidate
        qualifiedName: System.Windows.Forms.Control.NotifyInvalidate
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.NotifyInvalidate(System.Drawing.Rectangle)
  System.Windows.Forms.Control.InvokeOnClick(System.Windows.Forms.Control,System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.InvokeOnClick(System.Windows.Forms.Control,System.EventArgs)
        name: InvokeOnClick
        nameWithType: Control.InvokeOnClick
        qualifiedName: System.Windows.Forms.Control.InvokeOnClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.InvokeOnClick(System.Windows.Forms.Control,System.EventArgs)
        name: InvokeOnClick
        nameWithType: Control.InvokeOnClick
        qualifiedName: System.Windows.Forms.Control.InvokeOnClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.InvokeOnClick(System.Windows.Forms.Control,System.EventArgs)
  System.Windows.Forms.Control.OnAutoSizeChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnAutoSizeChanged(System.EventArgs)
        name: OnAutoSizeChanged
        nameWithType: Control.OnAutoSizeChanged
        qualifiedName: System.Windows.Forms.Control.OnAutoSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnAutoSizeChanged(System.EventArgs)
        name: OnAutoSizeChanged
        nameWithType: Control.OnAutoSizeChanged
        qualifiedName: System.Windows.Forms.Control.OnAutoSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnAutoSizeChanged(System.EventArgs)
  System.Windows.Forms.Control.OnBackColorChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnBackColorChanged(System.EventArgs)
        name: OnBackColorChanged
        nameWithType: Control.OnBackColorChanged
        qualifiedName: System.Windows.Forms.Control.OnBackColorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnBackColorChanged(System.EventArgs)
        name: OnBackColorChanged
        nameWithType: Control.OnBackColorChanged
        qualifiedName: System.Windows.Forms.Control.OnBackColorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnBackColorChanged(System.EventArgs)
  System.Windows.Forms.Control.OnBindingContextChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnBindingContextChanged(System.EventArgs)
        name: OnBindingContextChanged
        nameWithType: Control.OnBindingContextChanged
        qualifiedName: System.Windows.Forms.Control.OnBindingContextChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnBindingContextChanged(System.EventArgs)
        name: OnBindingContextChanged
        nameWithType: Control.OnBindingContextChanged
        qualifiedName: System.Windows.Forms.Control.OnBindingContextChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnBindingContextChanged(System.EventArgs)
  System.Windows.Forms.Control.OnCausesValidationChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnCausesValidationChanged(System.EventArgs)
        name: OnCausesValidationChanged
        nameWithType: Control.OnCausesValidationChanged
        qualifiedName: System.Windows.Forms.Control.OnCausesValidationChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnCausesValidationChanged(System.EventArgs)
        name: OnCausesValidationChanged
        nameWithType: Control.OnCausesValidationChanged
        qualifiedName: System.Windows.Forms.Control.OnCausesValidationChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnCausesValidationChanged(System.EventArgs)
  System.Windows.Forms.Control.OnContextMenuChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnContextMenuChanged(System.EventArgs)
        name: OnContextMenuChanged
        nameWithType: Control.OnContextMenuChanged
        qualifiedName: System.Windows.Forms.Control.OnContextMenuChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnContextMenuChanged(System.EventArgs)
        name: OnContextMenuChanged
        nameWithType: Control.OnContextMenuChanged
        qualifiedName: System.Windows.Forms.Control.OnContextMenuChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnContextMenuChanged(System.EventArgs)
  System.Windows.Forms.Control.OnContextMenuStripChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnContextMenuStripChanged(System.EventArgs)
        name: OnContextMenuStripChanged
        nameWithType: Control.OnContextMenuStripChanged
        qualifiedName: System.Windows.Forms.Control.OnContextMenuStripChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnContextMenuStripChanged(System.EventArgs)
        name: OnContextMenuStripChanged
        nameWithType: Control.OnContextMenuStripChanged
        qualifiedName: System.Windows.Forms.Control.OnContextMenuStripChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnContextMenuStripChanged(System.EventArgs)
  System.Windows.Forms.Control.OnCursorChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnCursorChanged(System.EventArgs)
        name: OnCursorChanged
        nameWithType: Control.OnCursorChanged
        qualifiedName: System.Windows.Forms.Control.OnCursorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnCursorChanged(System.EventArgs)
        name: OnCursorChanged
        nameWithType: Control.OnCursorChanged
        qualifiedName: System.Windows.Forms.Control.OnCursorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnCursorChanged(System.EventArgs)
  System.Windows.Forms.Control.OnDockChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnDockChanged(System.EventArgs)
        name: OnDockChanged
        nameWithType: Control.OnDockChanged
        qualifiedName: System.Windows.Forms.Control.OnDockChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnDockChanged(System.EventArgs)
        name: OnDockChanged
        nameWithType: Control.OnDockChanged
        qualifiedName: System.Windows.Forms.Control.OnDockChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnDockChanged(System.EventArgs)
  System.Windows.Forms.Control.OnForeColorChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnForeColorChanged(System.EventArgs)
        name: OnForeColorChanged
        nameWithType: Control.OnForeColorChanged
        qualifiedName: System.Windows.Forms.Control.OnForeColorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnForeColorChanged(System.EventArgs)
        name: OnForeColorChanged
        nameWithType: Control.OnForeColorChanged
        qualifiedName: System.Windows.Forms.Control.OnForeColorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnForeColorChanged(System.EventArgs)
  System.Windows.Forms.Control.OnNotifyMessage(System.Windows.Forms.Message):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnNotifyMessage(System.Windows.Forms.Message)
        name: OnNotifyMessage
        nameWithType: Control.OnNotifyMessage
        qualifiedName: System.Windows.Forms.Control.OnNotifyMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnNotifyMessage(System.Windows.Forms.Message)
        name: OnNotifyMessage
        nameWithType: Control.OnNotifyMessage
        qualifiedName: System.Windows.Forms.Control.OnNotifyMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnNotifyMessage(System.Windows.Forms.Message)
  System.Windows.Forms.Control.OnParentBackColorChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentBackColorChanged(System.EventArgs)
        name: OnParentBackColorChanged
        nameWithType: Control.OnParentBackColorChanged
        qualifiedName: System.Windows.Forms.Control.OnParentBackColorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentBackColorChanged(System.EventArgs)
        name: OnParentBackColorChanged
        nameWithType: Control.OnParentBackColorChanged
        qualifiedName: System.Windows.Forms.Control.OnParentBackColorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentBackColorChanged(System.EventArgs)
  System.Windows.Forms.Control.OnParentBackgroundImageChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentBackgroundImageChanged(System.EventArgs)
        name: OnParentBackgroundImageChanged
        nameWithType: Control.OnParentBackgroundImageChanged
        qualifiedName: System.Windows.Forms.Control.OnParentBackgroundImageChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentBackgroundImageChanged(System.EventArgs)
        name: OnParentBackgroundImageChanged
        nameWithType: Control.OnParentBackgroundImageChanged
        qualifiedName: System.Windows.Forms.Control.OnParentBackgroundImageChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentBackgroundImageChanged(System.EventArgs)
  System.Windows.Forms.Control.OnParentBindingContextChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentBindingContextChanged(System.EventArgs)
        name: OnParentBindingContextChanged
        nameWithType: Control.OnParentBindingContextChanged
        qualifiedName: System.Windows.Forms.Control.OnParentBindingContextChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentBindingContextChanged(System.EventArgs)
        name: OnParentBindingContextChanged
        nameWithType: Control.OnParentBindingContextChanged
        qualifiedName: System.Windows.Forms.Control.OnParentBindingContextChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentBindingContextChanged(System.EventArgs)
  System.Windows.Forms.Control.OnParentCursorChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentCursorChanged(System.EventArgs)
        name: OnParentCursorChanged
        nameWithType: Control.OnParentCursorChanged
        qualifiedName: System.Windows.Forms.Control.OnParentCursorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentCursorChanged(System.EventArgs)
        name: OnParentCursorChanged
        nameWithType: Control.OnParentCursorChanged
        qualifiedName: System.Windows.Forms.Control.OnParentCursorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentCursorChanged(System.EventArgs)
  System.Windows.Forms.Control.OnParentEnabledChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentEnabledChanged(System.EventArgs)
        name: OnParentEnabledChanged
        nameWithType: Control.OnParentEnabledChanged
        qualifiedName: System.Windows.Forms.Control.OnParentEnabledChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentEnabledChanged(System.EventArgs)
        name: OnParentEnabledChanged
        nameWithType: Control.OnParentEnabledChanged
        qualifiedName: System.Windows.Forms.Control.OnParentEnabledChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentEnabledChanged(System.EventArgs)
  System.Windows.Forms.Control.OnParentFontChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentFontChanged(System.EventArgs)
        name: OnParentFontChanged
        nameWithType: Control.OnParentFontChanged
        qualifiedName: System.Windows.Forms.Control.OnParentFontChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentFontChanged(System.EventArgs)
        name: OnParentFontChanged
        nameWithType: Control.OnParentFontChanged
        qualifiedName: System.Windows.Forms.Control.OnParentFontChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentFontChanged(System.EventArgs)
  System.Windows.Forms.Control.OnParentForeColorChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentForeColorChanged(System.EventArgs)
        name: OnParentForeColorChanged
        nameWithType: Control.OnParentForeColorChanged
        qualifiedName: System.Windows.Forms.Control.OnParentForeColorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentForeColorChanged(System.EventArgs)
        name: OnParentForeColorChanged
        nameWithType: Control.OnParentForeColorChanged
        qualifiedName: System.Windows.Forms.Control.OnParentForeColorChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentForeColorChanged(System.EventArgs)
  System.Windows.Forms.Control.OnParentRightToLeftChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentRightToLeftChanged(System.EventArgs)
        name: OnParentRightToLeftChanged
        nameWithType: Control.OnParentRightToLeftChanged
        qualifiedName: System.Windows.Forms.Control.OnParentRightToLeftChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentRightToLeftChanged(System.EventArgs)
        name: OnParentRightToLeftChanged
        nameWithType: Control.OnParentRightToLeftChanged
        qualifiedName: System.Windows.Forms.Control.OnParentRightToLeftChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentRightToLeftChanged(System.EventArgs)
  System.Windows.Forms.Control.OnParentVisibleChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnParentVisibleChanged(System.EventArgs)
        name: OnParentVisibleChanged
        nameWithType: Control.OnParentVisibleChanged
        qualifiedName: System.Windows.Forms.Control.OnParentVisibleChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnParentVisibleChanged(System.EventArgs)
        name: OnParentVisibleChanged
        nameWithType: Control.OnParentVisibleChanged
        qualifiedName: System.Windows.Forms.Control.OnParentVisibleChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnParentVisibleChanged(System.EventArgs)
  System.Windows.Forms.Control.OnPrint(System.Windows.Forms.PaintEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnPrint(System.Windows.Forms.PaintEventArgs)
        name: OnPrint
        nameWithType: Control.OnPrint
        qualifiedName: System.Windows.Forms.Control.OnPrint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnPrint(System.Windows.Forms.PaintEventArgs)
        name: OnPrint
        nameWithType: Control.OnPrint
        qualifiedName: System.Windows.Forms.Control.OnPrint
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnPrint(System.Windows.Forms.PaintEventArgs)
  System.Windows.Forms.Control.OnTabIndexChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnTabIndexChanged(System.EventArgs)
        name: OnTabIndexChanged
        nameWithType: Control.OnTabIndexChanged
        qualifiedName: System.Windows.Forms.Control.OnTabIndexChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnTabIndexChanged(System.EventArgs)
        name: OnTabIndexChanged
        nameWithType: Control.OnTabIndexChanged
        qualifiedName: System.Windows.Forms.Control.OnTabIndexChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnTabIndexChanged(System.EventArgs)
  System.Windows.Forms.Control.OnTabStopChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnTabStopChanged(System.EventArgs)
        name: OnTabStopChanged
        nameWithType: Control.OnTabStopChanged
        qualifiedName: System.Windows.Forms.Control.OnTabStopChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnTabStopChanged(System.EventArgs)
        name: OnTabStopChanged
        nameWithType: Control.OnTabStopChanged
        qualifiedName: System.Windows.Forms.Control.OnTabStopChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnTabStopChanged(System.EventArgs)
  System.Windows.Forms.Control.OnClick(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnClick(System.EventArgs)
        name: OnClick
        nameWithType: Control.OnClick
        qualifiedName: System.Windows.Forms.Control.OnClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnClick(System.EventArgs)
        name: OnClick
        nameWithType: Control.OnClick
        qualifiedName: System.Windows.Forms.Control.OnClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnClick(System.EventArgs)
  System.Windows.Forms.Control.OnClientSizeChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnClientSizeChanged(System.EventArgs)
        name: OnClientSizeChanged
        nameWithType: Control.OnClientSizeChanged
        qualifiedName: System.Windows.Forms.Control.OnClientSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnClientSizeChanged(System.EventArgs)
        name: OnClientSizeChanged
        nameWithType: Control.OnClientSizeChanged
        qualifiedName: System.Windows.Forms.Control.OnClientSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnClientSizeChanged(System.EventArgs)
  System.Windows.Forms.Control.OnControlAdded(System.Windows.Forms.ControlEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnControlAdded(System.Windows.Forms.ControlEventArgs)
        name: OnControlAdded
        nameWithType: Control.OnControlAdded
        qualifiedName: System.Windows.Forms.Control.OnControlAdded
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ControlEventArgs
        name: ControlEventArgs
        nameWithType: ControlEventArgs
        qualifiedName: System.Windows.Forms.ControlEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnControlAdded(System.Windows.Forms.ControlEventArgs)
        name: OnControlAdded
        nameWithType: Control.OnControlAdded
        qualifiedName: System.Windows.Forms.Control.OnControlAdded
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ControlEventArgs
        name: ControlEventArgs
        nameWithType: ControlEventArgs
        qualifiedName: System.Windows.Forms.ControlEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnControlAdded(System.Windows.Forms.ControlEventArgs)
  System.Windows.Forms.Control.OnControlRemoved(System.Windows.Forms.ControlEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnControlRemoved(System.Windows.Forms.ControlEventArgs)
        name: OnControlRemoved
        nameWithType: Control.OnControlRemoved
        qualifiedName: System.Windows.Forms.Control.OnControlRemoved
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ControlEventArgs
        name: ControlEventArgs
        nameWithType: ControlEventArgs
        qualifiedName: System.Windows.Forms.ControlEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnControlRemoved(System.Windows.Forms.ControlEventArgs)
        name: OnControlRemoved
        nameWithType: Control.OnControlRemoved
        qualifiedName: System.Windows.Forms.Control.OnControlRemoved
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ControlEventArgs
        name: ControlEventArgs
        nameWithType: ControlEventArgs
        qualifiedName: System.Windows.Forms.ControlEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnControlRemoved(System.Windows.Forms.ControlEventArgs)
  System.Windows.Forms.Control.OnLocationChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnLocationChanged(System.EventArgs)
        name: OnLocationChanged
        nameWithType: Control.OnLocationChanged
        qualifiedName: System.Windows.Forms.Control.OnLocationChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnLocationChanged(System.EventArgs)
        name: OnLocationChanged
        nameWithType: Control.OnLocationChanged
        qualifiedName: System.Windows.Forms.Control.OnLocationChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnLocationChanged(System.EventArgs)
  System.Windows.Forms.Control.OnDoubleClick(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnDoubleClick(System.EventArgs)
        name: OnDoubleClick
        nameWithType: Control.OnDoubleClick
        qualifiedName: System.Windows.Forms.Control.OnDoubleClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnDoubleClick(System.EventArgs)
        name: OnDoubleClick
        nameWithType: Control.OnDoubleClick
        qualifiedName: System.Windows.Forms.Control.OnDoubleClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnDoubleClick(System.EventArgs)
  System.Windows.Forms.Control.OnDragEnter(System.Windows.Forms.DragEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnDragEnter(System.Windows.Forms.DragEventArgs)
        name: OnDragEnter
        nameWithType: Control.OnDragEnter
        qualifiedName: System.Windows.Forms.Control.OnDragEnter
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnDragEnter(System.Windows.Forms.DragEventArgs)
        name: OnDragEnter
        nameWithType: Control.OnDragEnter
        qualifiedName: System.Windows.Forms.Control.OnDragEnter
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnDragEnter(System.Windows.Forms.DragEventArgs)
  System.Windows.Forms.Control.OnDragOver(System.Windows.Forms.DragEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnDragOver(System.Windows.Forms.DragEventArgs)
        name: OnDragOver
        nameWithType: Control.OnDragOver
        qualifiedName: System.Windows.Forms.Control.OnDragOver
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnDragOver(System.Windows.Forms.DragEventArgs)
        name: OnDragOver
        nameWithType: Control.OnDragOver
        qualifiedName: System.Windows.Forms.Control.OnDragOver
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnDragOver(System.Windows.Forms.DragEventArgs)
  System.Windows.Forms.Control.OnDragLeave(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnDragLeave(System.EventArgs)
        name: OnDragLeave
        nameWithType: Control.OnDragLeave
        qualifiedName: System.Windows.Forms.Control.OnDragLeave
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnDragLeave(System.EventArgs)
        name: OnDragLeave
        nameWithType: Control.OnDragLeave
        qualifiedName: System.Windows.Forms.Control.OnDragLeave
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnDragLeave(System.EventArgs)
  System.Windows.Forms.Control.OnDragDrop(System.Windows.Forms.DragEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnDragDrop(System.Windows.Forms.DragEventArgs)
        name: OnDragDrop
        nameWithType: Control.OnDragDrop
        qualifiedName: System.Windows.Forms.Control.OnDragDrop
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnDragDrop(System.Windows.Forms.DragEventArgs)
        name: OnDragDrop
        nameWithType: Control.OnDragDrop
        qualifiedName: System.Windows.Forms.Control.OnDragDrop
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnDragDrop(System.Windows.Forms.DragEventArgs)
  System.Windows.Forms.Control.OnGiveFeedback(System.Windows.Forms.GiveFeedbackEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnGiveFeedback(System.Windows.Forms.GiveFeedbackEventArgs)
        name: OnGiveFeedback
        nameWithType: Control.OnGiveFeedback
        qualifiedName: System.Windows.Forms.Control.OnGiveFeedback
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.GiveFeedbackEventArgs
        name: GiveFeedbackEventArgs
        nameWithType: GiveFeedbackEventArgs
        qualifiedName: System.Windows.Forms.GiveFeedbackEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnGiveFeedback(System.Windows.Forms.GiveFeedbackEventArgs)
        name: OnGiveFeedback
        nameWithType: Control.OnGiveFeedback
        qualifiedName: System.Windows.Forms.Control.OnGiveFeedback
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.GiveFeedbackEventArgs
        name: GiveFeedbackEventArgs
        nameWithType: GiveFeedbackEventArgs
        qualifiedName: System.Windows.Forms.GiveFeedbackEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnGiveFeedback(System.Windows.Forms.GiveFeedbackEventArgs)
  System.Windows.Forms.Control.InvokeGotFocus(System.Windows.Forms.Control,System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.InvokeGotFocus(System.Windows.Forms.Control,System.EventArgs)
        name: InvokeGotFocus
        nameWithType: Control.InvokeGotFocus
        qualifiedName: System.Windows.Forms.Control.InvokeGotFocus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.InvokeGotFocus(System.Windows.Forms.Control,System.EventArgs)
        name: InvokeGotFocus
        nameWithType: Control.InvokeGotFocus
        qualifiedName: System.Windows.Forms.Control.InvokeGotFocus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.InvokeGotFocus(System.Windows.Forms.Control,System.EventArgs)
  System.Windows.Forms.Control.OnGotFocus(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnGotFocus(System.EventArgs)
        name: OnGotFocus
        nameWithType: Control.OnGotFocus
        qualifiedName: System.Windows.Forms.Control.OnGotFocus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnGotFocus(System.EventArgs)
        name: OnGotFocus
        nameWithType: Control.OnGotFocus
        qualifiedName: System.Windows.Forms.Control.OnGotFocus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnGotFocus(System.EventArgs)
  System.Windows.Forms.Control.OnHelpRequested(System.Windows.Forms.HelpEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnHelpRequested(System.Windows.Forms.HelpEventArgs)
        name: OnHelpRequested
        nameWithType: Control.OnHelpRequested
        qualifiedName: System.Windows.Forms.Control.OnHelpRequested
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.HelpEventArgs
        name: HelpEventArgs
        nameWithType: HelpEventArgs
        qualifiedName: System.Windows.Forms.HelpEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnHelpRequested(System.Windows.Forms.HelpEventArgs)
        name: OnHelpRequested
        nameWithType: Control.OnHelpRequested
        qualifiedName: System.Windows.Forms.Control.OnHelpRequested
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.HelpEventArgs
        name: HelpEventArgs
        nameWithType: HelpEventArgs
        qualifiedName: System.Windows.Forms.HelpEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnHelpRequested(System.Windows.Forms.HelpEventArgs)
  System.Windows.Forms.Control.OnInvalidated(System.Windows.Forms.InvalidateEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnInvalidated(System.Windows.Forms.InvalidateEventArgs)
        name: OnInvalidated
        nameWithType: Control.OnInvalidated
        qualifiedName: System.Windows.Forms.Control.OnInvalidated
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.InvalidateEventArgs
        name: InvalidateEventArgs
        nameWithType: InvalidateEventArgs
        qualifiedName: System.Windows.Forms.InvalidateEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnInvalidated(System.Windows.Forms.InvalidateEventArgs)
        name: OnInvalidated
        nameWithType: Control.OnInvalidated
        qualifiedName: System.Windows.Forms.Control.OnInvalidated
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.InvalidateEventArgs
        name: InvalidateEventArgs
        nameWithType: InvalidateEventArgs
        qualifiedName: System.Windows.Forms.InvalidateEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnInvalidated(System.Windows.Forms.InvalidateEventArgs)
  System.Windows.Forms.Control.OnKeyDown(System.Windows.Forms.KeyEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnKeyDown(System.Windows.Forms.KeyEventArgs)
        name: OnKeyDown
        nameWithType: Control.OnKeyDown
        qualifiedName: System.Windows.Forms.Control.OnKeyDown
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.KeyEventArgs
        name: KeyEventArgs
        nameWithType: KeyEventArgs
        qualifiedName: System.Windows.Forms.KeyEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnKeyDown(System.Windows.Forms.KeyEventArgs)
        name: OnKeyDown
        nameWithType: Control.OnKeyDown
        qualifiedName: System.Windows.Forms.Control.OnKeyDown
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.KeyEventArgs
        name: KeyEventArgs
        nameWithType: KeyEventArgs
        qualifiedName: System.Windows.Forms.KeyEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnKeyDown(System.Windows.Forms.KeyEventArgs)
  System.Windows.Forms.Control.OnKeyPress(System.Windows.Forms.KeyPressEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnKeyPress(System.Windows.Forms.KeyPressEventArgs)
        name: OnKeyPress
        nameWithType: Control.OnKeyPress
        qualifiedName: System.Windows.Forms.Control.OnKeyPress
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.KeyPressEventArgs
        name: KeyPressEventArgs
        nameWithType: KeyPressEventArgs
        qualifiedName: System.Windows.Forms.KeyPressEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnKeyPress(System.Windows.Forms.KeyPressEventArgs)
        name: OnKeyPress
        nameWithType: Control.OnKeyPress
        qualifiedName: System.Windows.Forms.Control.OnKeyPress
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.KeyPressEventArgs
        name: KeyPressEventArgs
        nameWithType: KeyPressEventArgs
        qualifiedName: System.Windows.Forms.KeyPressEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnKeyPress(System.Windows.Forms.KeyPressEventArgs)
  System.Windows.Forms.Control.OnKeyUp(System.Windows.Forms.KeyEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnKeyUp(System.Windows.Forms.KeyEventArgs)
        name: OnKeyUp
        nameWithType: Control.OnKeyUp
        qualifiedName: System.Windows.Forms.Control.OnKeyUp
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.KeyEventArgs
        name: KeyEventArgs
        nameWithType: KeyEventArgs
        qualifiedName: System.Windows.Forms.KeyEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnKeyUp(System.Windows.Forms.KeyEventArgs)
        name: OnKeyUp
        nameWithType: Control.OnKeyUp
        qualifiedName: System.Windows.Forms.Control.OnKeyUp
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.KeyEventArgs
        name: KeyEventArgs
        nameWithType: KeyEventArgs
        qualifiedName: System.Windows.Forms.KeyEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnKeyUp(System.Windows.Forms.KeyEventArgs)
  System.Windows.Forms.Control.OnLeave(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnLeave(System.EventArgs)
        name: OnLeave
        nameWithType: Control.OnLeave
        qualifiedName: System.Windows.Forms.Control.OnLeave
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnLeave(System.EventArgs)
        name: OnLeave
        nameWithType: Control.OnLeave
        qualifiedName: System.Windows.Forms.Control.OnLeave
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnLeave(System.EventArgs)
  System.Windows.Forms.Control.InvokeLostFocus(System.Windows.Forms.Control,System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.InvokeLostFocus(System.Windows.Forms.Control,System.EventArgs)
        name: InvokeLostFocus
        nameWithType: Control.InvokeLostFocus
        qualifiedName: System.Windows.Forms.Control.InvokeLostFocus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.InvokeLostFocus(System.Windows.Forms.Control,System.EventArgs)
        name: InvokeLostFocus
        nameWithType: Control.InvokeLostFocus
        qualifiedName: System.Windows.Forms.Control.InvokeLostFocus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.InvokeLostFocus(System.Windows.Forms.Control,System.EventArgs)
  System.Windows.Forms.Control.OnLostFocus(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnLostFocus(System.EventArgs)
        name: OnLostFocus
        nameWithType: Control.OnLostFocus
        qualifiedName: System.Windows.Forms.Control.OnLostFocus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnLostFocus(System.EventArgs)
        name: OnLostFocus
        nameWithType: Control.OnLostFocus
        qualifiedName: System.Windows.Forms.Control.OnLostFocus
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnLostFocus(System.EventArgs)
  System.Windows.Forms.Control.OnMarginChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMarginChanged(System.EventArgs)
        name: OnMarginChanged
        nameWithType: Control.OnMarginChanged
        qualifiedName: System.Windows.Forms.Control.OnMarginChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMarginChanged(System.EventArgs)
        name: OnMarginChanged
        nameWithType: Control.OnMarginChanged
        qualifiedName: System.Windows.Forms.Control.OnMarginChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMarginChanged(System.EventArgs)
  System.Windows.Forms.Control.OnMouseDoubleClick(System.Windows.Forms.MouseEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseDoubleClick(System.Windows.Forms.MouseEventArgs)
        name: OnMouseDoubleClick
        nameWithType: Control.OnMouseDoubleClick
        qualifiedName: System.Windows.Forms.Control.OnMouseDoubleClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseDoubleClick(System.Windows.Forms.MouseEventArgs)
        name: OnMouseDoubleClick
        nameWithType: Control.OnMouseDoubleClick
        qualifiedName: System.Windows.Forms.Control.OnMouseDoubleClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseDoubleClick(System.Windows.Forms.MouseEventArgs)
  System.Windows.Forms.Control.OnMouseClick(System.Windows.Forms.MouseEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseClick(System.Windows.Forms.MouseEventArgs)
        name: OnMouseClick
        nameWithType: Control.OnMouseClick
        qualifiedName: System.Windows.Forms.Control.OnMouseClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseClick(System.Windows.Forms.MouseEventArgs)
        name: OnMouseClick
        nameWithType: Control.OnMouseClick
        qualifiedName: System.Windows.Forms.Control.OnMouseClick
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseClick(System.Windows.Forms.MouseEventArgs)
  System.Windows.Forms.Control.OnMouseCaptureChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseCaptureChanged(System.EventArgs)
        name: OnMouseCaptureChanged
        nameWithType: Control.OnMouseCaptureChanged
        qualifiedName: System.Windows.Forms.Control.OnMouseCaptureChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseCaptureChanged(System.EventArgs)
        name: OnMouseCaptureChanged
        nameWithType: Control.OnMouseCaptureChanged
        qualifiedName: System.Windows.Forms.Control.OnMouseCaptureChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseCaptureChanged(System.EventArgs)
  System.Windows.Forms.Control.OnMouseDown(System.Windows.Forms.MouseEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseDown(System.Windows.Forms.MouseEventArgs)
        name: OnMouseDown
        nameWithType: Control.OnMouseDown
        qualifiedName: System.Windows.Forms.Control.OnMouseDown
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseDown(System.Windows.Forms.MouseEventArgs)
        name: OnMouseDown
        nameWithType: Control.OnMouseDown
        qualifiedName: System.Windows.Forms.Control.OnMouseDown
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseDown(System.Windows.Forms.MouseEventArgs)
  System.Windows.Forms.Control.OnMouseEnter(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseEnter(System.EventArgs)
        name: OnMouseEnter
        nameWithType: Control.OnMouseEnter
        qualifiedName: System.Windows.Forms.Control.OnMouseEnter
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseEnter(System.EventArgs)
        name: OnMouseEnter
        nameWithType: Control.OnMouseEnter
        qualifiedName: System.Windows.Forms.Control.OnMouseEnter
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseEnter(System.EventArgs)
  System.Windows.Forms.Control.OnMouseLeave(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseLeave(System.EventArgs)
        name: OnMouseLeave
        nameWithType: Control.OnMouseLeave
        qualifiedName: System.Windows.Forms.Control.OnMouseLeave
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseLeave(System.EventArgs)
        name: OnMouseLeave
        nameWithType: Control.OnMouseLeave
        qualifiedName: System.Windows.Forms.Control.OnMouseLeave
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseLeave(System.EventArgs)
  System.Windows.Forms.Control.OnDpiChangedBeforeParent(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnDpiChangedBeforeParent(System.EventArgs)
        name: OnDpiChangedBeforeParent
        nameWithType: Control.OnDpiChangedBeforeParent
        qualifiedName: System.Windows.Forms.Control.OnDpiChangedBeforeParent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnDpiChangedBeforeParent(System.EventArgs)
        name: OnDpiChangedBeforeParent
        nameWithType: Control.OnDpiChangedBeforeParent
        qualifiedName: System.Windows.Forms.Control.OnDpiChangedBeforeParent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnDpiChangedBeforeParent(System.EventArgs)
  System.Windows.Forms.Control.OnDpiChangedAfterParent(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnDpiChangedAfterParent(System.EventArgs)
        name: OnDpiChangedAfterParent
        nameWithType: Control.OnDpiChangedAfterParent
        qualifiedName: System.Windows.Forms.Control.OnDpiChangedAfterParent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnDpiChangedAfterParent(System.EventArgs)
        name: OnDpiChangedAfterParent
        nameWithType: Control.OnDpiChangedAfterParent
        qualifiedName: System.Windows.Forms.Control.OnDpiChangedAfterParent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnDpiChangedAfterParent(System.EventArgs)
  System.Windows.Forms.Control.OnMouseHover(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseHover(System.EventArgs)
        name: OnMouseHover
        nameWithType: Control.OnMouseHover
        qualifiedName: System.Windows.Forms.Control.OnMouseHover
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseHover(System.EventArgs)
        name: OnMouseHover
        nameWithType: Control.OnMouseHover
        qualifiedName: System.Windows.Forms.Control.OnMouseHover
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseHover(System.EventArgs)
  System.Windows.Forms.Control.OnMouseMove(System.Windows.Forms.MouseEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseMove(System.Windows.Forms.MouseEventArgs)
        name: OnMouseMove
        nameWithType: Control.OnMouseMove
        qualifiedName: System.Windows.Forms.Control.OnMouseMove
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseMove(System.Windows.Forms.MouseEventArgs)
        name: OnMouseMove
        nameWithType: Control.OnMouseMove
        qualifiedName: System.Windows.Forms.Control.OnMouseMove
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseMove(System.Windows.Forms.MouseEventArgs)
  System.Windows.Forms.Control.OnMouseUp(System.Windows.Forms.MouseEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMouseUp(System.Windows.Forms.MouseEventArgs)
        name: OnMouseUp
        nameWithType: Control.OnMouseUp
        qualifiedName: System.Windows.Forms.Control.OnMouseUp
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMouseUp(System.Windows.Forms.MouseEventArgs)
        name: OnMouseUp
        nameWithType: Control.OnMouseUp
        qualifiedName: System.Windows.Forms.Control.OnMouseUp
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.MouseEventArgs
        name: MouseEventArgs
        nameWithType: MouseEventArgs
        qualifiedName: System.Windows.Forms.MouseEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMouseUp(System.Windows.Forms.MouseEventArgs)
  System.Windows.Forms.Control.OnMove(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnMove(System.EventArgs)
        name: OnMove
        nameWithType: Control.OnMove
        qualifiedName: System.Windows.Forms.Control.OnMove
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnMove(System.EventArgs)
        name: OnMove
        nameWithType: Control.OnMove
        qualifiedName: System.Windows.Forms.Control.OnMove
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnMove(System.EventArgs)
  System.Windows.Forms.Control.OnQueryContinueDrag(System.Windows.Forms.QueryContinueDragEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnQueryContinueDrag(System.Windows.Forms.QueryContinueDragEventArgs)
        name: OnQueryContinueDrag
        nameWithType: Control.OnQueryContinueDrag
        qualifiedName: System.Windows.Forms.Control.OnQueryContinueDrag
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.QueryContinueDragEventArgs
        name: QueryContinueDragEventArgs
        nameWithType: QueryContinueDragEventArgs
        qualifiedName: System.Windows.Forms.QueryContinueDragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnQueryContinueDrag(System.Windows.Forms.QueryContinueDragEventArgs)
        name: OnQueryContinueDrag
        nameWithType: Control.OnQueryContinueDrag
        qualifiedName: System.Windows.Forms.Control.OnQueryContinueDrag
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.QueryContinueDragEventArgs
        name: QueryContinueDragEventArgs
        nameWithType: QueryContinueDragEventArgs
        qualifiedName: System.Windows.Forms.QueryContinueDragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnQueryContinueDrag(System.Windows.Forms.QueryContinueDragEventArgs)
  System.Windows.Forms.Control.OnRegionChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnRegionChanged(System.EventArgs)
        name: OnRegionChanged
        nameWithType: Control.OnRegionChanged
        qualifiedName: System.Windows.Forms.Control.OnRegionChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnRegionChanged(System.EventArgs)
        name: OnRegionChanged
        nameWithType: Control.OnRegionChanged
        qualifiedName: System.Windows.Forms.Control.OnRegionChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnRegionChanged(System.EventArgs)
  System.Windows.Forms.Control.OnPreviewKeyDown(System.Windows.Forms.PreviewKeyDownEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnPreviewKeyDown(System.Windows.Forms.PreviewKeyDownEventArgs)
        name: OnPreviewKeyDown
        nameWithType: Control.OnPreviewKeyDown
        qualifiedName: System.Windows.Forms.Control.OnPreviewKeyDown
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.PreviewKeyDownEventArgs
        name: PreviewKeyDownEventArgs
        nameWithType: PreviewKeyDownEventArgs
        qualifiedName: System.Windows.Forms.PreviewKeyDownEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnPreviewKeyDown(System.Windows.Forms.PreviewKeyDownEventArgs)
        name: OnPreviewKeyDown
        nameWithType: Control.OnPreviewKeyDown
        qualifiedName: System.Windows.Forms.Control.OnPreviewKeyDown
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.PreviewKeyDownEventArgs
        name: PreviewKeyDownEventArgs
        nameWithType: PreviewKeyDownEventArgs
        qualifiedName: System.Windows.Forms.PreviewKeyDownEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnPreviewKeyDown(System.Windows.Forms.PreviewKeyDownEventArgs)
  System.Windows.Forms.Control.OnSizeChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnSizeChanged(System.EventArgs)
        name: OnSizeChanged
        nameWithType: Control.OnSizeChanged
        qualifiedName: System.Windows.Forms.Control.OnSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnSizeChanged(System.EventArgs)
        name: OnSizeChanged
        nameWithType: Control.OnSizeChanged
        qualifiedName: System.Windows.Forms.Control.OnSizeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnSizeChanged(System.EventArgs)
  System.Windows.Forms.Control.OnChangeUICues(System.Windows.Forms.UICuesEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnChangeUICues(System.Windows.Forms.UICuesEventArgs)
        name: OnChangeUICues
        nameWithType: Control.OnChangeUICues
        qualifiedName: System.Windows.Forms.Control.OnChangeUICues
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.UICuesEventArgs
        name: UICuesEventArgs
        nameWithType: UICuesEventArgs
        qualifiedName: System.Windows.Forms.UICuesEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnChangeUICues(System.Windows.Forms.UICuesEventArgs)
        name: OnChangeUICues
        nameWithType: Control.OnChangeUICues
        qualifiedName: System.Windows.Forms.Control.OnChangeUICues
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.UICuesEventArgs
        name: UICuesEventArgs
        nameWithType: UICuesEventArgs
        qualifiedName: System.Windows.Forms.UICuesEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnChangeUICues(System.Windows.Forms.UICuesEventArgs)
  System.Windows.Forms.Control.OnSystemColorsChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnSystemColorsChanged(System.EventArgs)
        name: OnSystemColorsChanged
        nameWithType: Control.OnSystemColorsChanged
        qualifiedName: System.Windows.Forms.Control.OnSystemColorsChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnSystemColorsChanged(System.EventArgs)
        name: OnSystemColorsChanged
        nameWithType: Control.OnSystemColorsChanged
        qualifiedName: System.Windows.Forms.Control.OnSystemColorsChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnSystemColorsChanged(System.EventArgs)
  System.Windows.Forms.Control.OnValidating(System.ComponentModel.CancelEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnValidating(System.ComponentModel.CancelEventArgs)
        name: OnValidating
        nameWithType: Control.OnValidating
        qualifiedName: System.Windows.Forms.Control.OnValidating
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.ComponentModel.CancelEventArgs
        name: CancelEventArgs
        nameWithType: CancelEventArgs
        qualifiedName: System.ComponentModel.CancelEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnValidating(System.ComponentModel.CancelEventArgs)
        name: OnValidating
        nameWithType: Control.OnValidating
        qualifiedName: System.Windows.Forms.Control.OnValidating
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.ComponentModel.CancelEventArgs
        name: CancelEventArgs
        nameWithType: CancelEventArgs
        qualifiedName: System.ComponentModel.CancelEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnValidating(System.ComponentModel.CancelEventArgs)
  System.Windows.Forms.Control.OnValidated(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnValidated(System.EventArgs)
        name: OnValidated
        nameWithType: Control.OnValidated
        qualifiedName: System.Windows.Forms.Control.OnValidated
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnValidated(System.EventArgs)
        name: OnValidated
        nameWithType: Control.OnValidated
        qualifiedName: System.Windows.Forms.Control.OnValidated
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnValidated(System.EventArgs)
  System.Windows.Forms.Control.RescaleConstantsForDpi(System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RescaleConstantsForDpi(System.Int32,System.Int32)
        name: RescaleConstantsForDpi
        nameWithType: Control.RescaleConstantsForDpi
        qualifiedName: System.Windows.Forms.Control.RescaleConstantsForDpi
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RescaleConstantsForDpi(System.Int32,System.Int32)
        name: RescaleConstantsForDpi
        nameWithType: Control.RescaleConstantsForDpi
        qualifiedName: System.Windows.Forms.Control.RescaleConstantsForDpi
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RescaleConstantsForDpi(System.Int32,System.Int32)
  System.Windows.Forms.Control.PerformLayout:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PerformLayout
        name: PerformLayout
        nameWithType: Control.PerformLayout
        qualifiedName: System.Windows.Forms.Control.PerformLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.PerformLayout
        name: PerformLayout
        nameWithType: Control.PerformLayout
        qualifiedName: System.Windows.Forms.Control.PerformLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.PerformLayout
  System.Windows.Forms.Control.PerformLayout(System.Windows.Forms.Control,System.String):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PerformLayout(System.Windows.Forms.Control,System.String)
        name: PerformLayout
        nameWithType: Control.PerformLayout
        qualifiedName: System.Windows.Forms.Control.PerformLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.String
        name: String
        nameWithType: String
        qualifiedName: System.String
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.PerformLayout(System.Windows.Forms.Control,System.String)
        name: PerformLayout
        nameWithType: Control.PerformLayout
        qualifiedName: System.Windows.Forms.Control.PerformLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.String
        name: String
        nameWithType: String
        qualifiedName: System.String
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.PerformLayout(System.Windows.Forms.Control,System.String)
  System.Windows.Forms.Control.PointToClient(System.Drawing.Point):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PointToClient(System.Drawing.Point)
        name: PointToClient
        nameWithType: Control.PointToClient
        qualifiedName: System.Windows.Forms.Control.PointToClient
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Point
        name: Point
        nameWithType: Point
        qualifiedName: System.Drawing.Point
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.PointToClient(System.Drawing.Point)
        name: PointToClient
        nameWithType: Control.PointToClient
        qualifiedName: System.Windows.Forms.Control.PointToClient
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Point
        name: Point
        nameWithType: Point
        qualifiedName: System.Drawing.Point
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.PointToClient(System.Drawing.Point)
  System.Windows.Forms.Control.PointToScreen(System.Drawing.Point):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PointToScreen(System.Drawing.Point)
        name: PointToScreen
        nameWithType: Control.PointToScreen
        qualifiedName: System.Windows.Forms.Control.PointToScreen
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Point
        name: Point
        nameWithType: Point
        qualifiedName: System.Drawing.Point
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.PointToScreen(System.Drawing.Point)
        name: PointToScreen
        nameWithType: Control.PointToScreen
        qualifiedName: System.Windows.Forms.Control.PointToScreen
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Point
        name: Point
        nameWithType: Point
        qualifiedName: System.Drawing.Point
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.PointToScreen(System.Drawing.Point)
  System.Windows.Forms.Control.PreProcessMessage(System.Windows.Forms.Message@):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PreProcessMessage(System.Windows.Forms.Message@)
        name: PreProcessMessage
        nameWithType: Control.PreProcessMessage
        qualifiedName: System.Windows.Forms.Control.PreProcessMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.PreProcessMessage(System.Windows.Forms.Message@)
        name: PreProcessMessage
        nameWithType: Control.PreProcessMessage
        qualifiedName: System.Windows.Forms.Control.PreProcessMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.PreProcessMessage(System.Windows.Forms.Message@)
  System.Windows.Forms.Control.PreProcessControlMessage(System.Windows.Forms.Message@):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PreProcessControlMessage(System.Windows.Forms.Message@)
        name: PreProcessControlMessage
        nameWithType: Control.PreProcessControlMessage
        qualifiedName: System.Windows.Forms.Control.PreProcessControlMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.PreProcessControlMessage(System.Windows.Forms.Message@)
        name: PreProcessControlMessage
        nameWithType: Control.PreProcessControlMessage
        qualifiedName: System.Windows.Forms.Control.PreProcessControlMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.PreProcessControlMessage(System.Windows.Forms.Message@)
  System.Windows.Forms.Control.ProcessKeyEventArgs(System.Windows.Forms.Message@):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ProcessKeyEventArgs(System.Windows.Forms.Message@)
        name: ProcessKeyEventArgs
        nameWithType: Control.ProcessKeyEventArgs
        qualifiedName: System.Windows.Forms.Control.ProcessKeyEventArgs
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.ProcessKeyEventArgs(System.Windows.Forms.Message@)
        name: ProcessKeyEventArgs
        nameWithType: Control.ProcessKeyEventArgs
        qualifiedName: System.Windows.Forms.Control.ProcessKeyEventArgs
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.ProcessKeyEventArgs(System.Windows.Forms.Message@)
  System.Windows.Forms.Control.ProcessKeyMessage(System.Windows.Forms.Message@):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ProcessKeyMessage(System.Windows.Forms.Message@)
        name: ProcessKeyMessage
        nameWithType: Control.ProcessKeyMessage
        qualifiedName: System.Windows.Forms.Control.ProcessKeyMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.ProcessKeyMessage(System.Windows.Forms.Message@)
        name: ProcessKeyMessage
        nameWithType: Control.ProcessKeyMessage
        qualifiedName: System.Windows.Forms.Control.ProcessKeyMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.ProcessKeyMessage(System.Windows.Forms.Message@)
  System.Windows.Forms.Control.RaiseDragEvent(System.Object,System.Windows.Forms.DragEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RaiseDragEvent(System.Object,System.Windows.Forms.DragEventArgs)
        name: RaiseDragEvent
        nameWithType: Control.RaiseDragEvent
        qualifiedName: System.Windows.Forms.Control.RaiseDragEvent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RaiseDragEvent(System.Object,System.Windows.Forms.DragEventArgs)
        name: RaiseDragEvent
        nameWithType: Control.RaiseDragEvent
        qualifiedName: System.Windows.Forms.Control.RaiseDragEvent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RaiseDragEvent(System.Object,System.Windows.Forms.DragEventArgs)
  System.Windows.Forms.Control.RaisePaintEvent(System.Object,System.Windows.Forms.PaintEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RaisePaintEvent(System.Object,System.Windows.Forms.PaintEventArgs)
        name: RaisePaintEvent
        nameWithType: Control.RaisePaintEvent
        qualifiedName: System.Windows.Forms.Control.RaisePaintEvent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RaisePaintEvent(System.Object,System.Windows.Forms.PaintEventArgs)
        name: RaisePaintEvent
        nameWithType: Control.RaisePaintEvent
        qualifiedName: System.Windows.Forms.Control.RaisePaintEvent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.PaintEventArgs
        name: PaintEventArgs
        nameWithType: PaintEventArgs
        qualifiedName: System.Windows.Forms.PaintEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RaisePaintEvent(System.Object,System.Windows.Forms.PaintEventArgs)
  System.Windows.Forms.Control.RecreateHandle:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RecreateHandle
        name: RecreateHandle
        nameWithType: Control.RecreateHandle
        qualifiedName: System.Windows.Forms.Control.RecreateHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RecreateHandle
        name: RecreateHandle
        nameWithType: Control.RecreateHandle
        qualifiedName: System.Windows.Forms.Control.RecreateHandle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RecreateHandle
  System.Windows.Forms.Control.RectangleToClient(System.Drawing.Rectangle):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RectangleToClient(System.Drawing.Rectangle)
        name: RectangleToClient
        nameWithType: Control.RectangleToClient
        qualifiedName: System.Windows.Forms.Control.RectangleToClient
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RectangleToClient(System.Drawing.Rectangle)
        name: RectangleToClient
        nameWithType: Control.RectangleToClient
        qualifiedName: System.Windows.Forms.Control.RectangleToClient
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RectangleToClient(System.Drawing.Rectangle)
  System.Windows.Forms.Control.RectangleToScreen(System.Drawing.Rectangle):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RectangleToScreen(System.Drawing.Rectangle)
        name: RectangleToScreen
        nameWithType: Control.RectangleToScreen
        qualifiedName: System.Windows.Forms.Control.RectangleToScreen
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RectangleToScreen(System.Drawing.Rectangle)
        name: RectangleToScreen
        nameWithType: Control.RectangleToScreen
        qualifiedName: System.Windows.Forms.Control.RectangleToScreen
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Rectangle
        name: Rectangle
        nameWithType: Rectangle
        qualifiedName: System.Drawing.Rectangle
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RectangleToScreen(System.Drawing.Rectangle)
  System.Windows.Forms.Control.ReflectMessage(System.IntPtr,System.Windows.Forms.Message@):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ReflectMessage(System.IntPtr,System.Windows.Forms.Message@)
        name: ReflectMessage
        nameWithType: Control.ReflectMessage
        qualifiedName: System.Windows.Forms.Control.ReflectMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.IntPtr
        name: IntPtr
        nameWithType: IntPtr
        qualifiedName: System.IntPtr
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.ReflectMessage(System.IntPtr,System.Windows.Forms.Message@)
        name: ReflectMessage
        nameWithType: Control.ReflectMessage
        qualifiedName: System.Windows.Forms.Control.ReflectMessage
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.IntPtr
        name: IntPtr
        nameWithType: IntPtr
        qualifiedName: System.IntPtr
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.Message
        name: Message
        nameWithType: Message
        qualifiedName: System.Windows.Forms.Message
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.ReflectMessage(System.IntPtr,System.Windows.Forms.Message@)
  System.Windows.Forms.Control.Refresh:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Refresh
        name: Refresh
        nameWithType: Control.Refresh
        qualifiedName: System.Windows.Forms.Control.Refresh
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Refresh
        name: Refresh
        nameWithType: Control.Refresh
        qualifiedName: System.Windows.Forms.Control.Refresh
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Refresh
  System.Windows.Forms.Control.ResetMouseEventArgs:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ResetMouseEventArgs
        name: ResetMouseEventArgs
        nameWithType: Control.ResetMouseEventArgs
        qualifiedName: System.Windows.Forms.Control.ResetMouseEventArgs
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.ResetMouseEventArgs
        name: ResetMouseEventArgs
        nameWithType: Control.ResetMouseEventArgs
        qualifiedName: System.Windows.Forms.Control.ResetMouseEventArgs
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.ResetMouseEventArgs
  System.Windows.Forms.Control.ResetText:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ResetText
        name: ResetText
        nameWithType: Control.ResetText
        qualifiedName: System.Windows.Forms.Control.ResetText
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.ResetText
        name: ResetText
        nameWithType: Control.ResetText
        qualifiedName: System.Windows.Forms.Control.ResetText
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.ResetText
  System.Windows.Forms.Control.ResumeLayout:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ResumeLayout
        name: ResumeLayout
        nameWithType: Control.ResumeLayout
        qualifiedName: System.Windows.Forms.Control.ResumeLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.ResumeLayout
        name: ResumeLayout
        nameWithType: Control.ResumeLayout
        qualifiedName: System.Windows.Forms.Control.ResumeLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.ResumeLayout
  System.Windows.Forms.Control.ResumeLayout(System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ResumeLayout(System.Boolean)
        name: ResumeLayout
        nameWithType: Control.ResumeLayout
        qualifiedName: System.Windows.Forms.Control.ResumeLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.ResumeLayout(System.Boolean)
        name: ResumeLayout
        nameWithType: Control.ResumeLayout
        qualifiedName: System.Windows.Forms.Control.ResumeLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.ResumeLayout(System.Boolean)
  System.Windows.Forms.Control.Scale(System.Drawing.SizeF):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Scale(System.Drawing.SizeF)
        name: Scale
        nameWithType: Control.Scale
        qualifiedName: System.Windows.Forms.Control.Scale
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.SizeF
        name: SizeF
        nameWithType: SizeF
        qualifiedName: System.Drawing.SizeF
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Scale(System.Drawing.SizeF)
        name: Scale
        nameWithType: Control.Scale
        qualifiedName: System.Windows.Forms.Control.Scale
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.SizeF
        name: SizeF
        nameWithType: SizeF
        qualifiedName: System.Drawing.SizeF
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Scale(System.Drawing.SizeF)
  System.Windows.Forms.Control.Select:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Select
        name: Select
        nameWithType: Control.Select
        qualifiedName: System.Windows.Forms.Control.Select
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Select
        name: Select
        nameWithType: Control.Select
        qualifiedName: System.Windows.Forms.Control.Select
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Select
  ? System.Windows.Forms.Control.SelectNextControl(System.Windows.Forms.Control,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
  : name:
      CSharp:
      - id: System.Windows.Forms.Control.SelectNextControl(System.Windows.Forms.Control,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
        name: SelectNextControl
        nameWithType: Control.SelectNextControl
        qualifiedName: System.Windows.Forms.Control.SelectNextControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SelectNextControl(System.Windows.Forms.Control,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
        name: SelectNextControl
        nameWithType: Control.SelectNextControl
        qualifiedName: System.Windows.Forms.Control.SelectNextControl
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.Control
        name: Control
        nameWithType: Control
        qualifiedName: System.Windows.Forms.Control
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SelectNextControl(System.Windows.Forms.Control,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
  System.Windows.Forms.Control.SendToBack:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SendToBack
        name: SendToBack
        nameWithType: Control.SendToBack
        qualifiedName: System.Windows.Forms.Control.SendToBack
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SendToBack
        name: SendToBack
        nameWithType: Control.SendToBack
        qualifiedName: System.Windows.Forms.Control.SendToBack
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SendToBack
  System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32)
        name: SetBounds
        nameWithType: Control.SetBounds
        qualifiedName: System.Windows.Forms.Control.SetBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32)
        name: SetBounds
        nameWithType: Control.SetBounds
        qualifiedName: System.Windows.Forms.Control.SetBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32)
  System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
        name: SetBounds
        nameWithType: Control.SetBounds
        qualifiedName: System.Windows.Forms.Control.SetBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.BoundsSpecified
        name: BoundsSpecified
        nameWithType: BoundsSpecified
        qualifiedName: System.Windows.Forms.BoundsSpecified
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
        name: SetBounds
        nameWithType: Control.SetBounds
        qualifiedName: System.Windows.Forms.Control.SetBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Windows.Forms.BoundsSpecified
        name: BoundsSpecified
        nameWithType: BoundsSpecified
        qualifiedName: System.Windows.Forms.BoundsSpecified
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SetBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Windows.Forms.BoundsSpecified)
  System.Windows.Forms.Control.SizeFromClientSize(System.Drawing.Size):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SizeFromClientSize(System.Drawing.Size)
        name: SizeFromClientSize
        nameWithType: Control.SizeFromClientSize
        qualifiedName: System.Windows.Forms.Control.SizeFromClientSize
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Size
        name: Size
        nameWithType: Size
        qualifiedName: System.Drawing.Size
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SizeFromClientSize(System.Drawing.Size)
        name: SizeFromClientSize
        nameWithType: Control.SizeFromClientSize
        qualifiedName: System.Windows.Forms.Control.SizeFromClientSize
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.Size
        name: Size
        nameWithType: Size
        qualifiedName: System.Drawing.Size
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SizeFromClientSize(System.Drawing.Size)
  System.Windows.Forms.Control.SetStyle(System.Windows.Forms.ControlStyles,System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SetStyle(System.Windows.Forms.ControlStyles,System.Boolean)
        name: SetStyle
        nameWithType: Control.SetStyle
        qualifiedName: System.Windows.Forms.Control.SetStyle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ControlStyles
        name: ControlStyles
        nameWithType: ControlStyles
        qualifiedName: System.Windows.Forms.ControlStyles
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SetStyle(System.Windows.Forms.ControlStyles,System.Boolean)
        name: SetStyle
        nameWithType: Control.SetStyle
        qualifiedName: System.Windows.Forms.Control.SetStyle
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.ControlStyles
        name: ControlStyles
        nameWithType: ControlStyles
        qualifiedName: System.Windows.Forms.ControlStyles
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SetStyle(System.Windows.Forms.ControlStyles,System.Boolean)
  System.Windows.Forms.Control.SetTopLevel(System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SetTopLevel(System.Boolean)
        name: SetTopLevel
        nameWithType: Control.SetTopLevel
        qualifiedName: System.Windows.Forms.Control.SetTopLevel
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SetTopLevel(System.Boolean)
        name: SetTopLevel
        nameWithType: Control.SetTopLevel
        qualifiedName: System.Windows.Forms.Control.SetTopLevel
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SetTopLevel(System.Boolean)
  System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.HorizontalAlignment):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.HorizontalAlignment)
        name: RtlTranslateAlignment
        nameWithType: Control.RtlTranslateAlignment
        qualifiedName: System.Windows.Forms.Control.RtlTranslateAlignment
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.HorizontalAlignment
        name: HorizontalAlignment
        nameWithType: HorizontalAlignment
        qualifiedName: System.Windows.Forms.HorizontalAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.HorizontalAlignment)
        name: RtlTranslateAlignment
        nameWithType: Control.RtlTranslateAlignment
        qualifiedName: System.Windows.Forms.Control.RtlTranslateAlignment
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.HorizontalAlignment
        name: HorizontalAlignment
        nameWithType: HorizontalAlignment
        qualifiedName: System.Windows.Forms.HorizontalAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.HorizontalAlignment)
  System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.LeftRightAlignment):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.LeftRightAlignment)
        name: RtlTranslateAlignment
        nameWithType: Control.RtlTranslateAlignment
        qualifiedName: System.Windows.Forms.Control.RtlTranslateAlignment
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.LeftRightAlignment
        name: LeftRightAlignment
        nameWithType: LeftRightAlignment
        qualifiedName: System.Windows.Forms.LeftRightAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.LeftRightAlignment)
        name: RtlTranslateAlignment
        nameWithType: Control.RtlTranslateAlignment
        qualifiedName: System.Windows.Forms.Control.RtlTranslateAlignment
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.LeftRightAlignment
        name: LeftRightAlignment
        nameWithType: LeftRightAlignment
        qualifiedName: System.Windows.Forms.LeftRightAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RtlTranslateAlignment(System.Windows.Forms.LeftRightAlignment)
  System.Windows.Forms.Control.RtlTranslateAlignment(System.Drawing.ContentAlignment):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RtlTranslateAlignment(System.Drawing.ContentAlignment)
        name: RtlTranslateAlignment
        nameWithType: Control.RtlTranslateAlignment
        qualifiedName: System.Windows.Forms.Control.RtlTranslateAlignment
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.ContentAlignment
        name: ContentAlignment
        nameWithType: ContentAlignment
        qualifiedName: System.Drawing.ContentAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RtlTranslateAlignment(System.Drawing.ContentAlignment)
        name: RtlTranslateAlignment
        nameWithType: Control.RtlTranslateAlignment
        qualifiedName: System.Windows.Forms.Control.RtlTranslateAlignment
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.ContentAlignment
        name: ContentAlignment
        nameWithType: ContentAlignment
        qualifiedName: System.Drawing.ContentAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RtlTranslateAlignment(System.Drawing.ContentAlignment)
  System.Windows.Forms.Control.RtlTranslateHorizontal(System.Windows.Forms.HorizontalAlignment):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RtlTranslateHorizontal(System.Windows.Forms.HorizontalAlignment)
        name: RtlTranslateHorizontal
        nameWithType: Control.RtlTranslateHorizontal
        qualifiedName: System.Windows.Forms.Control.RtlTranslateHorizontal
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.HorizontalAlignment
        name: HorizontalAlignment
        nameWithType: HorizontalAlignment
        qualifiedName: System.Windows.Forms.HorizontalAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RtlTranslateHorizontal(System.Windows.Forms.HorizontalAlignment)
        name: RtlTranslateHorizontal
        nameWithType: Control.RtlTranslateHorizontal
        qualifiedName: System.Windows.Forms.Control.RtlTranslateHorizontal
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.HorizontalAlignment
        name: HorizontalAlignment
        nameWithType: HorizontalAlignment
        qualifiedName: System.Windows.Forms.HorizontalAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RtlTranslateHorizontal(System.Windows.Forms.HorizontalAlignment)
  System.Windows.Forms.Control.RtlTranslateLeftRight(System.Windows.Forms.LeftRightAlignment):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RtlTranslateLeftRight(System.Windows.Forms.LeftRightAlignment)
        name: RtlTranslateLeftRight
        nameWithType: Control.RtlTranslateLeftRight
        qualifiedName: System.Windows.Forms.Control.RtlTranslateLeftRight
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.LeftRightAlignment
        name: LeftRightAlignment
        nameWithType: LeftRightAlignment
        qualifiedName: System.Windows.Forms.LeftRightAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RtlTranslateLeftRight(System.Windows.Forms.LeftRightAlignment)
        name: RtlTranslateLeftRight
        nameWithType: Control.RtlTranslateLeftRight
        qualifiedName: System.Windows.Forms.Control.RtlTranslateLeftRight
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.LeftRightAlignment
        name: LeftRightAlignment
        nameWithType: LeftRightAlignment
        qualifiedName: System.Windows.Forms.LeftRightAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RtlTranslateLeftRight(System.Windows.Forms.LeftRightAlignment)
  System.Windows.Forms.Control.RtlTranslateContent(System.Drawing.ContentAlignment):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RtlTranslateContent(System.Drawing.ContentAlignment)
        name: RtlTranslateContent
        nameWithType: Control.RtlTranslateContent
        qualifiedName: System.Windows.Forms.Control.RtlTranslateContent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.ContentAlignment
        name: ContentAlignment
        nameWithType: ContentAlignment
        qualifiedName: System.Drawing.ContentAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.RtlTranslateContent(System.Drawing.ContentAlignment)
        name: RtlTranslateContent
        nameWithType: Control.RtlTranslateContent
        qualifiedName: System.Windows.Forms.Control.RtlTranslateContent
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Drawing.ContentAlignment
        name: ContentAlignment
        nameWithType: ContentAlignment
        qualifiedName: System.Drawing.ContentAlignment
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.RtlTranslateContent(System.Drawing.ContentAlignment)
  System.Windows.Forms.Control.Show:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Show
        name: Show
        nameWithType: Control.Show
        qualifiedName: System.Windows.Forms.Control.Show
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Show
        name: Show
        nameWithType: Control.Show
        qualifiedName: System.Windows.Forms.Control.Show
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Show
  System.Windows.Forms.Control.SuspendLayout:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SuspendLayout
        name: SuspendLayout
        nameWithType: Control.SuspendLayout
        qualifiedName: System.Windows.Forms.Control.SuspendLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.SuspendLayout
        name: SuspendLayout
        nameWithType: Control.SuspendLayout
        qualifiedName: System.Windows.Forms.Control.SuspendLayout
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.SuspendLayout
  System.Windows.Forms.Control.Update:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Update
        name: Update
        nameWithType: Control.Update
        qualifiedName: System.Windows.Forms.Control.Update
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.Update
        name: Update
        nameWithType: Control.Update
        qualifiedName: System.Windows.Forms.Control.Update
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.Update
  System.Windows.Forms.Control.UpdateBounds:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.UpdateBounds
        name: UpdateBounds
        nameWithType: Control.UpdateBounds
        qualifiedName: System.Windows.Forms.Control.UpdateBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.UpdateBounds
        name: UpdateBounds
        nameWithType: Control.UpdateBounds
        qualifiedName: System.Windows.Forms.Control.UpdateBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.UpdateBounds
  System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32)
        name: UpdateBounds
        nameWithType: Control.UpdateBounds
        qualifiedName: System.Windows.Forms.Control.UpdateBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32)
        name: UpdateBounds
        nameWithType: Control.UpdateBounds
        qualifiedName: System.Windows.Forms.Control.UpdateBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32)
  System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
        name: UpdateBounds
        nameWithType: Control.UpdateBounds
        qualifiedName: System.Windows.Forms.Control.UpdateBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
        name: UpdateBounds
        nameWithType: Control.UpdateBounds
        qualifiedName: System.Windows.Forms.Control.UpdateBounds
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Int32
        name: Int32
        nameWithType: Int32
        qualifiedName: System.Int32
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.UpdateBounds(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
  System.Windows.Forms.Control.UpdateZOrder:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.UpdateZOrder
        name: UpdateZOrder
        nameWithType: Control.UpdateZOrder
        qualifiedName: System.Windows.Forms.Control.UpdateZOrder
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.UpdateZOrder
        name: UpdateZOrder
        nameWithType: Control.UpdateZOrder
        qualifiedName: System.Windows.Forms.Control.UpdateZOrder
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.UpdateZOrder
  System.Windows.Forms.Control.UpdateStyles:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.UpdateStyles
        name: UpdateStyles
        nameWithType: Control.UpdateStyles
        qualifiedName: System.Windows.Forms.Control.UpdateStyles
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.UpdateStyles
        name: UpdateStyles
        nameWithType: Control.UpdateStyles
        qualifiedName: System.Windows.Forms.Control.UpdateStyles
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.UpdateStyles
  System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragEnter(System.Windows.Forms.DragEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragEnter(System.Windows.Forms.DragEventArgs)
        name: IDropTarget.OnDragEnter
        nameWithType: Control.IDropTarget.OnDragEnter
        qualifiedName: System.Windows.Forms.Control.System.Windows.Forms.IDropTarget.OnDragEnter
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragEnter(System.Windows.Forms.DragEventArgs)
        name: System.Windows.Forms.IDropTarget.OnDragEnter
        nameWithType: Control.System.Windows.Forms.IDropTarget.OnDragEnter
        qualifiedName: System.Windows.Forms.Control.System.Windows.Forms.IDropTarget.OnDragEnter
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragEnter(System.Windows.Forms.DragEventArgs)
  System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragOver(System.Windows.Forms.DragEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragOver(System.Windows.Forms.DragEventArgs)
        name: IDropTarget.OnDragOver
        nameWithType: Control.IDropTarget.OnDragOver
        qualifiedName: System.Windows.Forms.Control.System.Windows.Forms.IDropTarget.OnDragOver
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragOver(System.Windows.Forms.DragEventArgs)
        name: System.Windows.Forms.IDropTarget.OnDragOver
        nameWithType: Control.System.Windows.Forms.IDropTarget.OnDragOver
        qualifiedName: System.Windows.Forms.Control.System.Windows.Forms.IDropTarget.OnDragOver
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragOver(System.Windows.Forms.DragEventArgs)
  System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragLeave(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragLeave(System.EventArgs)
        name: IDropTarget.OnDragLeave
        nameWithType: Control.IDropTarget.OnDragLeave
        qualifiedName: System.Windows.Forms.Control.System.Windows.Forms.IDropTarget.OnDragLeave
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragLeave(System.EventArgs)
        name: System.Windows.Forms.IDropTarget.OnDragLeave
        nameWithType: Control.System.Windows.Forms.IDropTarget.OnDragLeave
        qualifiedName: System.Windows.Forms.Control.System.Windows.Forms.IDropTarget.OnDragLeave
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragLeave(System.EventArgs)
  System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragDrop(System.Windows.Forms.DragEventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragDrop(System.Windows.Forms.DragEventArgs)
        name: IDropTarget.OnDragDrop
        nameWithType: Control.IDropTarget.OnDragDrop
        qualifiedName: System.Windows.Forms.Control.System.Windows.Forms.IDropTarget.OnDragDrop
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragDrop(System.Windows.Forms.DragEventArgs)
        name: System.Windows.Forms.IDropTarget.OnDragDrop
        nameWithType: Control.System.Windows.Forms.IDropTarget.OnDragDrop
        qualifiedName: System.Windows.Forms.Control.System.Windows.Forms.IDropTarget.OnDragDrop
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Windows.Forms.DragEventArgs
        name: DragEventArgs
        nameWithType: DragEventArgs
        qualifiedName: System.Windows.Forms.DragEventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.System#Windows#Forms#IDropTarget#OnDragDrop(System.Windows.Forms.DragEventArgs)
  System.Windows.Forms.Control.OnImeModeChanged(System.EventArgs):
    name:
      CSharp:
      - id: System.Windows.Forms.Control.OnImeModeChanged(System.EventArgs)
        name: OnImeModeChanged
        nameWithType: Control.OnImeModeChanged
        qualifiedName: System.Windows.Forms.Control.OnImeModeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Control.OnImeModeChanged(System.EventArgs)
        name: OnImeModeChanged
        nameWithType: Control.OnImeModeChanged
        qualifiedName: System.Windows.Forms.Control.OnImeModeChanged
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.EventArgs
        name: EventArgs
        nameWithType: EventArgs
        qualifiedName: System.EventArgs
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: M:System.Windows.Forms.Control.OnImeModeChanged(System.EventArgs)
  System.Windows.Forms.Control.AccessibilityObject:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AccessibilityObject
        name: AccessibilityObject
        nameWithType: Control.AccessibilityObject
        qualifiedName: System.Windows.Forms.Control.AccessibilityObject
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.AccessibilityObject
        name: AccessibilityObject
        nameWithType: Control.AccessibilityObject
        qualifiedName: System.Windows.Forms.Control.AccessibilityObject
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.AccessibilityObject
  System.Windows.Forms.Control.AccessibleDefaultActionDescription:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AccessibleDefaultActionDescription
        name: AccessibleDefaultActionDescription
        nameWithType: Control.AccessibleDefaultActionDescription
        qualifiedName: System.Windows.Forms.Control.AccessibleDefaultActionDescription
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.AccessibleDefaultActionDescription
        name: AccessibleDefaultActionDescription
        nameWithType: Control.AccessibleDefaultActionDescription
        qualifiedName: System.Windows.Forms.Control.AccessibleDefaultActionDescription
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.AccessibleDefaultActionDescription
  System.Windows.Forms.Control.AccessibleDescription:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AccessibleDescription
        name: AccessibleDescription
        nameWithType: Control.AccessibleDescription
        qualifiedName: System.Windows.Forms.Control.AccessibleDescription
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.AccessibleDescription
        name: AccessibleDescription
        nameWithType: Control.AccessibleDescription
        qualifiedName: System.Windows.Forms.Control.AccessibleDescription
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.AccessibleDescription
  System.Windows.Forms.Control.AccessibleName:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AccessibleName
        name: AccessibleName
        nameWithType: Control.AccessibleName
        qualifiedName: System.Windows.Forms.Control.AccessibleName
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.AccessibleName
        name: AccessibleName
        nameWithType: Control.AccessibleName
        qualifiedName: System.Windows.Forms.Control.AccessibleName
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.AccessibleName
  System.Windows.Forms.Control.AccessibleRole:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AccessibleRole
        name: AccessibleRole
        nameWithType: Control.AccessibleRole
        qualifiedName: System.Windows.Forms.Control.AccessibleRole
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.AccessibleRole
        name: AccessibleRole
        nameWithType: Control.AccessibleRole
        qualifiedName: System.Windows.Forms.Control.AccessibleRole
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.AccessibleRole
  System.Windows.Forms.Control.AllowDrop:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AllowDrop
        name: AllowDrop
        nameWithType: Control.AllowDrop
        qualifiedName: System.Windows.Forms.Control.AllowDrop
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.AllowDrop
        name: AllowDrop
        nameWithType: Control.AllowDrop
        qualifiedName: System.Windows.Forms.Control.AllowDrop
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.AllowDrop
  System.Windows.Forms.Control.Anchor:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Anchor
        name: Anchor
        nameWithType: Control.Anchor
        qualifiedName: System.Windows.Forms.Control.Anchor
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Anchor
        name: Anchor
        nameWithType: Control.Anchor
        qualifiedName: System.Windows.Forms.Control.Anchor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Anchor
  System.Windows.Forms.Control.AutoScrollOffset:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.AutoScrollOffset
        name: AutoScrollOffset
        nameWithType: Control.AutoScrollOffset
        qualifiedName: System.Windows.Forms.Control.AutoScrollOffset
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.AutoScrollOffset
        name: AutoScrollOffset
        nameWithType: Control.AutoScrollOffset
        qualifiedName: System.Windows.Forms.Control.AutoScrollOffset
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.AutoScrollOffset
  System.Windows.Forms.Control.LayoutEngine:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.LayoutEngine
        name: LayoutEngine
        nameWithType: Control.LayoutEngine
        qualifiedName: System.Windows.Forms.Control.LayoutEngine
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.LayoutEngine
        name: LayoutEngine
        nameWithType: Control.LayoutEngine
        qualifiedName: System.Windows.Forms.Control.LayoutEngine
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.LayoutEngine
  System.Windows.Forms.Control.BackgroundImage:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BackgroundImage
        name: BackgroundImage
        nameWithType: Control.BackgroundImage
        qualifiedName: System.Windows.Forms.Control.BackgroundImage
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.BackgroundImage
        name: BackgroundImage
        nameWithType: Control.BackgroundImage
        qualifiedName: System.Windows.Forms.Control.BackgroundImage
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.BackgroundImage
  System.Windows.Forms.Control.BackgroundImageLayout:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BackgroundImageLayout
        name: BackgroundImageLayout
        nameWithType: Control.BackgroundImageLayout
        qualifiedName: System.Windows.Forms.Control.BackgroundImageLayout
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.BackgroundImageLayout
        name: BackgroundImageLayout
        nameWithType: Control.BackgroundImageLayout
        qualifiedName: System.Windows.Forms.Control.BackgroundImageLayout
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.BackgroundImageLayout
  System.Windows.Forms.Control.Bottom:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Bottom
        name: Bottom
        nameWithType: Control.Bottom
        qualifiedName: System.Windows.Forms.Control.Bottom
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Bottom
        name: Bottom
        nameWithType: Control.Bottom
        qualifiedName: System.Windows.Forms.Control.Bottom
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Bottom
  System.Windows.Forms.Control.Bounds:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Bounds
        name: Bounds
        nameWithType: Control.Bounds
        qualifiedName: System.Windows.Forms.Control.Bounds
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Bounds
        name: Bounds
        nameWithType: Control.Bounds
        qualifiedName: System.Windows.Forms.Control.Bounds
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Bounds
  System.Windows.Forms.Control.CanFocus:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CanFocus
        name: CanFocus
        nameWithType: Control.CanFocus
        qualifiedName: System.Windows.Forms.Control.CanFocus
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.CanFocus
        name: CanFocus
        nameWithType: Control.CanFocus
        qualifiedName: System.Windows.Forms.Control.CanFocus
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.CanFocus
  System.Windows.Forms.Control.CanRaiseEvents:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CanRaiseEvents
        name: CanRaiseEvents
        nameWithType: Control.CanRaiseEvents
        qualifiedName: System.Windows.Forms.Control.CanRaiseEvents
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.CanRaiseEvents
        name: CanRaiseEvents
        nameWithType: Control.CanRaiseEvents
        qualifiedName: System.Windows.Forms.Control.CanRaiseEvents
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.CanRaiseEvents
  System.Windows.Forms.Control.CanSelect:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CanSelect
        name: CanSelect
        nameWithType: Control.CanSelect
        qualifiedName: System.Windows.Forms.Control.CanSelect
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.CanSelect
        name: CanSelect
        nameWithType: Control.CanSelect
        qualifiedName: System.Windows.Forms.Control.CanSelect
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.CanSelect
  System.Windows.Forms.Control.Capture:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Capture
        name: Capture
        nameWithType: Control.Capture
        qualifiedName: System.Windows.Forms.Control.Capture
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Capture
        name: Capture
        nameWithType: Control.Capture
        qualifiedName: System.Windows.Forms.Control.Capture
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Capture
  System.Windows.Forms.Control.CausesValidation:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CausesValidation
        name: CausesValidation
        nameWithType: Control.CausesValidation
        qualifiedName: System.Windows.Forms.Control.CausesValidation
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.CausesValidation
        name: CausesValidation
        nameWithType: Control.CausesValidation
        qualifiedName: System.Windows.Forms.Control.CausesValidation
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.CausesValidation
  System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls
        name: CheckForIllegalCrossThreadCalls
        nameWithType: Control.CheckForIllegalCrossThreadCalls
        qualifiedName: System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls
        name: CheckForIllegalCrossThreadCalls
        nameWithType: Control.CheckForIllegalCrossThreadCalls
        qualifiedName: System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.CheckForIllegalCrossThreadCalls
  System.Windows.Forms.Control.ClientRectangle:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ClientRectangle
        name: ClientRectangle
        nameWithType: Control.ClientRectangle
        qualifiedName: System.Windows.Forms.Control.ClientRectangle
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ClientRectangle
        name: ClientRectangle
        nameWithType: Control.ClientRectangle
        qualifiedName: System.Windows.Forms.Control.ClientRectangle
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ClientRectangle
  System.Windows.Forms.Control.CompanyName:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CompanyName
        name: CompanyName
        nameWithType: Control.CompanyName
        qualifiedName: System.Windows.Forms.Control.CompanyName
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.CompanyName
        name: CompanyName
        nameWithType: Control.CompanyName
        qualifiedName: System.Windows.Forms.Control.CompanyName
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.CompanyName
  System.Windows.Forms.Control.ContainsFocus:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ContainsFocus
        name: ContainsFocus
        nameWithType: Control.ContainsFocus
        qualifiedName: System.Windows.Forms.Control.ContainsFocus
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ContainsFocus
        name: ContainsFocus
        nameWithType: Control.ContainsFocus
        qualifiedName: System.Windows.Forms.Control.ContainsFocus
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ContainsFocus
  System.Windows.Forms.Control.ContextMenu:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ContextMenu
        name: ContextMenu
        nameWithType: Control.ContextMenu
        qualifiedName: System.Windows.Forms.Control.ContextMenu
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ContextMenu
        name: ContextMenu
        nameWithType: Control.ContextMenu
        qualifiedName: System.Windows.Forms.Control.ContextMenu
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ContextMenu
  System.Windows.Forms.Control.ContextMenuStrip:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ContextMenuStrip
        name: ContextMenuStrip
        nameWithType: Control.ContextMenuStrip
        qualifiedName: System.Windows.Forms.Control.ContextMenuStrip
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ContextMenuStrip
        name: ContextMenuStrip
        nameWithType: Control.ContextMenuStrip
        qualifiedName: System.Windows.Forms.Control.ContextMenuStrip
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ContextMenuStrip
  System.Windows.Forms.Control.Controls:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Controls
        name: Controls
        nameWithType: Control.Controls
        qualifiedName: System.Windows.Forms.Control.Controls
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Controls
        name: Controls
        nameWithType: Control.Controls
        qualifiedName: System.Windows.Forms.Control.Controls
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Controls
  System.Windows.Forms.Control.Created:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Created
        name: Created
        nameWithType: Control.Created
        qualifiedName: System.Windows.Forms.Control.Created
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Created
        name: Created
        nameWithType: Control.Created
        qualifiedName: System.Windows.Forms.Control.Created
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Created
  System.Windows.Forms.Control.Cursor:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Cursor
        name: Cursor
        nameWithType: Control.Cursor
        qualifiedName: System.Windows.Forms.Control.Cursor
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Cursor
        name: Cursor
        nameWithType: Control.Cursor
        qualifiedName: System.Windows.Forms.Control.Cursor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Cursor
  System.Windows.Forms.Control.DataBindings:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DataBindings
        name: DataBindings
        nameWithType: Control.DataBindings
        qualifiedName: System.Windows.Forms.Control.DataBindings
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DataBindings
        name: DataBindings
        nameWithType: Control.DataBindings
        qualifiedName: System.Windows.Forms.Control.DataBindings
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DataBindings
  System.Windows.Forms.Control.DefaultBackColor:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DefaultBackColor
        name: DefaultBackColor
        nameWithType: Control.DefaultBackColor
        qualifiedName: System.Windows.Forms.Control.DefaultBackColor
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DefaultBackColor
        name: DefaultBackColor
        nameWithType: Control.DefaultBackColor
        qualifiedName: System.Windows.Forms.Control.DefaultBackColor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DefaultBackColor
  System.Windows.Forms.Control.DefaultCursor:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DefaultCursor
        name: DefaultCursor
        nameWithType: Control.DefaultCursor
        qualifiedName: System.Windows.Forms.Control.DefaultCursor
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DefaultCursor
        name: DefaultCursor
        nameWithType: Control.DefaultCursor
        qualifiedName: System.Windows.Forms.Control.DefaultCursor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DefaultCursor
  System.Windows.Forms.Control.DefaultFont:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DefaultFont
        name: DefaultFont
        nameWithType: Control.DefaultFont
        qualifiedName: System.Windows.Forms.Control.DefaultFont
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DefaultFont
        name: DefaultFont
        nameWithType: Control.DefaultFont
        qualifiedName: System.Windows.Forms.Control.DefaultFont
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DefaultFont
  System.Windows.Forms.Control.DefaultForeColor:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DefaultForeColor
        name: DefaultForeColor
        nameWithType: Control.DefaultForeColor
        qualifiedName: System.Windows.Forms.Control.DefaultForeColor
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DefaultForeColor
        name: DefaultForeColor
        nameWithType: Control.DefaultForeColor
        qualifiedName: System.Windows.Forms.Control.DefaultForeColor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DefaultForeColor
  System.Windows.Forms.Control.DefaultMargin:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DefaultMargin
        name: DefaultMargin
        nameWithType: Control.DefaultMargin
        qualifiedName: System.Windows.Forms.Control.DefaultMargin
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DefaultMargin
        name: DefaultMargin
        nameWithType: Control.DefaultMargin
        qualifiedName: System.Windows.Forms.Control.DefaultMargin
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DefaultMargin
  System.Windows.Forms.Control.DefaultMaximumSize:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DefaultMaximumSize
        name: DefaultMaximumSize
        nameWithType: Control.DefaultMaximumSize
        qualifiedName: System.Windows.Forms.Control.DefaultMaximumSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DefaultMaximumSize
        name: DefaultMaximumSize
        nameWithType: Control.DefaultMaximumSize
        qualifiedName: System.Windows.Forms.Control.DefaultMaximumSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DefaultMaximumSize
  System.Windows.Forms.Control.DefaultMinimumSize:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DefaultMinimumSize
        name: DefaultMinimumSize
        nameWithType: Control.DefaultMinimumSize
        qualifiedName: System.Windows.Forms.Control.DefaultMinimumSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DefaultMinimumSize
        name: DefaultMinimumSize
        nameWithType: Control.DefaultMinimumSize
        qualifiedName: System.Windows.Forms.Control.DefaultMinimumSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DefaultMinimumSize
  System.Windows.Forms.Control.DefaultPadding:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DefaultPadding
        name: DefaultPadding
        nameWithType: Control.DefaultPadding
        qualifiedName: System.Windows.Forms.Control.DefaultPadding
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DefaultPadding
        name: DefaultPadding
        nameWithType: Control.DefaultPadding
        qualifiedName: System.Windows.Forms.Control.DefaultPadding
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DefaultPadding
  System.Windows.Forms.Control.DeviceDpi:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DeviceDpi
        name: DeviceDpi
        nameWithType: Control.DeviceDpi
        qualifiedName: System.Windows.Forms.Control.DeviceDpi
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DeviceDpi
        name: DeviceDpi
        nameWithType: Control.DeviceDpi
        qualifiedName: System.Windows.Forms.Control.DeviceDpi
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DeviceDpi
  System.Windows.Forms.Control.IsDisposed:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.IsDisposed
        name: IsDisposed
        nameWithType: Control.IsDisposed
        qualifiedName: System.Windows.Forms.Control.IsDisposed
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.IsDisposed
        name: IsDisposed
        nameWithType: Control.IsDisposed
        qualifiedName: System.Windows.Forms.Control.IsDisposed
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.IsDisposed
  System.Windows.Forms.Control.Disposing:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Disposing
        name: Disposing
        nameWithType: Control.Disposing
        qualifiedName: System.Windows.Forms.Control.Disposing
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Disposing
        name: Disposing
        nameWithType: Control.Disposing
        qualifiedName: System.Windows.Forms.Control.Disposing
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Disposing
  System.Windows.Forms.Control.Dock:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Dock
        name: Dock
        nameWithType: Control.Dock
        qualifiedName: System.Windows.Forms.Control.Dock
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Dock
        name: Dock
        nameWithType: Control.Dock
        qualifiedName: System.Windows.Forms.Control.Dock
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Dock
  System.Windows.Forms.Control.DoubleBuffered:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DoubleBuffered
        name: DoubleBuffered
        nameWithType: Control.DoubleBuffered
        qualifiedName: System.Windows.Forms.Control.DoubleBuffered
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DoubleBuffered
        name: DoubleBuffered
        nameWithType: Control.DoubleBuffered
        qualifiedName: System.Windows.Forms.Control.DoubleBuffered
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.DoubleBuffered
  System.Windows.Forms.Control.Enabled:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Enabled
        name: Enabled
        nameWithType: Control.Enabled
        qualifiedName: System.Windows.Forms.Control.Enabled
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Enabled
        name: Enabled
        nameWithType: Control.Enabled
        qualifiedName: System.Windows.Forms.Control.Enabled
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Enabled
  System.Windows.Forms.Control.Focused:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Focused
        name: Focused
        nameWithType: Control.Focused
        qualifiedName: System.Windows.Forms.Control.Focused
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Focused
        name: Focused
        nameWithType: Control.Focused
        qualifiedName: System.Windows.Forms.Control.Focused
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Focused
  System.Windows.Forms.Control.Font:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Font
        name: Font
        nameWithType: Control.Font
        qualifiedName: System.Windows.Forms.Control.Font
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Font
        name: Font
        nameWithType: Control.Font
        qualifiedName: System.Windows.Forms.Control.Font
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Font
  System.Windows.Forms.Control.FontHeight:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.FontHeight
        name: FontHeight
        nameWithType: Control.FontHeight
        qualifiedName: System.Windows.Forms.Control.FontHeight
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.FontHeight
        name: FontHeight
        nameWithType: Control.FontHeight
        qualifiedName: System.Windows.Forms.Control.FontHeight
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.FontHeight
  System.Windows.Forms.Control.ForeColor:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ForeColor
        name: ForeColor
        nameWithType: Control.ForeColor
        qualifiedName: System.Windows.Forms.Control.ForeColor
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ForeColor
        name: ForeColor
        nameWithType: Control.ForeColor
        qualifiedName: System.Windows.Forms.Control.ForeColor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ForeColor
  System.Windows.Forms.Control.Handle:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Handle
        name: Handle
        nameWithType: Control.Handle
        qualifiedName: System.Windows.Forms.Control.Handle
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Handle
        name: Handle
        nameWithType: Control.Handle
        qualifiedName: System.Windows.Forms.Control.Handle
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Handle
  System.Windows.Forms.Control.HasChildren:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.HasChildren
        name: HasChildren
        nameWithType: Control.HasChildren
        qualifiedName: System.Windows.Forms.Control.HasChildren
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.HasChildren
        name: HasChildren
        nameWithType: Control.HasChildren
        qualifiedName: System.Windows.Forms.Control.HasChildren
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.HasChildren
  System.Windows.Forms.Control.Height:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Height
        name: Height
        nameWithType: Control.Height
        qualifiedName: System.Windows.Forms.Control.Height
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Height
        name: Height
        nameWithType: Control.Height
        qualifiedName: System.Windows.Forms.Control.Height
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Height
  System.Windows.Forms.Control.IsHandleCreated:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.IsHandleCreated
        name: IsHandleCreated
        nameWithType: Control.IsHandleCreated
        qualifiedName: System.Windows.Forms.Control.IsHandleCreated
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.IsHandleCreated
        name: IsHandleCreated
        nameWithType: Control.IsHandleCreated
        qualifiedName: System.Windows.Forms.Control.IsHandleCreated
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.IsHandleCreated
  System.Windows.Forms.Control.InvokeRequired:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.InvokeRequired
        name: InvokeRequired
        nameWithType: Control.InvokeRequired
        qualifiedName: System.Windows.Forms.Control.InvokeRequired
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.InvokeRequired
        name: InvokeRequired
        nameWithType: Control.InvokeRequired
        qualifiedName: System.Windows.Forms.Control.InvokeRequired
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.InvokeRequired
  System.Windows.Forms.Control.IsAccessible:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.IsAccessible
        name: IsAccessible
        nameWithType: Control.IsAccessible
        qualifiedName: System.Windows.Forms.Control.IsAccessible
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.IsAccessible
        name: IsAccessible
        nameWithType: Control.IsAccessible
        qualifiedName: System.Windows.Forms.Control.IsAccessible
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.IsAccessible
  System.Windows.Forms.Control.IsMirrored:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.IsMirrored
        name: IsMirrored
        nameWithType: Control.IsMirrored
        qualifiedName: System.Windows.Forms.Control.IsMirrored
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.IsMirrored
        name: IsMirrored
        nameWithType: Control.IsMirrored
        qualifiedName: System.Windows.Forms.Control.IsMirrored
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.IsMirrored
  System.Windows.Forms.Control.Left:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Left
        name: Left
        nameWithType: Control.Left
        qualifiedName: System.Windows.Forms.Control.Left
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Left
        name: Left
        nameWithType: Control.Left
        qualifiedName: System.Windows.Forms.Control.Left
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Left
  System.Windows.Forms.Control.Margin:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Margin
        name: Margin
        nameWithType: Control.Margin
        qualifiedName: System.Windows.Forms.Control.Margin
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Margin
        name: Margin
        nameWithType: Control.Margin
        qualifiedName: System.Windows.Forms.Control.Margin
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Margin
  System.Windows.Forms.Control.ModifierKeys:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ModifierKeys
        name: ModifierKeys
        nameWithType: Control.ModifierKeys
        qualifiedName: System.Windows.Forms.Control.ModifierKeys
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ModifierKeys
        name: ModifierKeys
        nameWithType: Control.ModifierKeys
        qualifiedName: System.Windows.Forms.Control.ModifierKeys
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ModifierKeys
  System.Windows.Forms.Control.MouseButtons:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseButtons
        name: MouseButtons
        nameWithType: Control.MouseButtons
        qualifiedName: System.Windows.Forms.Control.MouseButtons
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseButtons
        name: MouseButtons
        nameWithType: Control.MouseButtons
        qualifiedName: System.Windows.Forms.Control.MouseButtons
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.MouseButtons
  System.Windows.Forms.Control.MousePosition:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MousePosition
        name: MousePosition
        nameWithType: Control.MousePosition
        qualifiedName: System.Windows.Forms.Control.MousePosition
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MousePosition
        name: MousePosition
        nameWithType: Control.MousePosition
        qualifiedName: System.Windows.Forms.Control.MousePosition
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.MousePosition
  System.Windows.Forms.Control.Name:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Name
        name: Name
        nameWithType: Control.Name
        qualifiedName: System.Windows.Forms.Control.Name
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Name
        name: Name
        nameWithType: Control.Name
        qualifiedName: System.Windows.Forms.Control.Name
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Name
  System.Windows.Forms.Control.Parent:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Parent
        name: Parent
        nameWithType: Control.Parent
        qualifiedName: System.Windows.Forms.Control.Parent
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Parent
        name: Parent
        nameWithType: Control.Parent
        qualifiedName: System.Windows.Forms.Control.Parent
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Parent
  System.Windows.Forms.Control.ProductName:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ProductName
        name: ProductName
        nameWithType: Control.ProductName
        qualifiedName: System.Windows.Forms.Control.ProductName
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ProductName
        name: ProductName
        nameWithType: Control.ProductName
        qualifiedName: System.Windows.Forms.Control.ProductName
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ProductName
  System.Windows.Forms.Control.ProductVersion:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ProductVersion
        name: ProductVersion
        nameWithType: Control.ProductVersion
        qualifiedName: System.Windows.Forms.Control.ProductVersion
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ProductVersion
        name: ProductVersion
        nameWithType: Control.ProductVersion
        qualifiedName: System.Windows.Forms.Control.ProductVersion
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ProductVersion
  System.Windows.Forms.Control.RecreatingHandle:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RecreatingHandle
        name: RecreatingHandle
        nameWithType: Control.RecreatingHandle
        qualifiedName: System.Windows.Forms.Control.RecreatingHandle
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.RecreatingHandle
        name: RecreatingHandle
        nameWithType: Control.RecreatingHandle
        qualifiedName: System.Windows.Forms.Control.RecreatingHandle
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.RecreatingHandle
  System.Windows.Forms.Control.Region:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Region
        name: Region
        nameWithType: Control.Region
        qualifiedName: System.Windows.Forms.Control.Region
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Region
        name: Region
        nameWithType: Control.Region
        qualifiedName: System.Windows.Forms.Control.Region
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Region
  System.Windows.Forms.Control.RenderRightToLeft:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RenderRightToLeft
        name: RenderRightToLeft
        nameWithType: Control.RenderRightToLeft
        qualifiedName: System.Windows.Forms.Control.RenderRightToLeft
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.RenderRightToLeft
        name: RenderRightToLeft
        nameWithType: Control.RenderRightToLeft
        qualifiedName: System.Windows.Forms.Control.RenderRightToLeft
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.RenderRightToLeft
  System.Windows.Forms.Control.ResizeRedraw:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ResizeRedraw
        name: ResizeRedraw
        nameWithType: Control.ResizeRedraw
        qualifiedName: System.Windows.Forms.Control.ResizeRedraw
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ResizeRedraw
        name: ResizeRedraw
        nameWithType: Control.ResizeRedraw
        qualifiedName: System.Windows.Forms.Control.ResizeRedraw
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ResizeRedraw
  System.Windows.Forms.Control.Right:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Right
        name: Right
        nameWithType: Control.Right
        qualifiedName: System.Windows.Forms.Control.Right
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Right
        name: Right
        nameWithType: Control.Right
        qualifiedName: System.Windows.Forms.Control.Right
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Right
  System.Windows.Forms.Control.RightToLeft:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RightToLeft
        name: RightToLeft
        nameWithType: Control.RightToLeft
        qualifiedName: System.Windows.Forms.Control.RightToLeft
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.RightToLeft
        name: RightToLeft
        nameWithType: Control.RightToLeft
        qualifiedName: System.Windows.Forms.Control.RightToLeft
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.RightToLeft
  System.Windows.Forms.Control.ScaleChildren:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ScaleChildren
        name: ScaleChildren
        nameWithType: Control.ScaleChildren
        qualifiedName: System.Windows.Forms.Control.ScaleChildren
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ScaleChildren
        name: ScaleChildren
        nameWithType: Control.ScaleChildren
        qualifiedName: System.Windows.Forms.Control.ScaleChildren
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ScaleChildren
  System.Windows.Forms.Control.Site:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Site
        name: Site
        nameWithType: Control.Site
        qualifiedName: System.Windows.Forms.Control.Site
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Site
        name: Site
        nameWithType: Control.Site
        qualifiedName: System.Windows.Forms.Control.Site
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Site
  System.Windows.Forms.Control.TabIndex:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.TabIndex
        name: TabIndex
        nameWithType: Control.TabIndex
        qualifiedName: System.Windows.Forms.Control.TabIndex
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.TabIndex
        name: TabIndex
        nameWithType: Control.TabIndex
        qualifiedName: System.Windows.Forms.Control.TabIndex
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.TabIndex
  System.Windows.Forms.Control.TabStop:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.TabStop
        name: TabStop
        nameWithType: Control.TabStop
        qualifiedName: System.Windows.Forms.Control.TabStop
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.TabStop
        name: TabStop
        nameWithType: Control.TabStop
        qualifiedName: System.Windows.Forms.Control.TabStop
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.TabStop
  System.Windows.Forms.Control.Tag:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Tag
        name: Tag
        nameWithType: Control.Tag
        qualifiedName: System.Windows.Forms.Control.Tag
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Tag
        name: Tag
        nameWithType: Control.Tag
        qualifiedName: System.Windows.Forms.Control.Tag
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Tag
  System.Windows.Forms.Control.Top:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Top
        name: Top
        nameWithType: Control.Top
        qualifiedName: System.Windows.Forms.Control.Top
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Top
        name: Top
        nameWithType: Control.Top
        qualifiedName: System.Windows.Forms.Control.Top
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Top
  System.Windows.Forms.Control.TopLevelControl:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.TopLevelControl
        name: TopLevelControl
        nameWithType: Control.TopLevelControl
        qualifiedName: System.Windows.Forms.Control.TopLevelControl
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.TopLevelControl
        name: TopLevelControl
        nameWithType: Control.TopLevelControl
        qualifiedName: System.Windows.Forms.Control.TopLevelControl
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.TopLevelControl
  System.Windows.Forms.Control.ShowKeyboardCues:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ShowKeyboardCues
        name: ShowKeyboardCues
        nameWithType: Control.ShowKeyboardCues
        qualifiedName: System.Windows.Forms.Control.ShowKeyboardCues
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ShowKeyboardCues
        name: ShowKeyboardCues
        nameWithType: Control.ShowKeyboardCues
        qualifiedName: System.Windows.Forms.Control.ShowKeyboardCues
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ShowKeyboardCues
  System.Windows.Forms.Control.ShowFocusCues:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ShowFocusCues
        name: ShowFocusCues
        nameWithType: Control.ShowFocusCues
        qualifiedName: System.Windows.Forms.Control.ShowFocusCues
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ShowFocusCues
        name: ShowFocusCues
        nameWithType: Control.ShowFocusCues
        qualifiedName: System.Windows.Forms.Control.ShowFocusCues
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ShowFocusCues
  System.Windows.Forms.Control.UseWaitCursor:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.UseWaitCursor
        name: UseWaitCursor
        nameWithType: Control.UseWaitCursor
        qualifiedName: System.Windows.Forms.Control.UseWaitCursor
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.UseWaitCursor
        name: UseWaitCursor
        nameWithType: Control.UseWaitCursor
        qualifiedName: System.Windows.Forms.Control.UseWaitCursor
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.UseWaitCursor
  System.Windows.Forms.Control.Visible:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Visible
        name: Visible
        nameWithType: Control.Visible
        qualifiedName: System.Windows.Forms.Control.Visible
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Visible
        name: Visible
        nameWithType: Control.Visible
        qualifiedName: System.Windows.Forms.Control.Visible
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Visible
  System.Windows.Forms.Control.Width:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Width
        name: Width
        nameWithType: Control.Width
        qualifiedName: System.Windows.Forms.Control.Width
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Width
        name: Width
        nameWithType: Control.Width
        qualifiedName: System.Windows.Forms.Control.Width
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Width
  System.Windows.Forms.Control.PreferredSize:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PreferredSize
        name: PreferredSize
        nameWithType: Control.PreferredSize
        qualifiedName: System.Windows.Forms.Control.PreferredSize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.PreferredSize
        name: PreferredSize
        nameWithType: Control.PreferredSize
        qualifiedName: System.Windows.Forms.Control.PreferredSize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.PreferredSize
  System.Windows.Forms.Control.Padding:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Padding
        name: Padding
        nameWithType: Control.Padding
        qualifiedName: System.Windows.Forms.Control.Padding
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Padding
        name: Padding
        nameWithType: Control.Padding
        qualifiedName: System.Windows.Forms.Control.Padding
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.Padding
  System.Windows.Forms.Control.ImeMode:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ImeMode
        name: ImeMode
        nameWithType: Control.ImeMode
        qualifiedName: System.Windows.Forms.Control.ImeMode
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ImeMode
        name: ImeMode
        nameWithType: Control.ImeMode
        qualifiedName: System.Windows.Forms.Control.ImeMode
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ImeMode
  System.Windows.Forms.Control.ImeModeBase:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ImeModeBase
        name: ImeModeBase
        nameWithType: Control.ImeModeBase
        qualifiedName: System.Windows.Forms.Control.ImeModeBase
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ImeModeBase
        name: ImeModeBase
        nameWithType: Control.ImeModeBase
        qualifiedName: System.Windows.Forms.Control.ImeModeBase
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.ImeModeBase
  System.Windows.Forms.Control.PropagatingImeMode:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PropagatingImeMode
        name: PropagatingImeMode
        nameWithType: Control.PropagatingImeMode
        qualifiedName: System.Windows.Forms.Control.PropagatingImeMode
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.PropagatingImeMode
        name: PropagatingImeMode
        nameWithType: Control.PropagatingImeMode
        qualifiedName: System.Windows.Forms.Control.PropagatingImeMode
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: P:System.Windows.Forms.Control.PropagatingImeMode
  System.Windows.Forms.Control.BackColorChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BackColorChanged
        name: BackColorChanged
        nameWithType: Control.BackColorChanged
        qualifiedName: System.Windows.Forms.Control.BackColorChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.BackColorChanged
        name: BackColorChanged
        nameWithType: Control.BackColorChanged
        qualifiedName: System.Windows.Forms.Control.BackColorChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.BackColorChanged
  System.Windows.Forms.Control.BackgroundImageChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BackgroundImageChanged
        name: BackgroundImageChanged
        nameWithType: Control.BackgroundImageChanged
        qualifiedName: System.Windows.Forms.Control.BackgroundImageChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.BackgroundImageChanged
        name: BackgroundImageChanged
        nameWithType: Control.BackgroundImageChanged
        qualifiedName: System.Windows.Forms.Control.BackgroundImageChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.BackgroundImageChanged
  System.Windows.Forms.Control.BackgroundImageLayoutChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BackgroundImageLayoutChanged
        name: BackgroundImageLayoutChanged
        nameWithType: Control.BackgroundImageLayoutChanged
        qualifiedName: System.Windows.Forms.Control.BackgroundImageLayoutChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.BackgroundImageLayoutChanged
        name: BackgroundImageLayoutChanged
        nameWithType: Control.BackgroundImageLayoutChanged
        qualifiedName: System.Windows.Forms.Control.BackgroundImageLayoutChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.BackgroundImageLayoutChanged
  System.Windows.Forms.Control.BindingContextChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.BindingContextChanged
        name: BindingContextChanged
        nameWithType: Control.BindingContextChanged
        qualifiedName: System.Windows.Forms.Control.BindingContextChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.BindingContextChanged
        name: BindingContextChanged
        nameWithType: Control.BindingContextChanged
        qualifiedName: System.Windows.Forms.Control.BindingContextChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.BindingContextChanged
  System.Windows.Forms.Control.CausesValidationChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CausesValidationChanged
        name: CausesValidationChanged
        nameWithType: Control.CausesValidationChanged
        qualifiedName: System.Windows.Forms.Control.CausesValidationChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.CausesValidationChanged
        name: CausesValidationChanged
        nameWithType: Control.CausesValidationChanged
        qualifiedName: System.Windows.Forms.Control.CausesValidationChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.CausesValidationChanged
  System.Windows.Forms.Control.ClientSizeChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ClientSizeChanged
        name: ClientSizeChanged
        nameWithType: Control.ClientSizeChanged
        qualifiedName: System.Windows.Forms.Control.ClientSizeChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ClientSizeChanged
        name: ClientSizeChanged
        nameWithType: Control.ClientSizeChanged
        qualifiedName: System.Windows.Forms.Control.ClientSizeChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ClientSizeChanged
  System.Windows.Forms.Control.ContextMenuChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ContextMenuChanged
        name: ContextMenuChanged
        nameWithType: Control.ContextMenuChanged
        qualifiedName: System.Windows.Forms.Control.ContextMenuChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ContextMenuChanged
        name: ContextMenuChanged
        nameWithType: Control.ContextMenuChanged
        qualifiedName: System.Windows.Forms.Control.ContextMenuChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ContextMenuChanged
  System.Windows.Forms.Control.ContextMenuStripChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ContextMenuStripChanged
        name: ContextMenuStripChanged
        nameWithType: Control.ContextMenuStripChanged
        qualifiedName: System.Windows.Forms.Control.ContextMenuStripChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ContextMenuStripChanged
        name: ContextMenuStripChanged
        nameWithType: Control.ContextMenuStripChanged
        qualifiedName: System.Windows.Forms.Control.ContextMenuStripChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ContextMenuStripChanged
  System.Windows.Forms.Control.CursorChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.CursorChanged
        name: CursorChanged
        nameWithType: Control.CursorChanged
        qualifiedName: System.Windows.Forms.Control.CursorChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.CursorChanged
        name: CursorChanged
        nameWithType: Control.CursorChanged
        qualifiedName: System.Windows.Forms.Control.CursorChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.CursorChanged
  System.Windows.Forms.Control.DockChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DockChanged
        name: DockChanged
        nameWithType: Control.DockChanged
        qualifiedName: System.Windows.Forms.Control.DockChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DockChanged
        name: DockChanged
        nameWithType: Control.DockChanged
        qualifiedName: System.Windows.Forms.Control.DockChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.DockChanged
  System.Windows.Forms.Control.EnabledChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.EnabledChanged
        name: EnabledChanged
        nameWithType: Control.EnabledChanged
        qualifiedName: System.Windows.Forms.Control.EnabledChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.EnabledChanged
        name: EnabledChanged
        nameWithType: Control.EnabledChanged
        qualifiedName: System.Windows.Forms.Control.EnabledChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.EnabledChanged
  System.Windows.Forms.Control.FontChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.FontChanged
        name: FontChanged
        nameWithType: Control.FontChanged
        qualifiedName: System.Windows.Forms.Control.FontChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.FontChanged
        name: FontChanged
        nameWithType: Control.FontChanged
        qualifiedName: System.Windows.Forms.Control.FontChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.FontChanged
  System.Windows.Forms.Control.ForeColorChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ForeColorChanged
        name: ForeColorChanged
        nameWithType: Control.ForeColorChanged
        qualifiedName: System.Windows.Forms.Control.ForeColorChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ForeColorChanged
        name: ForeColorChanged
        nameWithType: Control.ForeColorChanged
        qualifiedName: System.Windows.Forms.Control.ForeColorChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ForeColorChanged
  System.Windows.Forms.Control.LocationChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.LocationChanged
        name: LocationChanged
        nameWithType: Control.LocationChanged
        qualifiedName: System.Windows.Forms.Control.LocationChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.LocationChanged
        name: LocationChanged
        nameWithType: Control.LocationChanged
        qualifiedName: System.Windows.Forms.Control.LocationChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.LocationChanged
  System.Windows.Forms.Control.MarginChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MarginChanged
        name: MarginChanged
        nameWithType: Control.MarginChanged
        qualifiedName: System.Windows.Forms.Control.MarginChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MarginChanged
        name: MarginChanged
        nameWithType: Control.MarginChanged
        qualifiedName: System.Windows.Forms.Control.MarginChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MarginChanged
  System.Windows.Forms.Control.RegionChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RegionChanged
        name: RegionChanged
        nameWithType: Control.RegionChanged
        qualifiedName: System.Windows.Forms.Control.RegionChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.RegionChanged
        name: RegionChanged
        nameWithType: Control.RegionChanged
        qualifiedName: System.Windows.Forms.Control.RegionChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.RegionChanged
  System.Windows.Forms.Control.RightToLeftChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.RightToLeftChanged
        name: RightToLeftChanged
        nameWithType: Control.RightToLeftChanged
        qualifiedName: System.Windows.Forms.Control.RightToLeftChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.RightToLeftChanged
        name: RightToLeftChanged
        nameWithType: Control.RightToLeftChanged
        qualifiedName: System.Windows.Forms.Control.RightToLeftChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.RightToLeftChanged
  System.Windows.Forms.Control.SizeChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SizeChanged
        name: SizeChanged
        nameWithType: Control.SizeChanged
        qualifiedName: System.Windows.Forms.Control.SizeChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.SizeChanged
        name: SizeChanged
        nameWithType: Control.SizeChanged
        qualifiedName: System.Windows.Forms.Control.SizeChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.SizeChanged
  System.Windows.Forms.Control.TabIndexChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.TabIndexChanged
        name: TabIndexChanged
        nameWithType: Control.TabIndexChanged
        qualifiedName: System.Windows.Forms.Control.TabIndexChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.TabIndexChanged
        name: TabIndexChanged
        nameWithType: Control.TabIndexChanged
        qualifiedName: System.Windows.Forms.Control.TabIndexChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.TabIndexChanged
  System.Windows.Forms.Control.TabStopChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.TabStopChanged
        name: TabStopChanged
        nameWithType: Control.TabStopChanged
        qualifiedName: System.Windows.Forms.Control.TabStopChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.TabStopChanged
        name: TabStopChanged
        nameWithType: Control.TabStopChanged
        qualifiedName: System.Windows.Forms.Control.TabStopChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.TabStopChanged
  System.Windows.Forms.Control.TextChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.TextChanged
        name: TextChanged
        nameWithType: Control.TextChanged
        qualifiedName: System.Windows.Forms.Control.TextChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.TextChanged
        name: TextChanged
        nameWithType: Control.TextChanged
        qualifiedName: System.Windows.Forms.Control.TextChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.TextChanged
  System.Windows.Forms.Control.VisibleChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.VisibleChanged
        name: VisibleChanged
        nameWithType: Control.VisibleChanged
        qualifiedName: System.Windows.Forms.Control.VisibleChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.VisibleChanged
        name: VisibleChanged
        nameWithType: Control.VisibleChanged
        qualifiedName: System.Windows.Forms.Control.VisibleChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.VisibleChanged
  System.Windows.Forms.Control.Click:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Click
        name: Click
        nameWithType: Control.Click
        qualifiedName: System.Windows.Forms.Control.Click
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Click
        name: Click
        nameWithType: Control.Click
        qualifiedName: System.Windows.Forms.Control.Click
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Click
  System.Windows.Forms.Control.ControlAdded:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ControlAdded
        name: ControlAdded
        nameWithType: Control.ControlAdded
        qualifiedName: System.Windows.Forms.Control.ControlAdded
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ControlAdded
        name: ControlAdded
        nameWithType: Control.ControlAdded
        qualifiedName: System.Windows.Forms.Control.ControlAdded
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ControlAdded
  System.Windows.Forms.Control.ControlRemoved:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ControlRemoved
        name: ControlRemoved
        nameWithType: Control.ControlRemoved
        qualifiedName: System.Windows.Forms.Control.ControlRemoved
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ControlRemoved
        name: ControlRemoved
        nameWithType: Control.ControlRemoved
        qualifiedName: System.Windows.Forms.Control.ControlRemoved
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ControlRemoved
  System.Windows.Forms.Control.DragDrop:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DragDrop
        name: DragDrop
        nameWithType: Control.DragDrop
        qualifiedName: System.Windows.Forms.Control.DragDrop
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DragDrop
        name: DragDrop
        nameWithType: Control.DragDrop
        qualifiedName: System.Windows.Forms.Control.DragDrop
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.DragDrop
  System.Windows.Forms.Control.DragEnter:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DragEnter
        name: DragEnter
        nameWithType: Control.DragEnter
        qualifiedName: System.Windows.Forms.Control.DragEnter
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DragEnter
        name: DragEnter
        nameWithType: Control.DragEnter
        qualifiedName: System.Windows.Forms.Control.DragEnter
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.DragEnter
  System.Windows.Forms.Control.DragOver:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DragOver
        name: DragOver
        nameWithType: Control.DragOver
        qualifiedName: System.Windows.Forms.Control.DragOver
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DragOver
        name: DragOver
        nameWithType: Control.DragOver
        qualifiedName: System.Windows.Forms.Control.DragOver
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.DragOver
  System.Windows.Forms.Control.DragLeave:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DragLeave
        name: DragLeave
        nameWithType: Control.DragLeave
        qualifiedName: System.Windows.Forms.Control.DragLeave
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DragLeave
        name: DragLeave
        nameWithType: Control.DragLeave
        qualifiedName: System.Windows.Forms.Control.DragLeave
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.DragLeave
  System.Windows.Forms.Control.GiveFeedback:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GiveFeedback
        name: GiveFeedback
        nameWithType: Control.GiveFeedback
        qualifiedName: System.Windows.Forms.Control.GiveFeedback
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.GiveFeedback
        name: GiveFeedback
        nameWithType: Control.GiveFeedback
        qualifiedName: System.Windows.Forms.Control.GiveFeedback
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.GiveFeedback
  System.Windows.Forms.Control.HandleCreated:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.HandleCreated
        name: HandleCreated
        nameWithType: Control.HandleCreated
        qualifiedName: System.Windows.Forms.Control.HandleCreated
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.HandleCreated
        name: HandleCreated
        nameWithType: Control.HandleCreated
        qualifiedName: System.Windows.Forms.Control.HandleCreated
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.HandleCreated
  System.Windows.Forms.Control.HandleDestroyed:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.HandleDestroyed
        name: HandleDestroyed
        nameWithType: Control.HandleDestroyed
        qualifiedName: System.Windows.Forms.Control.HandleDestroyed
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.HandleDestroyed
        name: HandleDestroyed
        nameWithType: Control.HandleDestroyed
        qualifiedName: System.Windows.Forms.Control.HandleDestroyed
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.HandleDestroyed
  System.Windows.Forms.Control.HelpRequested:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.HelpRequested
        name: HelpRequested
        nameWithType: Control.HelpRequested
        qualifiedName: System.Windows.Forms.Control.HelpRequested
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.HelpRequested
        name: HelpRequested
        nameWithType: Control.HelpRequested
        qualifiedName: System.Windows.Forms.Control.HelpRequested
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.HelpRequested
  System.Windows.Forms.Control.Invalidated:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Invalidated
        name: Invalidated
        nameWithType: Control.Invalidated
        qualifiedName: System.Windows.Forms.Control.Invalidated
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Invalidated
        name: Invalidated
        nameWithType: Control.Invalidated
        qualifiedName: System.Windows.Forms.Control.Invalidated
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Invalidated
  System.Windows.Forms.Control.PaddingChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PaddingChanged
        name: PaddingChanged
        nameWithType: Control.PaddingChanged
        qualifiedName: System.Windows.Forms.Control.PaddingChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.PaddingChanged
        name: PaddingChanged
        nameWithType: Control.PaddingChanged
        qualifiedName: System.Windows.Forms.Control.PaddingChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.PaddingChanged
  System.Windows.Forms.Control.Paint:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Paint
        name: Paint
        nameWithType: Control.Paint
        qualifiedName: System.Windows.Forms.Control.Paint
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Paint
        name: Paint
        nameWithType: Control.Paint
        qualifiedName: System.Windows.Forms.Control.Paint
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Paint
  System.Windows.Forms.Control.QueryContinueDrag:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.QueryContinueDrag
        name: QueryContinueDrag
        nameWithType: Control.QueryContinueDrag
        qualifiedName: System.Windows.Forms.Control.QueryContinueDrag
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.QueryContinueDrag
        name: QueryContinueDrag
        nameWithType: Control.QueryContinueDrag
        qualifiedName: System.Windows.Forms.Control.QueryContinueDrag
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.QueryContinueDrag
  System.Windows.Forms.Control.QueryAccessibilityHelp:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.QueryAccessibilityHelp
        name: QueryAccessibilityHelp
        nameWithType: Control.QueryAccessibilityHelp
        qualifiedName: System.Windows.Forms.Control.QueryAccessibilityHelp
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.QueryAccessibilityHelp
        name: QueryAccessibilityHelp
        nameWithType: Control.QueryAccessibilityHelp
        qualifiedName: System.Windows.Forms.Control.QueryAccessibilityHelp
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.QueryAccessibilityHelp
  System.Windows.Forms.Control.DoubleClick:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DoubleClick
        name: DoubleClick
        nameWithType: Control.DoubleClick
        qualifiedName: System.Windows.Forms.Control.DoubleClick
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DoubleClick
        name: DoubleClick
        nameWithType: Control.DoubleClick
        qualifiedName: System.Windows.Forms.Control.DoubleClick
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.DoubleClick
  System.Windows.Forms.Control.Enter:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Enter
        name: Enter
        nameWithType: Control.Enter
        qualifiedName: System.Windows.Forms.Control.Enter
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Enter
        name: Enter
        nameWithType: Control.Enter
        qualifiedName: System.Windows.Forms.Control.Enter
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Enter
  System.Windows.Forms.Control.GotFocus:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.GotFocus
        name: GotFocus
        nameWithType: Control.GotFocus
        qualifiedName: System.Windows.Forms.Control.GotFocus
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.GotFocus
        name: GotFocus
        nameWithType: Control.GotFocus
        qualifiedName: System.Windows.Forms.Control.GotFocus
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.GotFocus
  System.Windows.Forms.Control.KeyDown:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.KeyDown
        name: KeyDown
        nameWithType: Control.KeyDown
        qualifiedName: System.Windows.Forms.Control.KeyDown
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.KeyDown
        name: KeyDown
        nameWithType: Control.KeyDown
        qualifiedName: System.Windows.Forms.Control.KeyDown
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.KeyDown
  System.Windows.Forms.Control.KeyPress:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.KeyPress
        name: KeyPress
        nameWithType: Control.KeyPress
        qualifiedName: System.Windows.Forms.Control.KeyPress
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.KeyPress
        name: KeyPress
        nameWithType: Control.KeyPress
        qualifiedName: System.Windows.Forms.Control.KeyPress
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.KeyPress
  System.Windows.Forms.Control.KeyUp:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.KeyUp
        name: KeyUp
        nameWithType: Control.KeyUp
        qualifiedName: System.Windows.Forms.Control.KeyUp
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.KeyUp
        name: KeyUp
        nameWithType: Control.KeyUp
        qualifiedName: System.Windows.Forms.Control.KeyUp
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.KeyUp
  System.Windows.Forms.Control.Layout:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Layout
        name: Layout
        nameWithType: Control.Layout
        qualifiedName: System.Windows.Forms.Control.Layout
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Layout
        name: Layout
        nameWithType: Control.Layout
        qualifiedName: System.Windows.Forms.Control.Layout
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Layout
  System.Windows.Forms.Control.Leave:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Leave
        name: Leave
        nameWithType: Control.Leave
        qualifiedName: System.Windows.Forms.Control.Leave
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Leave
        name: Leave
        nameWithType: Control.Leave
        qualifiedName: System.Windows.Forms.Control.Leave
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Leave
  System.Windows.Forms.Control.LostFocus:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.LostFocus
        name: LostFocus
        nameWithType: Control.LostFocus
        qualifiedName: System.Windows.Forms.Control.LostFocus
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.LostFocus
        name: LostFocus
        nameWithType: Control.LostFocus
        qualifiedName: System.Windows.Forms.Control.LostFocus
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.LostFocus
  System.Windows.Forms.Control.MouseClick:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseClick
        name: MouseClick
        nameWithType: Control.MouseClick
        qualifiedName: System.Windows.Forms.Control.MouseClick
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseClick
        name: MouseClick
        nameWithType: Control.MouseClick
        qualifiedName: System.Windows.Forms.Control.MouseClick
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseClick
  System.Windows.Forms.Control.MouseDoubleClick:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseDoubleClick
        name: MouseDoubleClick
        nameWithType: Control.MouseDoubleClick
        qualifiedName: System.Windows.Forms.Control.MouseDoubleClick
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseDoubleClick
        name: MouseDoubleClick
        nameWithType: Control.MouseDoubleClick
        qualifiedName: System.Windows.Forms.Control.MouseDoubleClick
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseDoubleClick
  System.Windows.Forms.Control.MouseCaptureChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseCaptureChanged
        name: MouseCaptureChanged
        nameWithType: Control.MouseCaptureChanged
        qualifiedName: System.Windows.Forms.Control.MouseCaptureChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseCaptureChanged
        name: MouseCaptureChanged
        nameWithType: Control.MouseCaptureChanged
        qualifiedName: System.Windows.Forms.Control.MouseCaptureChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseCaptureChanged
  System.Windows.Forms.Control.MouseDown:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseDown
        name: MouseDown
        nameWithType: Control.MouseDown
        qualifiedName: System.Windows.Forms.Control.MouseDown
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseDown
        name: MouseDown
        nameWithType: Control.MouseDown
        qualifiedName: System.Windows.Forms.Control.MouseDown
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseDown
  System.Windows.Forms.Control.MouseEnter:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseEnter
        name: MouseEnter
        nameWithType: Control.MouseEnter
        qualifiedName: System.Windows.Forms.Control.MouseEnter
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseEnter
        name: MouseEnter
        nameWithType: Control.MouseEnter
        qualifiedName: System.Windows.Forms.Control.MouseEnter
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseEnter
  System.Windows.Forms.Control.MouseLeave:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseLeave
        name: MouseLeave
        nameWithType: Control.MouseLeave
        qualifiedName: System.Windows.Forms.Control.MouseLeave
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseLeave
        name: MouseLeave
        nameWithType: Control.MouseLeave
        qualifiedName: System.Windows.Forms.Control.MouseLeave
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseLeave
  System.Windows.Forms.Control.DpiChangedBeforeParent:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DpiChangedBeforeParent
        name: DpiChangedBeforeParent
        nameWithType: Control.DpiChangedBeforeParent
        qualifiedName: System.Windows.Forms.Control.DpiChangedBeforeParent
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DpiChangedBeforeParent
        name: DpiChangedBeforeParent
        nameWithType: Control.DpiChangedBeforeParent
        qualifiedName: System.Windows.Forms.Control.DpiChangedBeforeParent
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.DpiChangedBeforeParent
  System.Windows.Forms.Control.DpiChangedAfterParent:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.DpiChangedAfterParent
        name: DpiChangedAfterParent
        nameWithType: Control.DpiChangedAfterParent
        qualifiedName: System.Windows.Forms.Control.DpiChangedAfterParent
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.DpiChangedAfterParent
        name: DpiChangedAfterParent
        nameWithType: Control.DpiChangedAfterParent
        qualifiedName: System.Windows.Forms.Control.DpiChangedAfterParent
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.DpiChangedAfterParent
  System.Windows.Forms.Control.MouseHover:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseHover
        name: MouseHover
        nameWithType: Control.MouseHover
        qualifiedName: System.Windows.Forms.Control.MouseHover
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseHover
        name: MouseHover
        nameWithType: Control.MouseHover
        qualifiedName: System.Windows.Forms.Control.MouseHover
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseHover
  System.Windows.Forms.Control.MouseMove:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseMove
        name: MouseMove
        nameWithType: Control.MouseMove
        qualifiedName: System.Windows.Forms.Control.MouseMove
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseMove
        name: MouseMove
        nameWithType: Control.MouseMove
        qualifiedName: System.Windows.Forms.Control.MouseMove
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseMove
  System.Windows.Forms.Control.MouseUp:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseUp
        name: MouseUp
        nameWithType: Control.MouseUp
        qualifiedName: System.Windows.Forms.Control.MouseUp
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseUp
        name: MouseUp
        nameWithType: Control.MouseUp
        qualifiedName: System.Windows.Forms.Control.MouseUp
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseUp
  System.Windows.Forms.Control.MouseWheel:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.MouseWheel
        name: MouseWheel
        nameWithType: Control.MouseWheel
        qualifiedName: System.Windows.Forms.Control.MouseWheel
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.MouseWheel
        name: MouseWheel
        nameWithType: Control.MouseWheel
        qualifiedName: System.Windows.Forms.Control.MouseWheel
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.MouseWheel
  System.Windows.Forms.Control.Move:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Move
        name: Move
        nameWithType: Control.Move
        qualifiedName: System.Windows.Forms.Control.Move
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Move
        name: Move
        nameWithType: Control.Move
        qualifiedName: System.Windows.Forms.Control.Move
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Move
  System.Windows.Forms.Control.PreviewKeyDown:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.PreviewKeyDown
        name: PreviewKeyDown
        nameWithType: Control.PreviewKeyDown
        qualifiedName: System.Windows.Forms.Control.PreviewKeyDown
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.PreviewKeyDown
        name: PreviewKeyDown
        nameWithType: Control.PreviewKeyDown
        qualifiedName: System.Windows.Forms.Control.PreviewKeyDown
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.PreviewKeyDown
  System.Windows.Forms.Control.Resize:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Resize
        name: Resize
        nameWithType: Control.Resize
        qualifiedName: System.Windows.Forms.Control.Resize
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Resize
        name: Resize
        nameWithType: Control.Resize
        qualifiedName: System.Windows.Forms.Control.Resize
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Resize
  System.Windows.Forms.Control.ChangeUICues:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ChangeUICues
        name: ChangeUICues
        nameWithType: Control.ChangeUICues
        qualifiedName: System.Windows.Forms.Control.ChangeUICues
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ChangeUICues
        name: ChangeUICues
        nameWithType: Control.ChangeUICues
        qualifiedName: System.Windows.Forms.Control.ChangeUICues
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ChangeUICues
  System.Windows.Forms.Control.StyleChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.StyleChanged
        name: StyleChanged
        nameWithType: Control.StyleChanged
        qualifiedName: System.Windows.Forms.Control.StyleChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.StyleChanged
        name: StyleChanged
        nameWithType: Control.StyleChanged
        qualifiedName: System.Windows.Forms.Control.StyleChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.StyleChanged
  System.Windows.Forms.Control.SystemColorsChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.SystemColorsChanged
        name: SystemColorsChanged
        nameWithType: Control.SystemColorsChanged
        qualifiedName: System.Windows.Forms.Control.SystemColorsChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.SystemColorsChanged
        name: SystemColorsChanged
        nameWithType: Control.SystemColorsChanged
        qualifiedName: System.Windows.Forms.Control.SystemColorsChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.SystemColorsChanged
  System.Windows.Forms.Control.Validating:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Validating
        name: Validating
        nameWithType: Control.Validating
        qualifiedName: System.Windows.Forms.Control.Validating
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Validating
        name: Validating
        nameWithType: Control.Validating
        qualifiedName: System.Windows.Forms.Control.Validating
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Validating
  System.Windows.Forms.Control.Validated:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.Validated
        name: Validated
        nameWithType: Control.Validated
        qualifiedName: System.Windows.Forms.Control.Validated
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.Validated
        name: Validated
        nameWithType: Control.Validated
        qualifiedName: System.Windows.Forms.Control.Validated
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.Validated
  System.Windows.Forms.Control.ParentChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ParentChanged
        name: ParentChanged
        nameWithType: Control.ParentChanged
        qualifiedName: System.Windows.Forms.Control.ParentChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ParentChanged
        name: ParentChanged
        nameWithType: Control.ParentChanged
        qualifiedName: System.Windows.Forms.Control.ParentChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ParentChanged
  System.Windows.Forms.Control.ImeModeChanged:
    name:
      CSharp:
      - id: System.Windows.Forms.Control.ImeModeChanged
        name: ImeModeChanged
        nameWithType: Control.ImeModeChanged
        qualifiedName: System.Windows.Forms.Control.ImeModeChanged
        isExternal: true
      VB:
      - id: System.Windows.Forms.Control.ImeModeChanged
        name: ImeModeChanged
        nameWithType: Control.ImeModeChanged
        qualifiedName: System.Windows.Forms.Control.ImeModeChanged
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.Control
    commentId: E:System.Windows.Forms.Control.ImeModeChanged
  System.ComponentModel:
    name:
      CSharp:
      - name: System.ComponentModel
        nameWithType: System.ComponentModel
        qualifiedName: System.ComponentModel
        isExternal: true
      VB:
      - name: System.ComponentModel
        nameWithType: System.ComponentModel
        qualifiedName: System.ComponentModel
    isDefinition: true
    commentId: N:System.ComponentModel
  System.ComponentModel.Component:
    name:
      CSharp:
      - id: System.ComponentModel.Component
        name: Component
        nameWithType: Component
        qualifiedName: System.ComponentModel.Component
        isExternal: true
      VB:
      - id: System.ComponentModel.Component
        name: Component
        nameWithType: Component
        qualifiedName: System.ComponentModel.Component
        isExternal: true
    isDefinition: true
    parent: System.ComponentModel
    commentId: T:System.ComponentModel.Component
  System.ComponentModel.Component.Dispose:
    name:
      CSharp:
      - id: System.ComponentModel.Component.Dispose
        name: Dispose
        nameWithType: Component.Dispose
        qualifiedName: System.ComponentModel.Component.Dispose
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.ComponentModel.Component.Dispose
        name: Dispose
        nameWithType: Component.Dispose
        qualifiedName: System.ComponentModel.Component.Dispose
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.ComponentModel.Component
    commentId: M:System.ComponentModel.Component.Dispose
  System.ComponentModel.Component.GetService(System.Type):
    name:
      CSharp:
      - id: System.ComponentModel.Component.GetService(System.Type)
        name: GetService
        nameWithType: Component.GetService
        qualifiedName: System.ComponentModel.Component.GetService
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Type
        name: Type
        nameWithType: Type
        qualifiedName: System.Type
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.ComponentModel.Component.GetService(System.Type)
        name: GetService
        nameWithType: Component.GetService
        qualifiedName: System.ComponentModel.Component.GetService
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Type
        name: Type
        nameWithType: Type
        qualifiedName: System.Type
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.ComponentModel.Component
    commentId: M:System.ComponentModel.Component.GetService(System.Type)
  System.ComponentModel.Component.Events:
    name:
      CSharp:
      - id: System.ComponentModel.Component.Events
        name: Events
        nameWithType: Component.Events
        qualifiedName: System.ComponentModel.Component.Events
        isExternal: true
      VB:
      - id: System.ComponentModel.Component.Events
        name: Events
        nameWithType: Component.Events
        qualifiedName: System.ComponentModel.Component.Events
        isExternal: true
    isDefinition: true
    parent: System.ComponentModel.Component
    commentId: P:System.ComponentModel.Component.Events
  System.ComponentModel.Component.Container:
    name:
      CSharp:
      - id: System.ComponentModel.Component.Container
        name: Container
        nameWithType: Component.Container
        qualifiedName: System.ComponentModel.Component.Container
        isExternal: true
      VB:
      - id: System.ComponentModel.Component.Container
        name: Container
        nameWithType: Component.Container
        qualifiedName: System.ComponentModel.Component.Container
        isExternal: true
    isDefinition: true
    parent: System.ComponentModel.Component
    commentId: P:System.ComponentModel.Component.Container
  System.ComponentModel.Component.DesignMode:
    name:
      CSharp:
      - id: System.ComponentModel.Component.DesignMode
        name: DesignMode
        nameWithType: Component.DesignMode
        qualifiedName: System.ComponentModel.Component.DesignMode
        isExternal: true
      VB:
      - id: System.ComponentModel.Component.DesignMode
        name: DesignMode
        nameWithType: Component.DesignMode
        qualifiedName: System.ComponentModel.Component.DesignMode
        isExternal: true
    isDefinition: true
    parent: System.ComponentModel.Component
    commentId: P:System.ComponentModel.Component.DesignMode
  System.ComponentModel.Component.Disposed:
    name:
      CSharp:
      - id: System.ComponentModel.Component.Disposed
        name: Disposed
        nameWithType: Component.Disposed
        qualifiedName: System.ComponentModel.Component.Disposed
        isExternal: true
      VB:
      - id: System.ComponentModel.Component.Disposed
        name: Disposed
        nameWithType: Component.Disposed
        qualifiedName: System.ComponentModel.Component.Disposed
        isExternal: true
    isDefinition: true
    parent: System.ComponentModel.Component
    commentId: E:System.ComponentModel.Component.Disposed
  System:
    name:
      CSharp:
      - name: System
        nameWithType: System
        qualifiedName: System
        isExternal: true
      VB:
      - name: System
        nameWithType: System
        qualifiedName: System
    isDefinition: true
    commentId: N:System
  System.MarshalByRefObject:
    name:
      CSharp:
      - id: System.MarshalByRefObject
        name: MarshalByRefObject
        nameWithType: MarshalByRefObject
        qualifiedName: System.MarshalByRefObject
        isExternal: true
      VB:
      - id: System.MarshalByRefObject
        name: MarshalByRefObject
        nameWithType: MarshalByRefObject
        qualifiedName: System.MarshalByRefObject
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.MarshalByRefObject
  System.MarshalByRefObject.MemberwiseClone(System.Boolean):
    name:
      CSharp:
      - id: System.MarshalByRefObject.MemberwiseClone(System.Boolean)
        name: MemberwiseClone
        nameWithType: MarshalByRefObject.MemberwiseClone
        qualifiedName: System.MarshalByRefObject.MemberwiseClone
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.MarshalByRefObject.MemberwiseClone(System.Boolean)
        name: MemberwiseClone
        nameWithType: MarshalByRefObject.MemberwiseClone
        qualifiedName: System.MarshalByRefObject.MemberwiseClone
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.MarshalByRefObject
    commentId: M:System.MarshalByRefObject.MemberwiseClone(System.Boolean)
  System.MarshalByRefObject.GetLifetimeService:
    name:
      CSharp:
      - id: System.MarshalByRefObject.GetLifetimeService
        name: GetLifetimeService
        nameWithType: MarshalByRefObject.GetLifetimeService
        qualifiedName: System.MarshalByRefObject.GetLifetimeService
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.MarshalByRefObject.GetLifetimeService
        name: GetLifetimeService
        nameWithType: MarshalByRefObject.GetLifetimeService
        qualifiedName: System.MarshalByRefObject.GetLifetimeService
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.MarshalByRefObject
    commentId: M:System.MarshalByRefObject.GetLifetimeService
  System.MarshalByRefObject.InitializeLifetimeService:
    name:
      CSharp:
      - id: System.MarshalByRefObject.InitializeLifetimeService
        name: InitializeLifetimeService
        nameWithType: MarshalByRefObject.InitializeLifetimeService
        qualifiedName: System.MarshalByRefObject.InitializeLifetimeService
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.MarshalByRefObject.InitializeLifetimeService
        name: InitializeLifetimeService
        nameWithType: MarshalByRefObject.InitializeLifetimeService
        qualifiedName: System.MarshalByRefObject.InitializeLifetimeService
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.MarshalByRefObject
    commentId: M:System.MarshalByRefObject.InitializeLifetimeService
  System.MarshalByRefObject.CreateObjRef(System.Type):
    name:
      CSharp:
      - id: System.MarshalByRefObject.CreateObjRef(System.Type)
        name: CreateObjRef
        nameWithType: MarshalByRefObject.CreateObjRef
        qualifiedName: System.MarshalByRefObject.CreateObjRef
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Type
        name: Type
        nameWithType: Type
        qualifiedName: System.Type
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.MarshalByRefObject.CreateObjRef(System.Type)
        name: CreateObjRef
        nameWithType: MarshalByRefObject.CreateObjRef
        qualifiedName: System.MarshalByRefObject.CreateObjRef
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Type
        name: Type
        nameWithType: Type
        qualifiedName: System.Type
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.MarshalByRefObject
    commentId: M:System.MarshalByRefObject.CreateObjRef(System.Type)
  System.Object:
    name:
      CSharp:
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      VB:
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.Object
  System.Object.Equals(System.Object):
    name:
      CSharp:
      - id: System.Object.Equals(System.Object)
        name: Equals
        nameWithType: Object.Equals
        qualifiedName: System.Object.Equals
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Object.Equals(System.Object)
        name: Equals
        nameWithType: Object.Equals
        qualifiedName: System.Object.Equals
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Object
    commentId: M:System.Object.Equals(System.Object)
  System.Object.Equals(System.Object,System.Object):
    name:
      CSharp:
      - id: System.Object.Equals(System.Object,System.Object)
        name: Equals
        nameWithType: Object.Equals
        qualifiedName: System.Object.Equals
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Object.Equals(System.Object,System.Object)
        name: Equals
        nameWithType: Object.Equals
        qualifiedName: System.Object.Equals
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Object
    commentId: M:System.Object.Equals(System.Object,System.Object)
  System.Object.ReferenceEquals(System.Object,System.Object):
    name:
      CSharp:
      - id: System.Object.ReferenceEquals(System.Object,System.Object)
        name: ReferenceEquals
        nameWithType: Object.ReferenceEquals
        qualifiedName: System.Object.ReferenceEquals
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Object.ReferenceEquals(System.Object,System.Object)
        name: ReferenceEquals
        nameWithType: Object.ReferenceEquals
        qualifiedName: System.Object.ReferenceEquals
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Object
        name: Object
        nameWithType: Object
        qualifiedName: System.Object
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Object
    commentId: M:System.Object.ReferenceEquals(System.Object,System.Object)
  System.Object.GetHashCode:
    name:
      CSharp:
      - id: System.Object.GetHashCode
        name: GetHashCode
        nameWithType: Object.GetHashCode
        qualifiedName: System.Object.GetHashCode
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Object.GetHashCode
        name: GetHashCode
        nameWithType: Object.GetHashCode
        qualifiedName: System.Object.GetHashCode
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Object
    commentId: M:System.Object.GetHashCode
  System.Object.GetType:
    name:
      CSharp:
      - id: System.Object.GetType
        name: GetType
        nameWithType: Object.GetType
        qualifiedName: System.Object.GetType
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Object.GetType
        name: GetType
        nameWithType: Object.GetType
        qualifiedName: System.Object.GetType
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Object
    commentId: M:System.Object.GetType
  System.Object.MemberwiseClone:
    name:
      CSharp:
      - id: System.Object.MemberwiseClone
        name: MemberwiseClone
        nameWithType: Object.MemberwiseClone
        qualifiedName: System.Object.MemberwiseClone
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Object.MemberwiseClone
        name: MemberwiseClone
        nameWithType: Object.MemberwiseClone
        qualifiedName: System.Object.MemberwiseClone
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Object
    commentId: M:System.Object.MemberwiseClone
  System.Windows.Forms.IDropTarget:
    name:
      CSharp:
      - id: System.Windows.Forms.IDropTarget
        name: IDropTarget
        nameWithType: IDropTarget
        qualifiedName: System.Windows.Forms.IDropTarget
        isExternal: true
      VB:
      - id: System.Windows.Forms.IDropTarget
        name: IDropTarget
        nameWithType: IDropTarget
        qualifiedName: System.Windows.Forms.IDropTarget
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.IDropTarget
  System.ComponentModel.ISynchronizeInvoke:
    name:
      CSharp:
      - id: System.ComponentModel.ISynchronizeInvoke
        name: ISynchronizeInvoke
        nameWithType: ISynchronizeInvoke
        qualifiedName: System.ComponentModel.ISynchronizeInvoke
        isExternal: true
      VB:
      - id: System.ComponentModel.ISynchronizeInvoke
        name: ISynchronizeInvoke
        nameWithType: ISynchronizeInvoke
        qualifiedName: System.ComponentModel.ISynchronizeInvoke
        isExternal: true
    isDefinition: true
    parent: System.ComponentModel
    commentId: T:System.ComponentModel.ISynchronizeInvoke
  System.Windows.Forms.IWin32Window:
    name:
      CSharp:
      - id: System.Windows.Forms.IWin32Window
        name: IWin32Window
        nameWithType: IWin32Window
        qualifiedName: System.Windows.Forms.IWin32Window
        isExternal: true
      VB:
      - id: System.Windows.Forms.IWin32Window
        name: IWin32Window
        nameWithType: IWin32Window
        qualifiedName: System.Windows.Forms.IWin32Window
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.IWin32Window
  System.Windows.Forms.IBindableComponent:
    name:
      CSharp:
      - id: System.Windows.Forms.IBindableComponent
        name: IBindableComponent
        nameWithType: IBindableComponent
        qualifiedName: System.Windows.Forms.IBindableComponent
        isExternal: true
      VB:
      - id: System.Windows.Forms.IBindableComponent
        name: IBindableComponent
        nameWithType: IBindableComponent
        qualifiedName: System.Windows.Forms.IBindableComponent
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.IBindableComponent
  System.ComponentModel.IComponent:
    name:
      CSharp:
      - id: System.ComponentModel.IComponent
        name: IComponent
        nameWithType: IComponent
        qualifiedName: System.ComponentModel.IComponent
        isExternal: true
      VB:
      - id: System.ComponentModel.IComponent
        name: IComponent
        nameWithType: IComponent
        qualifiedName: System.ComponentModel.IComponent
        isExternal: true
    isDefinition: true
    parent: System.ComponentModel
    commentId: T:System.ComponentModel.IComponent
  System.IDisposable:
    name:
      CSharp:
      - id: System.IDisposable
        name: IDisposable
        nameWithType: IDisposable
        qualifiedName: System.IDisposable
        isExternal: true
      VB:
      - id: System.IDisposable
        name: IDisposable
        nameWithType: IDisposable
        qualifiedName: System.IDisposable
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.IDisposable
  System.Windows.Forms.IContainerControl:
    name:
      CSharp:
      - id: System.Windows.Forms.IContainerControl
        name: IContainerControl
        nameWithType: IContainerControl
        qualifiedName: System.Windows.Forms.IContainerControl
        isExternal: true
      VB:
      - id: System.Windows.Forms.IContainerControl
        name: IContainerControl
        nameWithType: IContainerControl
        qualifiedName: System.Windows.Forms.IContainerControl
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.IContainerControl
  System.Runtime.Serialization:
    name:
      CSharp:
      - name: System.Runtime.Serialization
        nameWithType: System.Runtime.Serialization
        qualifiedName: System.Runtime.Serialization
        isExternal: true
      VB:
      - name: System.Runtime.Serialization
        nameWithType: System.Runtime.Serialization
        qualifiedName: System.Runtime.Serialization
    isDefinition: true
    commentId: N:System.Runtime.Serialization
  System.Runtime.Serialization.ISerializable:
    name:
      CSharp:
      - id: System.Runtime.Serialization.ISerializable
        name: ISerializable
        nameWithType: ISerializable
        qualifiedName: System.Runtime.Serialization.ISerializable
        isExternal: true
      VB:
      - id: System.Runtime.Serialization.ISerializable
        name: ISerializable
        nameWithType: ISerializable
        qualifiedName: System.Runtime.Serialization.ISerializable
        isExternal: true
    isDefinition: true
    parent: System.Runtime.Serialization
    commentId: T:System.Runtime.Serialization.ISerializable
  WyświetlanieDanych.Form1.#ctor*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form1.#ctor*
        name: Form1
        nameWithType: Form1.Form1
        qualifiedName: WyświetlanieDanych.Form1.Form1
      VB:
      - id: WyświetlanieDanych.Form1.#ctor*
        name: Form1
        nameWithType: Form1.Form1
        qualifiedName: WyświetlanieDanych.Form1.Form1
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Form1.#ctor
  System.Runtime.Serialization.SerializationInfo:
    name:
      CSharp:
      - id: System.Runtime.Serialization.SerializationInfo
        name: SerializationInfo
        nameWithType: SerializationInfo
        qualifiedName: System.Runtime.Serialization.SerializationInfo
        isExternal: true
      VB:
      - id: System.Runtime.Serialization.SerializationInfo
        name: SerializationInfo
        nameWithType: SerializationInfo
        qualifiedName: System.Runtime.Serialization.SerializationInfo
        isExternal: true
    isDefinition: true
    parent: System.Runtime.Serialization
    commentId: T:System.Runtime.Serialization.SerializationInfo
  System.Runtime.Serialization.StreamingContext:
    name:
      CSharp:
      - id: System.Runtime.Serialization.StreamingContext
        name: StreamingContext
        nameWithType: StreamingContext
        qualifiedName: System.Runtime.Serialization.StreamingContext
        isExternal: true
      VB:
      - id: System.Runtime.Serialization.StreamingContext
        name: StreamingContext
        nameWithType: StreamingContext
        qualifiedName: System.Runtime.Serialization.StreamingContext
        isExternal: true
    isDefinition: true
    parent: System.Runtime.Serialization
    commentId: T:System.Runtime.Serialization.StreamingContext
  WyświetlanieDanych.Form1.GetObjectData*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form1.GetObjectData*
        name: GetObjectData
        nameWithType: Form1.GetObjectData
        qualifiedName: WyświetlanieDanych.Form1.GetObjectData
      VB:
      - id: WyświetlanieDanych.Form1.GetObjectData*
        name: GetObjectData
        nameWithType: Form1.GetObjectData
        qualifiedName: WyświetlanieDanych.Form1.GetObjectData
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Form1.GetObjectData
  ? System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
  : name:
      CSharp:
      - id: System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
        name: GetObjectData
        nameWithType: ISerializable.GetObjectData
        qualifiedName: System.Runtime.Serialization.ISerializable.GetObjectData
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Runtime.Serialization.SerializationInfo
        name: SerializationInfo
        nameWithType: SerializationInfo
        qualifiedName: System.Runtime.Serialization.SerializationInfo
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Runtime.Serialization.StreamingContext
        name: StreamingContext
        nameWithType: StreamingContext
        qualifiedName: System.Runtime.Serialization.StreamingContext
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
        name: GetObjectData
        nameWithType: ISerializable.GetObjectData
        qualifiedName: System.Runtime.Serialization.ISerializable.GetObjectData
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Runtime.Serialization.SerializationInfo
        name: SerializationInfo
        nameWithType: SerializationInfo
        qualifiedName: System.Runtime.Serialization.SerializationInfo
        isExternal: true
      - name: ', '
        nameWithType: ', '
        qualifiedName: ', '
      - id: System.Runtime.Serialization.StreamingContext
        name: StreamingContext
        nameWithType: StreamingContext
        qualifiedName: System.Runtime.Serialization.StreamingContext
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Runtime.Serialization.ISerializable
    commentId: M:System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
  System.Boolean:
    name:
      CSharp:
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      VB:
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.Boolean
  System.Windows.Forms.Form.Dispose(System.Boolean):
    name:
      CSharp:
      - id: System.Windows.Forms.Form.Dispose(System.Boolean)
        name: Dispose
        nameWithType: Form.Dispose
        qualifiedName: System.Windows.Forms.Form.Dispose
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Windows.Forms.Form.Dispose(System.Boolean)
        name: Dispose
        nameWithType: Form.Dispose
        qualifiedName: System.Windows.Forms.Form.Dispose
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - id: System.Boolean
        name: Boolean
        nameWithType: Boolean
        qualifiedName: System.Boolean
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Windows.Forms.Form
    commentId: M:System.Windows.Forms.Form.Dispose(System.Boolean)
  WyświetlanieDanych.Form1.Dispose*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form1.Dispose*
        name: Dispose
        nameWithType: Form1.Dispose
        qualifiedName: WyświetlanieDanych.Form1.Dispose
      VB:
      - id: WyświetlanieDanych.Form1.Dispose*
        name: Dispose
        nameWithType: Form1.Dispose
        qualifiedName: WyświetlanieDanych.Form1.Dispose
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Form1.Dispose
  WyświetlanieDanych.Form1:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form1
        name: Form1
        nameWithType: Form1
        qualifiedName: WyświetlanieDanych.Form1
      VB:
      - id: WyświetlanieDanych.Form1
        name: Form1
        nameWithType: Form1
        qualifiedName: WyświetlanieDanych.Form1
    isDefinition: true
    commentId: T:WyświetlanieDanych.Form1
  System.SerializableAttribute:
    name:
      CSharp:
      - id: System.SerializableAttribute
        name: SerializableAttribute
        nameWithType: SerializableAttribute
        qualifiedName: System.SerializableAttribute
        isExternal: true
      VB:
      - id: System.SerializableAttribute
        name: SerializableAttribute
        nameWithType: SerializableAttribute
        qualifiedName: System.SerializableAttribute
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.SerializableAttribute
  System.SerializableAttribute.#ctor:
    name:
      CSharp:
      - id: System.SerializableAttribute.#ctor
        name: SerializableAttribute
        nameWithType: SerializableAttribute.SerializableAttribute
        qualifiedName: System.SerializableAttribute.SerializableAttribute
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.SerializableAttribute.#ctor
        name: SerializableAttribute
        nameWithType: SerializableAttribute.SerializableAttribute
        qualifiedName: System.SerializableAttribute.SerializableAttribute
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.SerializableAttribute
    commentId: M:System.SerializableAttribute.#ctor
  System.String:
    name:
      CSharp:
      - id: System.String
        name: String
        nameWithType: String
        qualifiedName: System.String
        isExternal: true
      VB:
      - id: System.String
        name: String
        nameWithType: String
        qualifiedName: System.String
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.String
  WyświetlanieDanych.Form2.Name1*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form2.Name1*
        name: Name1
        nameWithType: Form2.Name1
        qualifiedName: WyświetlanieDanych.Form2.Name1
      VB:
      - id: WyświetlanieDanych.Form2.Name1*
        name: Name1
        nameWithType: Form2.Name1
        qualifiedName: WyświetlanieDanych.Form2.Name1
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Form2.Name1
  WyświetlanieDanych.Form2.Name2*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form2.Name2*
        name: Name2
        nameWithType: Form2.Name2
        qualifiedName: WyświetlanieDanych.Form2.Name2
      VB:
      - id: WyświetlanieDanych.Form2.Name2*
        name: Name2
        nameWithType: Form2.Name2
        qualifiedName: WyświetlanieDanych.Form2.Name2
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Form2.Name2
  WyświetlanieDanych.Form2.Name3*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form2.Name3*
        name: Name3
        nameWithType: Form2.Name3
        qualifiedName: WyświetlanieDanych.Form2.Name3
      VB:
      - id: WyświetlanieDanych.Form2.Name3*
        name: Name3
        nameWithType: Form2.Name3
        qualifiedName: WyświetlanieDanych.Form2.Name3
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Form2.Name3
  WyświetlanieDanych.Form2.#ctor*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form2.#ctor*
        name: Form2
        nameWithType: Form2.Form2
        qualifiedName: WyświetlanieDanych.Form2.Form2
      VB:
      - id: WyświetlanieDanych.Form2.#ctor*
        name: Form2
        nameWithType: Form2.Form2
        qualifiedName: WyświetlanieDanych.Form2.Form2
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Form2.#ctor
  WyświetlanieDanych.Form2.Dispose*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form2.Dispose*
        name: Dispose
        nameWithType: Form2.Dispose
        qualifiedName: WyświetlanieDanych.Form2.Dispose
      VB:
      - id: WyświetlanieDanych.Form2.Dispose*
        name: Dispose
        nameWithType: Form2.Dispose
        qualifiedName: WyświetlanieDanych.Form2.Dispose
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Form2.Dispose
  CircularProgressBar.CircularProgressBar:
    name:
      CSharp:
      - id: CircularProgressBar.CircularProgressBar
        name: CircularProgressBar.CircularProgressBar
        nameWithType: CircularProgressBar.CircularProgressBar
        qualifiedName: CircularProgressBar.CircularProgressBar
        isExternal: true
      VB:
      - id: CircularProgressBar.CircularProgressBar
        name: CircularProgressBar.CircularProgressBar
        nameWithType: CircularProgressBar.CircularProgressBar
        qualifiedName: CircularProgressBar.CircularProgressBar
        isExternal: true
    isDefinition: true
    commentId: '!:CircularProgressBar.CircularProgressBar'
  System.Windows.Forms.TrackBar:
    name:
      CSharp:
      - id: System.Windows.Forms.TrackBar
        name: TrackBar
        nameWithType: TrackBar
        qualifiedName: System.Windows.Forms.TrackBar
        isExternal: true
      VB:
      - id: System.Windows.Forms.TrackBar
        name: TrackBar
        nameWithType: TrackBar
        qualifiedName: System.Windows.Forms.TrackBar
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms
    commentId: T:System.Windows.Forms.TrackBar
  System.Windows.Forms.DataVisualization.Charting:
    name:
      CSharp:
      - name: System.Windows.Forms.DataVisualization.Charting
        nameWithType: System.Windows.Forms.DataVisualization.Charting
        qualifiedName: System.Windows.Forms.DataVisualization.Charting
        isExternal: true
      VB:
      - name: System.Windows.Forms.DataVisualization.Charting
        nameWithType: System.Windows.Forms.DataVisualization.Charting
        qualifiedName: System.Windows.Forms.DataVisualization.Charting
    isDefinition: true
    commentId: N:System.Windows.Forms.DataVisualization.Charting
  System.Windows.Forms.DataVisualization.Charting.Chart:
    name:
      CSharp:
      - id: System.Windows.Forms.DataVisualization.Charting.Chart
        name: Chart
        nameWithType: Chart
        qualifiedName: System.Windows.Forms.DataVisualization.Charting.Chart
        isExternal: true
      VB:
      - id: System.Windows.Forms.DataVisualization.Charting.Chart
        name: Chart
        nameWithType: Chart
        qualifiedName: System.Windows.Forms.DataVisualization.Charting.Chart
        isExternal: true
    isDefinition: true
    parent: System.Windows.Forms.DataVisualization.Charting
    commentId: T:System.Windows.Forms.DataVisualization.Charting.Chart
  WyświetlanieDanych.Form2:
    name:
      CSharp:
      - id: WyświetlanieDanych.Form2
        name: Form2
        nameWithType: Form2
        qualifiedName: WyświetlanieDanych.Form2
      VB:
      - id: WyświetlanieDanych.Form2
        name: Form2
        nameWithType: Form2
        qualifiedName: WyświetlanieDanych.Form2
    isDefinition: true
    commentId: T:WyświetlanieDanych.Form2
  System.Object.ToString:
    name:
      CSharp:
      - id: System.Object.ToString
        name: ToString
        nameWithType: Object.ToString
        qualifiedName: System.Object.ToString
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.Object.ToString
        name: ToString
        nameWithType: Object.ToString
        qualifiedName: System.Object.ToString
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.Object
    commentId: M:System.Object.ToString
  System.Collections.Generic.List`1:
    name:
      CSharp:
      - id: System.Collections.Generic.List`1
        name: List
        nameWithType: List
        qualifiedName: System.Collections.Generic.List
        isExternal: true
      - name: <
        nameWithType: <
        qualifiedName: <
      - name: T
        nameWithType: T
        qualifiedName: T
      - name: '>'
        nameWithType: '>'
        qualifiedName: '>'
      VB:
      - id: System.Collections.Generic.List`1
        name: List
        nameWithType: List
        qualifiedName: System.Collections.Generic.List
        isExternal: true
      - name: '(Of '
        nameWithType: '(Of '
        qualifiedName: '(Of '
      - name: T
        nameWithType: T
        qualifiedName: T
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    commentId: T:System.Collections.Generic.List`1
  System.Collections.Generic:
    name:
      CSharp:
      - name: System.Collections.Generic
        nameWithType: System.Collections.Generic
        qualifiedName: System.Collections.Generic
        isExternal: true
      VB:
      - name: System.Collections.Generic
        nameWithType: System.Collections.Generic
        qualifiedName: System.Collections.Generic
    isDefinition: true
    commentId: N:System.Collections.Generic
  System.Collections.Generic.List{System.String}:
    name:
      CSharp:
      - id: System.Collections.Generic.List`1
        name: List
        nameWithType: List
        qualifiedName: System.Collections.Generic.List
        isExternal: true
      - name: <
        nameWithType: <
        qualifiedName: <
      - id: System.String
        name: String
        nameWithType: String
        qualifiedName: System.String
        isExternal: true
      - name: '>'
        nameWithType: '>'
        qualifiedName: '>'
      VB:
      - id: System.Collections.Generic.List`1
        name: List
        nameWithType: List
        qualifiedName: System.Collections.Generic.List
        isExternal: true
      - name: '(Of '
        nameWithType: '(Of '
        qualifiedName: '(Of '
      - id: System.String
        name: String
        nameWithType: String
        qualifiedName: System.String
        isExternal: true
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: false
    definition: System.Collections.Generic.List`1
    parent: System.Collections.Generic
    commentId: T:System.Collections.Generic.List{System.String}
  WyświetlanieDanych.OdbieranieDanych.Wartosci*:
    name:
      CSharp:
      - id: WyświetlanieDanych.OdbieranieDanych.Wartosci*
        name: Wartosci
        nameWithType: OdbieranieDanych.Wartosci
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.Wartosci
      VB:
      - id: WyświetlanieDanych.OdbieranieDanych.Wartosci*
        name: Wartosci
        nameWithType: OdbieranieDanych.Wartosci
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.Wartosci
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.OdbieranieDanych.Wartosci
  System.DateTime:
    name:
      CSharp:
      - id: System.DateTime
        name: DateTime
        nameWithType: DateTime
        qualifiedName: System.DateTime
        isExternal: true
      VB:
      - id: System.DateTime
        name: DateTime
        nameWithType: DateTime
        qualifiedName: System.DateTime
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.DateTime
  WyświetlanieDanych.OdbieranieDanych.dateTime*:
    name:
      CSharp:
      - id: WyświetlanieDanych.OdbieranieDanych.dateTime*
        name: dateTime
        nameWithType: OdbieranieDanych.dateTime
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.dateTime
      VB:
      - id: WyświetlanieDanych.OdbieranieDanych.dateTime*
        name: dateTime
        nameWithType: OdbieranieDanych.dateTime
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.dateTime
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.OdbieranieDanych.dateTime
  WyświetlanieDanych.OdbieranieDanych.PortName*:
    name:
      CSharp:
      - id: WyświetlanieDanych.OdbieranieDanych.PortName*
        name: PortName
        nameWithType: OdbieranieDanych.PortName
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.PortName
      VB:
      - id: WyświetlanieDanych.OdbieranieDanych.PortName*
        name: PortName
        nameWithType: OdbieranieDanych.PortName
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.PortName
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.OdbieranieDanych.PortName
  WyświetlanieDanych.OdbieranieDanych.#ctor*:
    name:
      CSharp:
      - id: WyświetlanieDanych.OdbieranieDanych.#ctor*
        name: OdbieranieDanych
        nameWithType: OdbieranieDanych.OdbieranieDanych
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.OdbieranieDanych
      VB:
      - id: WyświetlanieDanych.OdbieranieDanych.#ctor*
        name: OdbieranieDanych
        nameWithType: OdbieranieDanych.OdbieranieDanych
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.OdbieranieDanych
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.OdbieranieDanych.#ctor
  System.EventHandler:
    name:
      CSharp:
      - id: System.EventHandler
        name: EventHandler
        nameWithType: EventHandler
        qualifiedName: System.EventHandler
        isExternal: true
      VB:
      - id: System.EventHandler
        name: EventHandler
        nameWithType: EventHandler
        qualifiedName: System.EventHandler
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.EventHandler
  System.IO.Ports:
    name:
      CSharp:
      - name: System.IO.Ports
        nameWithType: System.IO.Ports
        qualifiedName: System.IO.Ports
        isExternal: true
      VB:
      - name: System.IO.Ports
        nameWithType: System.IO.Ports
        qualifiedName: System.IO.Ports
    isDefinition: true
    commentId: N:System.IO.Ports
  System.IO.Ports.SerialDataReceivedEventArgs:
    name:
      CSharp:
      - id: System.IO.Ports.SerialDataReceivedEventArgs
        name: SerialDataReceivedEventArgs
        nameWithType: SerialDataReceivedEventArgs
        qualifiedName: System.IO.Ports.SerialDataReceivedEventArgs
        isExternal: true
      VB:
      - id: System.IO.Ports.SerialDataReceivedEventArgs
        name: SerialDataReceivedEventArgs
        nameWithType: SerialDataReceivedEventArgs
        qualifiedName: System.IO.Ports.SerialDataReceivedEventArgs
        isExternal: true
    isDefinition: true
    parent: System.IO.Ports
    commentId: T:System.IO.Ports.SerialDataReceivedEventArgs
  WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived*:
    name:
      CSharp:
      - id: WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived*
        name: serialPort_DataRecived
        nameWithType: OdbieranieDanych.serialPort_DataRecived
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived
      VB:
      - id: WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived*
        name: serialPort_DataRecived
        nameWithType: OdbieranieDanych.serialPort_DataRecived
        qualifiedName: WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.OdbieranieDanych.serialPort_DataRecived
  WyświetlanieDanych.OdbieranieDanych:
    name:
      CSharp:
      - id: WyświetlanieDanych.OdbieranieDanych
        name: OdbieranieDanych
        nameWithType: OdbieranieDanych
        qualifiedName: WyświetlanieDanych.OdbieranieDanych
      VB:
      - id: WyświetlanieDanych.OdbieranieDanych
        name: OdbieranieDanych
        nameWithType: OdbieranieDanych
        qualifiedName: WyświetlanieDanych.OdbieranieDanych
    isDefinition: true
    commentId: T:WyświetlanieDanych.OdbieranieDanych
  WyświetlanieDanych.Program.Main*:
    name:
      CSharp:
      - id: WyświetlanieDanych.Program.Main*
        name: Main
        nameWithType: Program.Main
        qualifiedName: WyświetlanieDanych.Program.Main
      VB:
      - id: WyświetlanieDanych.Program.Main*
        name: Main
        nameWithType: Program.Main
        qualifiedName: WyświetlanieDanych.Program.Main
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.Program.Main
  System.STAThreadAttribute:
    name:
      CSharp:
      - id: System.STAThreadAttribute
        name: STAThreadAttribute
        nameWithType: STAThreadAttribute
        qualifiedName: System.STAThreadAttribute
        isExternal: true
      VB:
      - id: System.STAThreadAttribute
        name: STAThreadAttribute
        nameWithType: STAThreadAttribute
        qualifiedName: System.STAThreadAttribute
        isExternal: true
    isDefinition: true
    parent: System
    commentId: T:System.STAThreadAttribute
  System.STAThreadAttribute.#ctor:
    name:
      CSharp:
      - id: System.STAThreadAttribute.#ctor
        name: STAThreadAttribute
        nameWithType: STAThreadAttribute.STAThreadAttribute
        qualifiedName: System.STAThreadAttribute.STAThreadAttribute
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
      VB:
      - id: System.STAThreadAttribute.#ctor
        name: STAThreadAttribute
        nameWithType: STAThreadAttribute.STAThreadAttribute
        qualifiedName: System.STAThreadAttribute.STAThreadAttribute
        isExternal: true
      - name: (
        nameWithType: (
        qualifiedName: (
      - name: )
        nameWithType: )
        qualifiedName: )
    isDefinition: true
    parent: System.STAThreadAttribute
    commentId: M:System.STAThreadAttribute.#ctor
  WyświetlanieDanych.Program:
    name:
      CSharp:
      - id: WyświetlanieDanych.Program
        name: Program
        nameWithType: Program
        qualifiedName: WyświetlanieDanych.Program
      VB:
      - id: WyświetlanieDanych.Program
        name: Program
        nameWithType: Program
        qualifiedName: WyświetlanieDanych.Program
    isDefinition: true
    commentId: T:WyświetlanieDanych.Program
  WyświetlanieDanych:
    name:
      CSharp:
      - name: WyświetlanieDanych
        nameWithType: WyświetlanieDanych
        qualifiedName: WyświetlanieDanych
      VB:
      - name: WyświetlanieDanych
        nameWithType: WyświetlanieDanych
        qualifiedName: WyświetlanieDanych
    isDefinition: true
    commentId: N:WyświetlanieDanych
  WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main*:
    name:
      CSharp:
      - id: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main*
        name: Main
        nameWithType: Run_odbieranie.Main
        qualifiedName: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main
      VB:
      - id: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main*
        name: Main
        nameWithType: Run_odbieranie.Main
        qualifiedName: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main
    isDefinition: true
    commentId: Overload:WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie.Main
  WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie:
    name:
      CSharp:
      - id: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
        name: Run_odbieranie
        nameWithType: Run_odbieranie
        qualifiedName: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
      VB:
      - id: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
        name: Run_odbieranie
        nameWithType: Run_odbieranie
        qualifiedName: WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
    isDefinition: true
    commentId: T:WyświetlanieDanych.KomponentOdbieranie.Run_odbieranie
  WyświetlanieDanych.KomponentOdbieranie:
    name:
      CSharp:
      - name: WyświetlanieDanych.KomponentOdbieranie
        nameWithType: WyświetlanieDanych.KomponentOdbieranie
        qualifiedName: WyświetlanieDanych.KomponentOdbieranie
      VB:
      - name: WyświetlanieDanych.KomponentOdbieranie
        nameWithType: WyświetlanieDanych.KomponentOdbieranie
        qualifiedName: WyświetlanieDanych.KomponentOdbieranie
    isDefinition: true
    commentId: N:WyświetlanieDanych.KomponentOdbieranie
