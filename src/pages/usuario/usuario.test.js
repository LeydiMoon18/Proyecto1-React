import { render, screen } from '@testing-library/react';
import usuario from './usuario';

test('renders learn react link', () => {
  render(<usuario />);
  const linkElement = screen.getByText(/learn react/i);
  expect(linkElement).toBeInTheDocument();
});
