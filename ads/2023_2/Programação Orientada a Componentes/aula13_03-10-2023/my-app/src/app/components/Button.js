export default function Button({ text, click }) {
  return (
    <>
      <button
        type="button"
        onClick={click}
        className="p-3 bg-red-900 rounded-xl">
        { text }
      </button>
    </>
  )
}
