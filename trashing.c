int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		index;
	int		i;

	index = 0;
	i = 0;
	if (!str)
		return (0);
	va_start(args, str);
	if (write(1, 0, 0) < 0)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
			index += ft_handle_flag(args, str, &i);
		else
			index += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (index);
}

int	ft_handle_flag(va_list args, const char *str, int *i)
{
	if (str[++(*i)] != '%')
		return (ft_flagh(args, str[(*i)]));
	else
		return (ft_putchar(str[(*i)]));
}
