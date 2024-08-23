[@deriving jsProperties]
type t('a, 'b) = {
  [@mel.optional]
  index: option(int),
  isViewable: bool,
  item: 'a,
  key: string,
  [@mel.optional]
  section: option('b),
};
