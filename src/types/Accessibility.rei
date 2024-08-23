module AccessibilityRole: {
  type t;

  let adjustable: t;
  let alert: t;
  let button: t;
  let checkbox: t;
  let combobox: t;
  let header: t;
  let image: t;
  let imagebutton: t;
  let keyboardkey: t;
  let link: t;
  let menu: t;
  let menubar: t;
  let menuitem: t;
  let none: t;
  let progressbar: t;
  let radio: t;
  let radiogroup: t;
  let scrollbar: t;
  let search: t;
  let spinbutton: t;
  let summary: t;
  let switch_: t;
  let tab: t;
  let tablist: t;
  let text: t;
  let timer: t;
  let togglebutton: t;
  let toolbar: t;
  let grid: t;
};

module Action: {
  [@deriving jsProperties]
  type t = {
    name: string,
    label: string,
  };
};

module Checked: {
  type t('a);
  // [@mel.inline true]
  let checked: t(bool);
  // [@mel.inline false]
  let unchecked: t(bool);
  // [@mel.inline "mixed"]
  let mixed: t(string);
};

module Role: {
  type t;
  let alert: t;
  let button: t;
  let checkbox: t;
  let combobox: t;
  let grid: t;
  let heading: t;
  let img: t;
  let link: t;
  let list: t;
  let menu: t;
  let menubar: t;
  let menuitem: t;
  let none: t;
  let presentation: t;
  let progressbar: t;
  let radio: t;
  let radiogroup: t;
  let scrollbar: t;
  let searchbox: t;
  let slider: t;
  let spinbutton: t;
  let summary: t;
  let switch_: t;
  let tab: t;
  let tablist: t;
  let timer: t;
  let toolbar: t;
};

module State: {
  type t;
  [@mel.obj]
  external t:
    (
      ~disabled: bool=?,
      ~selected: bool=?,
      ~checked: Checked.t('a)=?,
      ~busy: bool=?,
      ~expanded: bool=?,
      unit
    ) =>
    t;
};

module Value: {
  [@deriving jsProperties]
  type t = {
    [@mel.optional]
    min: option(int),
    [@mel.optional]
    max: option(int),
    [@mel.optional]
    now: option(int),
    [@mel.optional]
    text: option(string),
  };
};
