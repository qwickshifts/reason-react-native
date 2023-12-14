type state;
type actionInfo;
type checked('a) = 'a;

[@mel.inline]
let checked = true;

[@mel.inline]
let unchecked = false;

[@mel.inline]
let mixed = "mixed";

[@mel.obj]
external actionInfo: (~name: string, ~label: string=?, unit) => actionInfo;

type actionEvent = AccessibilityActionEvent.t;

[@mel.obj]
external state:
  (
    ~disabled: bool=?,
    ~selected: bool=?,
    ~checked: checked('a)=?,
    ~busy: bool=?,
    ~expanded: bool=?,
    unit
  ) =>
  state;

type value;

[@mel.obj] external textValue: (~text: string) => value;

[@mel.obj] external intValue: (~min: int, ~max: int, ~now: int) => value;

type liveRegion = [ | `none | `polite | `assertive];

// @todo see with ReScript how we can handle this
// | `switch
type role = [
  | `adjustable
  | `alert
  | `article
  | `banner
  | `button
  | `checkbox
  | `combobox
  | `complementary
  | `contentinfo
  | `form
  | `header
  | `image
  | `imagebutton
  | `keyboardkey
  | `link
  | `list
  | `listitem
  | `main
  | `menu
  | `menubar
  | `menuitem
  | `navigation
  | `none
  | `progressbar
  | `radio
  | `radiogroup
  | `region
  | `scrollbar
  | `search
  | `spinbutton
  | `summary
  | `tab
  | `tablist
  | `text
  | `timer
  | `toolbar
];
